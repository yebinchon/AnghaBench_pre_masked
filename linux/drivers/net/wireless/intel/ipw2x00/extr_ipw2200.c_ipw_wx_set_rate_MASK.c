
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int fixed; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int rates_mask; int mutex; int config; TYPE_2__* ieee; } ;
struct TYPE_4__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
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
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*,int ) ;
 struct ipw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_15,
      struct iw_request_info *VAR_16,
      union iwreq_data *VAR_17, char *VAR_18)
{

 struct ipw_priv *VAR_19 = FUNC_5(VAR_15);
 u32 VAR_20 = VAR_17->bitrate.value;
 u32 VAR_21, VAR_22;





 if (VAR_20 == -1) {
  VAR_21 = 0;
  VAR_22 = VAR_6;

  goto apply;
 }

 VAR_22 = 0;
 VAR_21 = VAR_17->bitrate.fixed;

 if (VAR_20 == 1000000 || !VAR_21)
  VAR_22 |= VAR_3;
 if (VAR_20 == 1000000)
  goto apply;

 if (VAR_20 == 2000000 || !VAR_21)
  VAR_22 |= VAR_4;
 if (VAR_20 == 2000000)
  goto apply;

 if (VAR_20 == 5500000 || !VAR_21)
  VAR_22 |= VAR_5;
 if (VAR_20 == 5500000)
  goto apply;

 if (VAR_20 == 6000000 || !VAR_21)
  VAR_22 |= VAR_13;
 if (VAR_20 == 6000000)
  goto apply;

 if (VAR_20 == 9000000 || !VAR_21)
  VAR_22 |= VAR_14;
 if (VAR_20 == 9000000)
  goto apply;

 if (VAR_20 == 11000000 || !VAR_21)
  VAR_22 |= VAR_2;
 if (VAR_20 == 11000000)
  goto apply;

 if (VAR_20 == 12000000 || !VAR_21)
  VAR_22 |= VAR_7;
 if (VAR_20 == 12000000)
  goto apply;

 if (VAR_20 == 18000000 || !VAR_21)
  VAR_22 |= VAR_8;
 if (VAR_20 == 18000000)
  goto apply;

 if (VAR_20 == 24000000 || !VAR_21)
  VAR_22 |= VAR_9;
 if (VAR_20 == 24000000)
  goto apply;

 if (VAR_20 == 36000000 || !VAR_21)
  VAR_22 |= VAR_10;
 if (VAR_20 == 36000000)
  goto apply;

 if (VAR_20 == 48000000 || !VAR_21)
  VAR_22 |= VAR_11;
 if (VAR_20 == 48000000)
  goto apply;

 if (VAR_20 == 54000000 || !VAR_21)
  VAR_22 |= VAR_12;
 if (VAR_20 == 54000000)
  goto apply;

 FUNC_1("invalid rate specified, returning error\n");
 return -VAR_1;

      apply:
 FUNC_1("Setting rate mask to 0x%08X [%s]\n",
       VAR_22, VAR_21 ? "fixed" : "sub-rates");
 FUNC_6(&VAR_19->mutex);
 if (VAR_22 == VAR_6) {
  VAR_19->config &= ~VAR_0;
  FUNC_4(VAR_19, VAR_19->ieee->mode);
 } else
  VAR_19->config |= VAR_0;

 if (VAR_19->rates_mask == VAR_22) {
  FUNC_1("Mask set to current mask.\n");
  FUNC_7(&VAR_19->mutex);
  return 0;
 }

 VAR_19->rates_mask = VAR_22;


 FUNC_0("[re]association triggered due to rates change.\n");
 if (!FUNC_3(VAR_19))
  FUNC_2(VAR_19);

 FUNC_7(&VAR_19->mutex);
 return 0;
}
