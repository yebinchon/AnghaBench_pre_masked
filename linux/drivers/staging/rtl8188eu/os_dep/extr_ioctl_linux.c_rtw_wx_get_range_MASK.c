
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct mlme_ext_priv {TYPE_4__* channel_set; } ;
struct iw_request_info {int cmd; } ;
struct TYPE_8__ {int qual; int level; int updated; scalar_t__ noise; } ;
struct TYPE_7__ {int qual; int level; int noise; int updated; } ;
struct iw_range {int throughput; int num_bitrates; int we_version_source; size_t num_channels; size_t num_frequency; int enc_capa; int scan_capa; TYPE_5__* freq; int we_version_compiled; scalar_t__ pm_capa; int max_frag; int min_frag; int * bitrate; TYPE_3__ avg_qual; TYPE_2__ max_qual; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_10__ {scalar_t__ i; int m; int e; } ;
struct TYPE_9__ {scalar_t__ ChannelNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
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
 int FUNC_0 (int ,int ,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct iw_range*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int * VAR_19 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_20,
    struct iw_request_info *VAR_21,
    union iwreq_data *VAR_22, char *VAR_23)
{
 struct iw_range *VAR_24 = (struct iw_range *)VAR_23;
 struct adapter *VAR_25 = (struct adapter *)FUNC_3(VAR_20);
 struct mlme_ext_priv *VAR_26 = &VAR_25->mlmeextpriv;

 u16 VAR_27;
 int VAR_28;

 FUNC_0(VAR_18, VAR_17, ("rtw_wx_get_range. cmd_code =%x\n", VAR_21->cmd));

 VAR_22->data.length = sizeof(*VAR_24);
 FUNC_1(VAR_24, 0, sizeof(*VAR_24));
 VAR_24->throughput = 5 * 1000 * 1000;




 VAR_24->max_qual.qual = 100;
 VAR_24->max_qual.level = 100;
 VAR_24->max_qual.noise = 100;
 VAR_24->max_qual.updated = 7;

 VAR_24->avg_qual.qual = 92;

 VAR_24->avg_qual.level = 178;
 VAR_24->avg_qual.noise = 0;
 VAR_24->avg_qual.updated = 7;

 VAR_24->num_bitrates = VAR_15;

 for (VAR_28 = 0; VAR_28 < VAR_15 && VAR_28 < VAR_4; VAR_28++)
  VAR_24->bitrate[VAR_28] = VAR_19[VAR_28];

 VAR_24->min_frag = VAR_14;
 VAR_24->max_frag = VAR_13;

 VAR_24->pm_capa = 0;

 VAR_24->we_version_compiled = VAR_16;
 VAR_24->we_version_source = 16;

 for (VAR_28 = 0, VAR_27 = 0; VAR_28 < VAR_12; VAR_28++) {

  if (VAR_26->channel_set[VAR_28].ChannelNum != 0) {
   VAR_24->freq[VAR_27].i = VAR_26->channel_set[VAR_28].ChannelNum;
   VAR_24->freq[VAR_27].m = FUNC_2(VAR_26->channel_set[VAR_28].ChannelNum) * 100000;
   VAR_24->freq[VAR_27].e = 1;
   VAR_27++;
  }

  if (VAR_27 == VAR_5)
   break;
 }

 VAR_24->num_channels = VAR_27;
 VAR_24->num_frequency = VAR_27;
 VAR_24->enc_capa = VAR_2 | VAR_3 |
     VAR_1 | VAR_0;

 VAR_24->scan_capa = VAR_8 | VAR_11 |
      VAR_6 | VAR_7 |
      VAR_9 | VAR_10;
 return 0;
}
