
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct rtc_wkalrm {TYPE_1__ time; } ;
struct ds1286_priv {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (unsigned char) ;
 struct ds1286_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ds1286_priv*,unsigned char,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct ds1286_priv *VAR_5 = FUNC_1(VAR_3);
 unsigned char VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_4->time.tm_hour;
 VAR_7 = VAR_4->time.tm_min;
 VAR_8 = VAR_4->time.tm_sec;

 if (VAR_6 >= 24)
  VAR_6 = 0xff;

 if (VAR_7 >= 60)
  VAR_7 = 0xff;

 if (VAR_8 != 0)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_7);
 VAR_6 = FUNC_0(VAR_6);

 FUNC_3(&VAR_5->lock);
 FUNC_2(VAR_5, VAR_6, VAR_1);
 FUNC_2(VAR_5, VAR_7, VAR_2);
 FUNC_4(&VAR_5->lock);

 return 0;
}
