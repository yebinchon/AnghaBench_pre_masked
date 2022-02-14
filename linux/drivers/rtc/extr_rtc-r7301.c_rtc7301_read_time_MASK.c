
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc7301_priv {int lock; } ;
struct device {int dummy; } ;


 struct rtc7301_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc7301_priv*,struct rtc_time*,int) ;
 int FUNC_2 (struct rtc7301_priv*,int ) ;
 int FUNC_3 (struct rtc7301_priv*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct rtc7301_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_4(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_2, 0);

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_2, VAR_1, 0);

 FUNC_5(&VAR_2->lock, VAR_3);

 return VAR_4;
}
