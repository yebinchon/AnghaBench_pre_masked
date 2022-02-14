
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int data; scalar_t__ encapsulation; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static netdev_features_t
FUNC_3(struct sk_buff *VAR_8, struct net_device *VAR_9,
         netdev_features_t VAR_10)
{
 unsigned int VAR_11, VAR_12;


 VAR_12 = FUNC_1(VAR_8) - VAR_8->data;
 if (FUNC_2(VAR_12 > VAR_0))
  return VAR_10 & ~(VAR_2 |
        VAR_4 |
        VAR_3 |
        VAR_5 |
        VAR_6);

 VAR_11 = FUNC_0(VAR_8) - FUNC_1(VAR_8);
 if (FUNC_2(VAR_11 > VAR_1))
  return VAR_10 & ~(VAR_2 |
        VAR_4 |
        VAR_5 |
        VAR_6);




 if (VAR_8->encapsulation && !(VAR_10 & VAR_7))
  VAR_10 &= ~VAR_5;

 return VAR_10;
}
