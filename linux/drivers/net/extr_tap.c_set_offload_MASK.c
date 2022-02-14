
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tap_queue {int tap; } ;
struct tap_dev {int tap_features; int (* update_features ) (struct tap_dev*,int) ;TYPE_1__* dev; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 struct tap_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct tap_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct tap_queue *VAR_10, unsigned long VAR_11)
{
 struct tap_dev *VAR_12;
 netdev_features_t VAR_13;
 netdev_features_t VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_10->tap);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = VAR_12->dev->features;

 if (VAR_11 & VAR_6) {
  VAR_14 = VAR_1;

  if (VAR_11 & (VAR_7 | VAR_8)) {
   if (VAR_11 & VAR_9)
    VAR_14 |= VAR_4;
   if (VAR_11 & VAR_7)
    VAR_14 |= VAR_2;
   if (VAR_11 & VAR_8)
    VAR_14 |= VAR_3;
  }
 }
 if (VAR_14 & (VAR_2 | VAR_3))
  VAR_13 |= VAR_5;
 else
  VAR_13 &= ~VAR_5;




 VAR_12->tap_features = VAR_14;
 if (VAR_12->update_features)
  VAR_12->update_features(VAR_12, VAR_13);

 return 0;
}
