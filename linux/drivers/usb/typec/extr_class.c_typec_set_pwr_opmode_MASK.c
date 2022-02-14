
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct typec_port {int pwr_opmode; TYPE_1__ dev; } ;
struct typec_partner {int usb_pd; } ;
struct device {int kobj; } ;
typedef enum typec_pwr_opmode { ____Placeholder_typec_pwr_opmode } typec_pwr_opmode ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *,char*) ;
 struct typec_partner* FUNC_4 (struct device*) ;

void FUNC_5(struct typec_port *VAR_3,
     enum typec_pwr_opmode VAR_4)
{
 struct device *VAR_5;

 if (VAR_3->pwr_opmode == VAR_4)
  return;

 VAR_3->pwr_opmode = VAR_4;
 FUNC_3(&VAR_3->dev.kobj, ((void*)0), "power_operation_mode");
 FUNC_1(&VAR_3->dev.kobj, VAR_0);

 VAR_5 = FUNC_0(&VAR_3->dev, ((void*)0), VAR_2);
 if (VAR_5) {
  struct typec_partner *VAR_6 = FUNC_4(VAR_5);

  if (VAR_4 == VAR_1 && !VAR_6->usb_pd) {
   VAR_6->usb_pd = 1;
   FUNC_3(&VAR_5->kobj, ((void*)0),
         "supports_usb_power_delivery");
  }
  FUNC_2(VAR_5);
 }
}
