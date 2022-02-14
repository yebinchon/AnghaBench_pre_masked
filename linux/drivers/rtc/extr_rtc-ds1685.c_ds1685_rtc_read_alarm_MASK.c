
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
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
 struct ds1685_priv* FUNC_0 (struct device*) ;
 void* FUNC_1 (struct ds1685_priv*,int,int ,int ) ;
 int FUNC_2 (struct ds1685_priv*) ;
 int FUNC_3 (struct ds1685_priv*,int) ;
 int FUNC_4 (struct ds1685_priv*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct ds1685_priv*,int ) ;
 int FUNC_7 (struct ds1685_priv*,int ) ;
 int FUNC_8 (struct ds1685_priv*,int ) ;
 int FUNC_9 (struct ds1685_priv*,int ) ;
 int FUNC_10 (struct ds1685_priv*,int ) ;
 int FUNC_11 (struct ds1685_priv*,int ) ;

__attribute__((used)) static int
FUNC_12(struct device *VAR_16, struct rtc_wkalrm *VAR_17)
{
 struct ds1685_priv *VAR_18 = FUNC_0(VAR_16);
 u8 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;


 FUNC_2(VAR_18);
 VAR_19 = VAR_18->read(VAR_18, VAR_13);
 VAR_20 = VAR_18->read(VAR_18, VAR_10);
 VAR_21 = VAR_18->read(VAR_18, VAR_6);
 VAR_22 = VAR_18->read(VAR_18, VAR_7);
 VAR_23 = VAR_18->read(VAR_18, VAR_0);
 VAR_24 = VAR_18->read(VAR_18, VAR_2);
 FUNC_4(VAR_18);


 VAR_25 = FUNC_3(VAR_18, VAR_22);
 if (VAR_25)
  return VAR_25;
 if (FUNC_5(VAR_19 < 0xc0))
  VAR_17->time.tm_sec = FUNC_1(VAR_18, VAR_19,
             VAR_14,
             VAR_15);

 if (FUNC_5(VAR_20 < 0xc0))
  VAR_17->time.tm_min = FUNC_1(VAR_18, VAR_20,
             VAR_11,
             VAR_12);

 if (FUNC_5(VAR_21 < 0xc0))
  VAR_17->time.tm_hour = FUNC_1(VAR_18, VAR_21,
       VAR_4,
       VAR_5);


 VAR_17->time.tm_mday = FUNC_1(VAR_18, VAR_22, VAR_8,
      VAR_9);
 VAR_17->enabled = !!(VAR_23 & VAR_1);
 VAR_17->pending = !!(VAR_24 & VAR_3);

 return 0;
}
