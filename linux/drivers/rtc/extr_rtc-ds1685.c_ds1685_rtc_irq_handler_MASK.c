
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dummy; } ;
struct mutex {int dummy; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (struct ds1685_priv*,struct platform_device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 struct ds1685_priv* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (TYPE_1__*,int,unsigned long) ;
 int FUNC_6 (struct ds1685_priv*,int ) ;
 int FUNC_7 (struct ds1685_priv*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_16, void *VAR_17)
{
 struct platform_device *VAR_18 = VAR_17;
 struct ds1685_priv *VAR_19 = FUNC_4(VAR_18);
 struct mutex *VAR_20;
 u8 VAR_21, VAR_22;
 unsigned long VAR_23 = 0;
 u8 VAR_24 = 0;


 if (FUNC_8(!VAR_19))
  return VAR_0;

 VAR_20 = &VAR_19->dev->ops_lock;
 FUNC_2(VAR_20);


 VAR_21 = VAR_19->read(VAR_19, VAR_3);
 VAR_22 = VAR_19->read(VAR_19, VAR_8);


 if (FUNC_1(VAR_22 & VAR_10)) {





  if (FUNC_1(VAR_22 & VAR_5)) {
   VAR_23 = VAR_13;


   if ((VAR_21 & VAR_6) &&
       (VAR_22 & VAR_11)) {
    VAR_23 |= VAR_14;
    VAR_24++;
   }


   if ((VAR_21 & VAR_4) &&
       (VAR_22 & VAR_9)) {
    VAR_23 |= VAR_2;
    VAR_24++;
   }


   if ((VAR_21 & VAR_7) &&
       (VAR_22 & VAR_12)) {
    VAR_23 |= VAR_15;
    VAR_24++;
   }
  } else {




   FUNC_0(VAR_19, VAR_18);
  }
 }
 FUNC_5(VAR_19->dev, VAR_24, VAR_23);
 FUNC_3(VAR_20);

 return VAR_23 ? VAR_0 : VAR_1;
}
