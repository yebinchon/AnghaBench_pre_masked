
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int parent; } ;
struct rtc_device {TYPE_1__ dev; } ;
struct rtc7301_priv {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtc7301_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct rtc7301_priv*,int) ;
 int FUNC_2 (struct rtc7301_priv*,int ) ;
 int FUNC_3 (struct rtc7301_priv*,int) ;
 int FUNC_4 (struct rtc_device*,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct rtc_device *VAR_8 = VAR_7;
 struct rtc7301_priv *VAR_9 = FUNC_0(VAR_8->dev.parent);
 unsigned long VAR_10;
 irqreturn_t VAR_11 = VAR_1;
 u8 VAR_12;

 FUNC_5(&VAR_9->lock, VAR_10);

 FUNC_3(VAR_9, 1);

 VAR_12 = FUNC_2(VAR_9, VAR_2);
 if (VAR_12 & VAR_3) {
  VAR_11 = VAR_0;
  FUNC_1(VAR_9, 0);
  FUNC_4(VAR_8, 1, VAR_5 | VAR_4);
 }

 FUNC_6(&VAR_9->lock, VAR_10);

 return VAR_11;
}
