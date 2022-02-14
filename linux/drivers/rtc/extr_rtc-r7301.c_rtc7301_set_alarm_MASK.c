
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct rtc7301_priv {scalar_t__ irq; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtc7301_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc7301_priv*,int ) ;
 int FUNC_2 (struct rtc7301_priv*,int) ;
 int FUNC_3 (struct rtc7301_priv*,int *,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct rtc7301_priv *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 if (VAR_3->irq <= 0)
  return -VAR_0;

 FUNC_4(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_3, 1);
 FUNC_3(VAR_3, &VAR_2->time, 1);
 FUNC_1(VAR_3, VAR_2->enabled);

 FUNC_5(&VAR_3->lock, VAR_4);

 return 0;
}
