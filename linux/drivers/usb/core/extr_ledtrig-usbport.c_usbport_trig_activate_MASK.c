
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct usbport_trig_data {TYPE_2__ nb; int ports; struct led_classdev* led_cdev; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usbport_trig_data*) ;
 struct usbport_trig_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct led_classdev*,struct usbport_trig_data*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct usbport_trig_data*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct usbport_trig_data*) ;

__attribute__((used)) static int FUNC_8(struct led_classdev *VAR_5)
{
 struct usbport_trig_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->led_cdev = VAR_5;


 FUNC_0(&VAR_6->ports);
 VAR_7 = FUNC_4(&VAR_5->dev->kobj, &VAR_2);
 if (VAR_7)
  goto err_free;
 FUNC_5(VAR_6, VAR_3);
 FUNC_7(VAR_6);


 VAR_6->nb.notifier_call = VAR_4;
 FUNC_3(VAR_5, VAR_6);
 FUNC_6(&VAR_6->nb);
 return 0;

err_free:
 FUNC_1(VAR_6);
 return VAR_7;
}
