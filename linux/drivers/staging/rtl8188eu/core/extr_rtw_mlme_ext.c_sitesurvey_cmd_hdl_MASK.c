
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct sitesurvey_parm {int scan_mode; int ch_num; int ch; TYPE_1__* ssid; } ;
struct TYPE_6__ {scalar_t__ state; int scan_mode; int ch; int ch_num; TYPE_2__* ssid; scalar_t__ channel_idx; scalar_t__ bss_cnt; } ;
struct mlme_ext_priv {TYPE_3__ sitesurvey_res; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_5__ {scalar_t__ ssid_length; int ssid; } ;
struct TYPE_4__ {scalar_t__ ssid_length; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int *,int,int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct adapter*,int ,int*) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlme_ext_priv*,int) ;
 int FUNC_9 (struct adapter*) ;

u8 FUNC_10(struct adapter *VAR_13, u8 *VAR_14)
{
 struct mlme_ext_priv *VAR_15 = &VAR_13->mlmeextpriv;
 struct sitesurvey_parm *VAR_16 = (struct sitesurvey_parm *)VAR_14;
 u8 VAR_17 = 0;
 u8 VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 if (VAR_15->sitesurvey_res.state == VAR_8) {

  FUNC_6(VAR_13, VAR_2, ((void*)0));

  VAR_15->sitesurvey_res.state = VAR_10;
  VAR_15->sitesurvey_res.bss_cnt = 0;
  VAR_15->sitesurvey_res.channel_idx = 0;

  for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
   if (VAR_16->ssid[VAR_20].ssid_length) {
    FUNC_5(VAR_15->sitesurvey_res.ssid[VAR_20].ssid, VAR_16->ssid[VAR_20].ssid, VAR_5);
    VAR_15->sitesurvey_res.ssid[VAR_20].ssid_length = VAR_16->ssid[VAR_20].ssid_length;
   } else {
    VAR_15->sitesurvey_res.ssid[VAR_20].ssid_length = 0;
   }
  }

  VAR_15->sitesurvey_res.ch_num = FUNC_7(VAR_13
   , VAR_15->sitesurvey_res.ch, VAR_6
   , VAR_16->ch, VAR_16->ch_num
 );

  VAR_15->sitesurvey_res.scan_mode = VAR_16->scan_mode;


  if (FUNC_3(VAR_13)) {
   VAR_15->sitesurvey_res.state = VAR_11;

   FUNC_4(VAR_13, ((void*)0), 1, 3, 500);

   VAR_17 = 1;
  }
  if (VAR_17) {

   FUNC_8(VAR_15, 50);
   return VAR_1;
  }
 }

 if ((VAR_15->sitesurvey_res.state == VAR_10) || (VAR_15->sitesurvey_res.state == VAR_11)) {

  FUNC_0(VAR_13);
  FUNC_2(VAR_13, VAR_0, 0);


  VAR_19 = 0x1E;

  FUNC_6(VAR_13, VAR_3, (u8 *)(&VAR_19));


  FUNC_1(VAR_13, VAR_12);

  VAR_18 = 1;
  FUNC_6(VAR_13, VAR_4, (u8 *)(&VAR_18));

  VAR_15->sitesurvey_res.state = VAR_9;
 }

 FUNC_9(VAR_13);

 return VAR_1;
}
