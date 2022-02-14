
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct macsec_tx_sc {scalar_t__ scb; scalar_t__ end_station; scalar_t__ send_sci; scalar_t__ encrypt; scalar_t__ encoding_sa; } ;
struct macsec_secy {int key_len; int replay_window; scalar_t__ replay_protect; scalar_t__ validate_frames; scalar_t__ protect_frames; scalar_t__ icv_len; int sci; struct macsec_tx_sc tx_sc; } ;
struct TYPE_2__ {struct macsec_secy secy; } ;


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


 TYPE_1__* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_16,
       const struct net_device *VAR_17)
{
 struct macsec_secy *VAR_18 = &FUNC_0(VAR_17)->secy;
 struct macsec_tx_sc *VAR_19 = &VAR_18->tx_sc;
 u64 VAR_20;

 switch (VAR_18->key_len) {
 case 129:
  VAR_20 = VAR_15;
  break;
 case 128:
  VAR_20 = VAR_14;
  break;
 default:
  goto nla_put_failure;
 }

 if (FUNC_1(VAR_16, VAR_11, VAR_18->sci,
   VAR_7) ||
     FUNC_4(VAR_16, VAR_5, VAR_18->icv_len) ||
     FUNC_3(VAR_16, VAR_1,
         VAR_20, VAR_7) ||
     FUNC_4(VAR_16, VAR_2, VAR_19->encoding_sa) ||
     FUNC_4(VAR_16, VAR_3, VAR_19->encrypt) ||
     FUNC_4(VAR_16, VAR_8, VAR_18->protect_frames) ||
     FUNC_4(VAR_16, VAR_6, VAR_19->send_sci) ||
     FUNC_4(VAR_16, VAR_4, VAR_19->end_station) ||
     FUNC_4(VAR_16, VAR_10, VAR_19->scb) ||
     FUNC_4(VAR_16, VAR_9, VAR_18->replay_protect) ||
     FUNC_4(VAR_16, VAR_12, VAR_18->validate_frames) ||
     0)
  goto nla_put_failure;

 if (VAR_18->replay_protect) {
  if (FUNC_2(VAR_16, VAR_13, VAR_18->replay_window))
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_0;
}
