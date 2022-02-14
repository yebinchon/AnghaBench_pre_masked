
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* pointer; } ;
struct TYPE_3__ {char* pointer; } ;
union acpi_object {int type; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef char* uint ;
struct asus_laptop {int have_rsts; int handle; int name; int dsdt_info; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (union acpi_object*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,char*,int ) ;
 scalar_t__ FUNC_10 (int ,char*,int ,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_11(struct asus_laptop *VAR_8)
{
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_10 = ((void*)0);
 unsigned long long VAR_11;
 char *VAR_12 = ((void*)0);
 acpi_status VAR_13;
 VAR_13 = FUNC_3(VAR_1, 1, &VAR_8->dsdt_info);
 if (FUNC_0(VAR_13))
  FUNC_8("Couldn't get the DSDT table header\n");


 if (FUNC_10(VAR_8->handle, "INIT", 0, &VAR_9)) {
  FUNC_6("Hotkey initialization failed\n");
  return -VAR_3;
 }


 VAR_13 =
     FUNC_2(VAR_8->handle, "BSTS", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_13))
  FUNC_8("Error calling BSTS\n");
 else if (VAR_11)
  FUNC_7("BSTS called, 0x%02x returned\n",
         (uint) VAR_11);


 if (FUNC_9(VAR_8->handle, "CWAP", VAR_7))
  FUNC_6("Error calling CWAP(%d)\n", VAR_7);






 if (VAR_9.pointer) {
  VAR_10 = VAR_9.pointer;
  switch (VAR_10->type) {
  case 128:
   VAR_12 = VAR_10->string.pointer;
   break;
  case 129:
   VAR_12 = VAR_10->buffer.pointer;
   break;
  default:
   VAR_12 = "";
   break;
  }
 }
 VAR_8->name = FUNC_5(VAR_12, VAR_5);
 if (!VAR_8->name) {
  FUNC_4(VAR_9.pointer);
  return -VAR_4;
 }

 if (VAR_12)
  FUNC_7("  %s model detected\n", VAR_12);

 if (!FUNC_1(VAR_8->handle, VAR_6, ((void*)0)))
  VAR_8->have_rsts = 1;

 FUNC_4(VAR_10);

 return VAR_2;
}
