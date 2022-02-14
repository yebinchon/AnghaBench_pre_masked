
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; scalar_t__ tm_isdst; void* tm_mon; void* tm_mday; int tm_yday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;} ;
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
 struct ds1685_priv* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct ds1685_priv*,int,int ,int ) ;
 int FUNC_2 (struct ds1685_priv*) ;
 int FUNC_3 (struct ds1685_priv*) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 (struct ds1685_priv*,int ) ;
 int FUNC_7 (struct ds1685_priv*,int ) ;
 int FUNC_8 (struct ds1685_priv*,int ) ;
 int FUNC_9 (struct ds1685_priv*,int ) ;
 int FUNC_10 (struct ds1685_priv*,int ) ;
 int FUNC_11 (struct ds1685_priv*,int ) ;
 int FUNC_12 (struct ds1685_priv*,int ) ;
 int FUNC_13 (struct ds1685_priv*,int ) ;

__attribute__((used)) static int
FUNC_14(struct device *VAR_23, struct rtc_time *VAR_24)
{
 struct ds1685_priv *VAR_25 = FUNC_0(VAR_23);
 u8 VAR_26, VAR_27;
 u8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;


 FUNC_2(VAR_25);
 VAR_28 = VAR_25->read(VAR_25, VAR_15);
 VAR_29 = VAR_25->read(VAR_25, VAR_9);
 VAR_30 = VAR_25->read(VAR_25, VAR_3);
 VAR_31 = VAR_25->read(VAR_25, VAR_18);
 VAR_32 = VAR_25->read(VAR_25, VAR_6);
 VAR_33 = VAR_25->read(VAR_25, VAR_12);
 VAR_34 = VAR_25->read(VAR_25, VAR_20);
 VAR_27 = VAR_25->read(VAR_25, VAR_0);
 VAR_26 = VAR_25->read(VAR_25, VAR_2);
 FUNC_3(VAR_25);


 VAR_34 = FUNC_1(VAR_25, VAR_34, VAR_21,
       VAR_22);
 VAR_27 = FUNC_1(VAR_25, VAR_27, VAR_1,
       VAR_1);
 VAR_24->tm_sec = FUNC_1(VAR_25, VAR_28, VAR_16,
       VAR_17);
 VAR_24->tm_min = FUNC_1(VAR_25, VAR_29, VAR_10,
       VAR_11);
 VAR_24->tm_hour = FUNC_1(VAR_25, VAR_30, VAR_4,
       VAR_5);
 VAR_24->tm_wday = (FUNC_1(VAR_25, VAR_31, VAR_19,
        VAR_19) - 1);
 VAR_24->tm_mday = FUNC_1(VAR_25, VAR_32, VAR_7,
       VAR_8);
 VAR_24->tm_mon = (FUNC_1(VAR_25, VAR_33, VAR_13,
        VAR_14) - 1);
 VAR_24->tm_year = ((VAR_34 + (VAR_27 * 100)) - 1900);
 VAR_24->tm_yday = FUNC_4(VAR_24->tm_mday, VAR_24->tm_mon, VAR_24->tm_year);
 VAR_24->tm_isdst = 0;

 return 0;
}
