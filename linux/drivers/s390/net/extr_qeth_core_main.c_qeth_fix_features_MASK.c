
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef int netdev_features_t ;
typedef int features ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct qeth_card*,int,int *,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 int FUNC_3 (struct qeth_card*,int ) ;

netdev_features_t FUNC_4(struct net_device *VAR_10,
        netdev_features_t VAR_11)
{
 struct qeth_card *VAR_12 = VAR_10->ml_priv;

 FUNC_1(VAR_12, 2, "fixfeat");
 if (!FUNC_2(VAR_12, VAR_2))
  VAR_11 &= ~VAR_6;
 if (!FUNC_3(VAR_12, VAR_3))
  VAR_11 &= ~VAR_5;
 if (!FUNC_2(VAR_12, VAR_0) &&
     !FUNC_3(VAR_12, VAR_1))
  VAR_11 &= ~VAR_7;
 if (!FUNC_2(VAR_12, VAR_4))
  VAR_11 &= ~VAR_8;
 if (!FUNC_3(VAR_12, VAR_4))
  VAR_11 &= ~VAR_9;

 FUNC_0(VAR_12, 2, &VAR_11, sizeof(VAR_11));
 return VAR_11;
}
