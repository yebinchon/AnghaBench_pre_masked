
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_acpi_dev {int wwan_rfk; int killswitch; TYPE_1__* acpi_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,int ,int *,struct toshiba_acpi_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct toshiba_acpi_dev*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct toshiba_acpi_dev *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_3);

 if (VAR_4)
  return VAR_4;

 VAR_3->wwan_rfk = FUNC_1("Toshiba WWAN",
         &VAR_3->acpi_dev->dev,
         VAR_1,
         &VAR_2,
         VAR_3);
 if (!VAR_3->wwan_rfk) {
  FUNC_0("Unable to allocate WWAN rfkill device\n");
  return -VAR_0;
 }

 FUNC_4(VAR_3->wwan_rfk, !VAR_3->killswitch);

 VAR_4 = FUNC_3(VAR_3->wwan_rfk);
 if (VAR_4) {
  FUNC_0("Unable to register WWAN rfkill device\n");
  FUNC_2(VAR_3->wwan_rfk);
 }

 return VAR_4;
}
