
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u16 ;
struct wmi_device {int dev; } ;
struct dell_wmi_priv {scalar_t__ interface_version; } ;
typedef int acpi_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wmi_device*,int,int) ;
 struct dell_wmi_priv* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct wmi_device *VAR_1,
       union acpi_object *VAR_2)
{
 struct dell_wmi_priv *VAR_3 = FUNC_1(&VAR_1->dev);
 u16 *VAR_4, *VAR_5;
 acpi_size VAR_6;
 int VAR_7, VAR_8;

 if (VAR_2->type != VAR_0) {
  FUNC_4("bad response type %x\n", VAR_2->type);
  return;
 }

 FUNC_2("Received WMI event (%*ph)\n",
  VAR_2->buffer.length, VAR_2->buffer.pointer);

 VAR_4 = (u16 *)VAR_2->buffer.pointer;
 VAR_6 = VAR_2->buffer.length/2;
 VAR_5 = VAR_4 + VAR_6;
 if (VAR_3->interface_version == 0 && VAR_4 < VAR_5)
  if (VAR_5 > VAR_4 + VAR_4[0] + 1)
   VAR_5 = VAR_4 + VAR_4[0] + 1;

 while (VAR_4 < VAR_5) {

  VAR_7 = VAR_4[0];
  if (VAR_7 == 0)
   break;

  VAR_7++;

  if (VAR_4 + VAR_7 > VAR_5) {
   FUNC_4("Invalid length of WMI event\n");
   break;
  }

  FUNC_2("Process buffer (%*ph)\n", VAR_7*2, VAR_4);

  switch (VAR_4[1]) {
  case 0x0000:
   if (VAR_7 > 2)
    FUNC_0(VAR_1, 0x0000,
           VAR_4[2]);

   break;
  case 0x0010:
  case 0x0011:
   for (VAR_8 = 2; VAR_8 < VAR_7; ++VAR_8)
    FUNC_0(VAR_1, VAR_4[1],
           VAR_4[VAR_8]);
   break;
  default:
   FUNC_3("Unknown WMI event type 0x%x\n",
    (int)VAR_4[1]);
   break;
  }

  VAR_4 += VAR_7;

 }

}
