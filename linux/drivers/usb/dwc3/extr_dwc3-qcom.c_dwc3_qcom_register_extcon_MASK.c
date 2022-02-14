
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct extcon_dev {int dummy; } ;
struct TYPE_4__ {int (* notifier_call ) (TYPE_1__*,int,struct extcon_dev*) ;} ;
struct dwc3_qcom {struct extcon_dev* edev; TYPE_1__ vbus_nb; TYPE_1__ host_nb; struct extcon_dev* host_edev; struct device* dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extcon_dev*) ;
 int FUNC_1 (struct extcon_dev*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct extcon_dev*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,struct extcon_dev*) ;
 int FUNC_5 (TYPE_1__*,int,struct extcon_dev*) ;
 void* FUNC_6 (struct device*,int) ;
 scalar_t__ FUNC_7 (struct extcon_dev*,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct dwc3_qcom *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct extcon_dev *VAR_4;
 int VAR_5;

 if (!FUNC_8(VAR_3->of_node, "extcon"))
  return 0;

 VAR_2->edev = FUNC_6(VAR_3, 0);
 if (FUNC_0(VAR_2->edev))
  return FUNC_1(VAR_2->edev);

 VAR_2->vbus_nb.notifier_call = FUNC_5;

 VAR_2->host_edev = FUNC_6(VAR_3, 1);
 if (FUNC_0(VAR_2->host_edev))
  VAR_2->host_edev = ((void*)0);

 VAR_5 = FUNC_3(VAR_3, VAR_2->edev, VAR_0,
         &VAR_2->vbus_nb);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3, "VBUS notifier register failed\n");
  return VAR_5;
 }

 if (VAR_2->host_edev)
  VAR_4 = VAR_2->host_edev;
 else
  VAR_4 = VAR_2->edev;

 VAR_2->host_nb.notifier_call = FUNC_4;
 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_1,
         &VAR_2->host_nb);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3, "Host notifier register failed\n");
  return VAR_5;
 }


 if (FUNC_7(VAR_2->edev, VAR_0) ||
     !FUNC_7(VAR_4, VAR_1))
  FUNC_5(&VAR_2->vbus_nb, 1, VAR_2->edev);
 else
  FUNC_5(&VAR_2->vbus_nb, 0, VAR_2->edev);

 return 0;
}
