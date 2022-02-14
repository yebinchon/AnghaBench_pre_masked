
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct qede_dev {scalar_t__ state; int cdev; TYPE_2__* ops; } ;
struct net_device {int dev_addr; } ;
struct TYPE_4__ {TYPE_1__* common; int (* req_bulletin_update_mac ) (int ,int ) ;int (* check_mac ) (int ,int ) ;} ;
struct TYPE_3__ {int (* update_mac ) (int ,int ) ;} ;


 int FUNC_0 (struct qede_dev*,char*,int ) ;
 int FUNC_1 (struct qede_dev*,char*,...) ;
 int FUNC_2 (struct qede_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct qede_dev*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct qede_dev*) ;
 int FUNC_5 (struct qede_dev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 struct qede_dev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct qede_dev*,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

int FUNC_13(struct net_device *VAR_6, void *VAR_7)
{
 struct qede_dev *VAR_8 = FUNC_8(VAR_6);
 struct sockaddr *VAR_9 = VAR_7;
 int VAR_10 = 0;





 FUNC_4(VAR_8);

 if (!FUNC_7(VAR_9->sa_data)) {
  FUNC_1(VAR_8, "The MAC address is not valid\n");
  VAR_10 = -VAR_0;
  goto out;
 }

 if (!VAR_8->ops->check_mac(VAR_8->cdev, VAR_9->sa_data)) {
  FUNC_1(VAR_8, "qed prevents setting MAC %pM\n",
     VAR_9->sa_data);
  VAR_10 = -VAR_1;
  goto out;
 }

 if (VAR_8->state == VAR_3) {

  VAR_10 = FUNC_9(VAR_8, VAR_5,
        VAR_6->dev_addr);
  if (VAR_10)
   goto out;
 }

 FUNC_6(VAR_6->dev_addr, VAR_9->sa_data);
 FUNC_0(VAR_8, "Setting device MAC to %pM\n", VAR_9->sa_data);

 if (VAR_8->state != VAR_3) {
  FUNC_2(VAR_8, VAR_2,
      "The device is currently down\n");

  if (FUNC_3(VAR_8) && VAR_8->ops->req_bulletin_update_mac)
   VAR_8->ops->req_bulletin_update_mac(VAR_8->cdev,
          VAR_6->dev_addr);
  goto out;
 }

 VAR_8->ops->common->update_mac(VAR_8->cdev, VAR_6->dev_addr);

 VAR_10 = FUNC_9(VAR_8, VAR_4,
       VAR_6->dev_addr);
out:
 FUNC_5(VAR_8);
 return VAR_10;
}
