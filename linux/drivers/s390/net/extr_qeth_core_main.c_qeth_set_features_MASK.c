
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {int features; struct qeth_card* ml_priv; } ;
typedef int netdev_features_t ;
typedef int features ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qeth_card*,int,int*,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct qeth_card*,int,int ,int ) ;
 int FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (struct qeth_card*,int,int ) ;

int FUNC_5(struct net_device *VAR_9, netdev_features_t VAR_10)
{
 struct qeth_card *VAR_11 = VAR_9->ml_priv;
 netdev_features_t VAR_12 = VAR_9->features ^ VAR_10;
 int VAR_13 = 0;

 FUNC_1(VAR_11, 2, "setfeat");
 FUNC_0(VAR_11, 2, &VAR_10, sizeof(VAR_10));

 if ((VAR_12 & VAR_3)) {
  VAR_13 = FUNC_2(VAR_11, VAR_10 & VAR_3,
           VAR_1, VAR_7);
  if (VAR_13)
   VAR_12 ^= VAR_3;
 }
 if (VAR_12 & VAR_2) {
  VAR_13 = FUNC_2(VAR_11, VAR_10 & VAR_2,
           VAR_1, VAR_8);
  if (VAR_13)
   VAR_12 ^= VAR_2;
 }
 if (VAR_12 & VAR_4) {
  VAR_13 = FUNC_3(VAR_11, VAR_10 & VAR_4);
  if (VAR_13)
   VAR_12 ^= VAR_4;
 }
 if (VAR_12 & VAR_5) {
  VAR_13 = FUNC_4(VAR_11, VAR_10 & VAR_5,
          VAR_7);
  if (VAR_13)
   VAR_12 ^= VAR_5;
 }
 if (VAR_12 & VAR_6) {
  VAR_13 = FUNC_4(VAR_11, VAR_10 & VAR_6,
          VAR_8);
  if (VAR_13)
   VAR_12 ^= VAR_6;
 }


 if ((VAR_9->features ^ VAR_10) == VAR_12)
  return 0;

 VAR_9->features ^= VAR_12;
 return -VAR_0;
}
