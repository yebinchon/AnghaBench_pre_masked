
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
struct TYPE_5__ {scalar_t__ SsidLength; int Ssid; } ;
struct TYPE_4__ {scalar_t__ SsidLength; int Ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int *,int,int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct adapter*,int ,int*) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlme_ext_priv*,int) ;
 int FUNC_9 (struct adapter*) ;

u8 FUNC_10(struct adapter *VAR_12, u8 *VAR_13)
{
 struct mlme_ext_priv *VAR_14 = &VAR_12->mlmeextpriv;
 struct sitesurvey_parm *VAR_15 = (struct sitesurvey_parm *)VAR_13;
 u8 VAR_16 = 0;
 u8 VAR_17;
 u32 VAR_18;
 u32 VAR_19;

 if (VAR_14->sitesurvey_res.state == VAR_7) {
  VAR_14->sitesurvey_res.state = VAR_9;
  VAR_14->sitesurvey_res.bss_cnt = 0;
  VAR_14->sitesurvey_res.channel_idx = 0;

  for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
   if (VAR_15->ssid[VAR_19].SsidLength) {
    FUNC_5(VAR_14->sitesurvey_res.ssid[VAR_19].Ssid, VAR_15->ssid[VAR_19].Ssid, VAR_4);
    VAR_14->sitesurvey_res.ssid[VAR_19].SsidLength = VAR_15->ssid[VAR_19].SsidLength;
   } else {
    VAR_14->sitesurvey_res.ssid[VAR_19].SsidLength = 0;
   }
  }

  VAR_14->sitesurvey_res.ch_num = FUNC_7(VAR_12
   , VAR_14->sitesurvey_res.ch, VAR_5
   , VAR_15->ch, VAR_15->ch_num
  );

  VAR_14->sitesurvey_res.scan_mode = VAR_15->scan_mode;


  if (FUNC_3(VAR_12)) {
   VAR_14->sitesurvey_res.state = VAR_10;

   FUNC_4(VAR_12, ((void*)0), 1, 3, 500);

   VAR_16 = 1;
  }
  if (VAR_16) {

   FUNC_8(VAR_14, 50);
   return VAR_1;
  }
 }

 if ((VAR_14->sitesurvey_res.state == VAR_9) || (VAR_14->sitesurvey_res.state == VAR_10)) {

  FUNC_0(VAR_12);
  FUNC_2(VAR_12, VAR_0, 0);


  VAR_18 = 0x1e;

  FUNC_6(VAR_12, VAR_2, (u8 *)(&VAR_18));


  FUNC_1(VAR_12, VAR_11);

  VAR_17 = 1;
  FUNC_6(VAR_12, VAR_3, (u8 *)(&VAR_17));

  VAR_14->sitesurvey_res.state = VAR_8;
 }

 FUNC_9(VAR_12);

 return VAR_1;

}
