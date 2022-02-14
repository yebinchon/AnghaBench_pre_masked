
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct net_device {int ifindex; TYPE_4__ dev; int * rtnl_link_ops; } ;
struct TYPE_5__ {int minor; } ;
struct macvtap_dev {TYPE_1__ tap; } ;
struct device {int kobj; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (int *,TYPE_4__*,int ,struct net_device*,char*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_6 (void*) ;
 struct macvtap_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int *,int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct notifier_block *VAR_6,
    unsigned long VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = FUNC_6(VAR_8);
 struct macvtap_dev *VAR_10;
 struct device *VAR_11;
 dev_t VAR_12;
 int VAR_13;
 char VAR_14[VAR_0];

 if (VAR_9->rtnl_link_ops != &VAR_4)
  return VAR_2;

 FUNC_9(VAR_14, VAR_0, "tap%d", VAR_9->ifindex);
 VAR_10 = FUNC_7(VAR_9);

 switch (VAR_7) {
 case 129:




  VAR_13 = FUNC_13(VAR_5, &VAR_10->tap);
  if (VAR_13)
   return FUNC_8(VAR_13);

  VAR_12 = FUNC_2(FUNC_1(VAR_5), VAR_10->tap.minor);
  VAR_11 = FUNC_4(&VAR_3, &VAR_9->dev, VAR_12,
      VAR_9, VAR_14);
  if (FUNC_0(VAR_11)) {
   FUNC_12(VAR_5, &VAR_10->tap);
   return FUNC_8(FUNC_3(VAR_11));
  }
  VAR_13 = FUNC_10(&VAR_9->dev.kobj, &VAR_11->kobj,
     VAR_14);
  if (VAR_13)
   return FUNC_8(VAR_13);
  break;
 case 128:

  if (VAR_10->tap.minor == 0)
   break;
  FUNC_11(&VAR_9->dev.kobj, VAR_14);
  VAR_12 = FUNC_2(FUNC_1(VAR_5), VAR_10->tap.minor);
  FUNC_5(&VAR_3, VAR_12);
  FUNC_12(VAR_5, &VAR_10->tap);
  break;
 case 130:
  if (FUNC_14(&VAR_10->tap))
   return VAR_1;
  break;
 }

 return VAR_2;
}
