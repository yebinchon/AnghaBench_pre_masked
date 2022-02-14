
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct ds1286_priv {struct rtc_device* rtc; int lock; struct rtc_device* rtcregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_3 ;
 struct rtc_device* FUNC_2 (int *,struct resource*) ;
 struct ds1286_priv* FUNC_3 (int *,int,int ) ;
 struct rtc_device* FUNC_4 (int *,char*,int *,int ) ;
 int VAR_4 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct ds1286_priv*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct rtc_device *VAR_6;
 struct resource *VAR_7;
 struct ds1286_priv *VAR_8;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(struct ds1286_priv), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5, VAR_2, 0);
 VAR_8->rtcregs = FUNC_2(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_8->rtcregs))
  return FUNC_1(VAR_8->rtcregs);

 FUNC_7(&VAR_8->lock);
 FUNC_6(VAR_5, VAR_8);
 VAR_6 = FUNC_4(&VAR_5->dev, "ds1286", &VAR_4,
     VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_8->rtc = VAR_6;
 return 0;
}
