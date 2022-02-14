
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct ds1685_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ds1685_priv*) ;
 int FUNC_2 (struct ds1685_priv*,int,int ,int ) ;
 int FUNC_3 (struct ds1685_priv*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 (struct ds1685_priv*,int ,int) ;
 int FUNC_7 (struct ds1685_priv*,int ,int) ;
 int FUNC_8 (struct ds1685_priv*,int ,int) ;
 int FUNC_9 (struct ds1685_priv*,int ,int) ;
 int FUNC_10 (struct ds1685_priv*,int ,int) ;
 int FUNC_11 (struct ds1685_priv*,int ,int) ;
 int FUNC_12 (struct ds1685_priv*,int ,int) ;
 int FUNC_13 (struct ds1685_priv*,int ,int) ;
 int FUNC_14 (struct ds1685_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_15(struct device *VAR_25, struct rtc_time *VAR_26)
{
 struct ds1685_priv *VAR_27 = FUNC_0(VAR_25);
 u8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;


 VAR_29 = FUNC_2(VAR_27, VAR_26->tm_sec, VAR_19,
         VAR_18);
 VAR_30 = FUNC_2(VAR_27, VAR_26->tm_min, VAR_13,
         VAR_12);
 VAR_31 = FUNC_2(VAR_27, VAR_26->tm_hour, VAR_7,
         VAR_6);
 VAR_32 = FUNC_2(VAR_27, (VAR_26->tm_wday + 1), VAR_21,
         VAR_21);
 VAR_33 = FUNC_2(VAR_27, VAR_26->tm_mday, VAR_10,
         VAR_9);
 VAR_34 = FUNC_2(VAR_27, (VAR_26->tm_mon + 1), VAR_16,
         VAR_15);
 VAR_35 = FUNC_2(VAR_27, (VAR_26->tm_year % 100),
         VAR_24, VAR_23);
 VAR_36 = FUNC_2(VAR_27, ((VAR_26->tm_year + 1900) / 100),
         VAR_2, VAR_2);







 if ((VAR_26->tm_mon > 11) || (VAR_33 == 0))
  return -VAR_0;

 if (VAR_26->tm_mday > FUNC_4(VAR_26->tm_mon, VAR_26->tm_year))
  return -VAR_0;

 if ((VAR_26->tm_hour >= 24) || (VAR_26->tm_min >= 60) ||
     (VAR_26->tm_sec >= 60) || (VAR_32 > 7))
  return -VAR_0;





 FUNC_1(VAR_27);
 VAR_28 = VAR_27->read(VAR_27, VAR_3);
 if (VAR_27->bcd_mode)
  VAR_28 &= ~(VAR_4);
 else
  VAR_28 |= VAR_4;
 VAR_27->write(VAR_27, VAR_3, VAR_28);
 VAR_27->write(VAR_27, VAR_17, VAR_29);
 VAR_27->write(VAR_27, VAR_11, VAR_30);
 VAR_27->write(VAR_27, VAR_5, VAR_31);
 VAR_27->write(VAR_27, VAR_20, VAR_32);
 VAR_27->write(VAR_27, VAR_8, VAR_33);
 VAR_27->write(VAR_27, VAR_14, VAR_34);
 VAR_27->write(VAR_27, VAR_22, VAR_35);
 VAR_27->write(VAR_27, VAR_1, VAR_36);
 FUNC_3(VAR_27);

 return 0;
}
