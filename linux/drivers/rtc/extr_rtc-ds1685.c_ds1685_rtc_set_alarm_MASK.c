
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* write ) (struct ds1685_priv*,int ,int) ;scalar_t__ bcd_mode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ds1685_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ds1685_priv*) ;
 int FUNC_2 (struct ds1685_priv*,int ,int ,int ) ;
 int FUNC_3 (struct ds1685_priv*,int) ;
 int FUNC_4 (struct ds1685_priv*) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 (struct ds1685_priv*,int ) ;
 int FUNC_7 (struct ds1685_priv*,int ,int) ;
 int FUNC_8 (struct ds1685_priv*,int ,int) ;
 int FUNC_9 (struct ds1685_priv*,int ) ;
 int FUNC_10 (struct ds1685_priv*,int ) ;
 int FUNC_11 (struct ds1685_priv*,int ,int) ;
 int FUNC_12 (struct ds1685_priv*,int ,int) ;
 int FUNC_13 (struct ds1685_priv*,int ,int) ;
 int FUNC_14 (struct ds1685_priv*,int ,int) ;
 int FUNC_15 (struct ds1685_priv*,int ,int) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct device *VAR_16, struct rtc_wkalrm *VAR_17)
{
 struct ds1685_priv *VAR_18 = FUNC_0(VAR_16);
 u8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;


 VAR_20 = FUNC_2(VAR_18, VAR_17->time.tm_sec,
         VAR_15,
         VAR_14);
 VAR_21 = FUNC_2(VAR_18, VAR_17->time.tm_min,
         VAR_12,
         VAR_11);
 VAR_22 = FUNC_2(VAR_18, VAR_17->time.tm_hour,
         VAR_5,
         VAR_4);
 VAR_23 = FUNC_2(VAR_18, VAR_17->time.tm_mday,
         VAR_9,
         VAR_8);


 VAR_24 = FUNC_3(VAR_18, VAR_23);
 if (VAR_24)
  return VAR_24;
 if (FUNC_16(VAR_20 >= 0xc0))
  VAR_20 = 0xff;

 if (FUNC_16(VAR_21 >= 0xc0))
  VAR_21 = 0xff;

 if (FUNC_16(VAR_22 >= 0xc0))
  VAR_22 = 0xff;

 VAR_17->time.tm_mon = -1;
 VAR_17->time.tm_year = -1;
 VAR_17->time.tm_wday = -1;
 VAR_17->time.tm_yday = -1;
 VAR_17->time.tm_isdst = -1;


 FUNC_1(VAR_18);
 VAR_19 = VAR_18->read(VAR_18, VAR_0);
 VAR_18->write(VAR_18, VAR_0, (VAR_19 & ~(VAR_1)));


 VAR_18->read(VAR_18, VAR_3);





 VAR_19 = VAR_18->read(VAR_18, VAR_0);
 if (VAR_18->bcd_mode)
  VAR_19 &= ~(VAR_2);
 else
  VAR_19 |= VAR_2;
 VAR_18->write(VAR_18, VAR_0, VAR_19);
 VAR_18->write(VAR_18, VAR_13, VAR_20);
 VAR_18->write(VAR_18, VAR_10, VAR_21);
 VAR_18->write(VAR_18, VAR_6, VAR_22);
 VAR_18->write(VAR_18, VAR_7, VAR_23);


 if (VAR_17->enabled) {
  VAR_19 = VAR_18->read(VAR_18, VAR_0);
  VAR_19 |= VAR_1;
  VAR_18->write(VAR_18, VAR_0, VAR_19);
 }


 FUNC_4(VAR_18);

 return 0;
}
