
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_struct {TYPE_1__* dev; int set_features; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int wanted_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct tun_struct *VAR_11, unsigned long VAR_12)
{
 netdev_features_t VAR_13 = 0;

 if (VAR_12 & VAR_5) {
  VAR_13 |= VAR_1;
  VAR_12 &= ~VAR_5;

  if (VAR_12 & (VAR_6|VAR_7)) {
   if (VAR_12 & VAR_8) {
    VAR_13 |= VAR_4;
    VAR_12 &= ~VAR_8;
   }
   if (VAR_12 & VAR_6)
    VAR_13 |= VAR_2;
   if (VAR_12 & VAR_7)
    VAR_13 |= VAR_3;
   VAR_12 &= ~(VAR_6|VAR_7);
  }

  VAR_12 &= ~VAR_9;
 }



 if (VAR_12)
  return -VAR_0;

 VAR_11->set_features = VAR_13;
 VAR_11->dev->wanted_features &= ~VAR_10;
 VAR_11->dev->wanted_features |= VAR_13;
 FUNC_0(VAR_11->dev);

 return 0;
}
