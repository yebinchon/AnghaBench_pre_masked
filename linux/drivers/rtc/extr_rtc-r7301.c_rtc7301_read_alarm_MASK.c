
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct rtc7301_priv {scalar_t__ irq; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtc7301_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc7301_priv*,int *,int) ;
 int FUNC_2 (struct rtc7301_priv*,int ) ;
 int FUNC_3 (struct rtc7301_priv*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct rtc7301_priv *VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 u8 VAR_8;

 if (VAR_6->irq <= 0)
  return -VAR_0;

 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_3(VAR_6, 1);
 FUNC_1(VAR_6, &VAR_5->time, 1);

 VAR_8 = FUNC_2(VAR_6, VAR_1);

 VAR_5->enabled = !!(VAR_8 & VAR_3);
 VAR_5->pending = !!(VAR_8 & VAR_2);

 FUNC_5(&VAR_6->lock, VAR_7);

 return 0;
}
