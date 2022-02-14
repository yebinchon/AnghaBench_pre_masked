
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int length; int * pointer; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ buffer; } ;
typedef int u64 ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int) ;
 union acpi_object* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (void*,int *,size_t) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(acpi_handle VAR_3, char *VAR_4, u64 *VAR_5,
  void *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;
 size_t VAR_9;
 union acpi_object *VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5);

 if (!VAR_10)
  return -VAR_2;

 if (VAR_10->type == VAR_0) {
  VAR_9 = FUNC_0(VAR_7, VAR_10->buffer.length);
  FUNC_3(VAR_6, VAR_10->buffer.pointer, VAR_9);

 } else if (VAR_10->type == VAR_1) {
  VAR_9 = FUNC_0(VAR_7, sizeof(VAR_10->integer.value));
  FUNC_3(VAR_6, &VAR_10->integer.value, VAR_9);

 } else {
  FUNC_4("Invalid acpi_object: expected 0x%x got 0x%x\n",
    VAR_0, VAR_10->type);
  VAR_8 = -VAR_2;
 }

 FUNC_2(VAR_10);
 return VAR_8;
}
