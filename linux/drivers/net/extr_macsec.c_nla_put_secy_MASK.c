
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct macsec_tx_sc {scalar_t__ encoding_sa; scalar_t__ scb; scalar_t__ end_station; scalar_t__ send_sci; scalar_t__ encrypt; } ;
struct macsec_secy {int key_len; int replay_window; scalar_t__ replay_protect; scalar_t__ validate_frames; scalar_t__ protect_frames; scalar_t__ operational; scalar_t__ icv_len; int sci; struct macsec_tx_sc tx_sc; } ;


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
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct macsec_secy *VAR_17, struct sk_buff *VAR_18)
{
 struct macsec_tx_sc *VAR_19 = &VAR_17->tx_sc;
 struct nlattr *VAR_20 = FUNC_2(VAR_18,
        VAR_0);
 u64 VAR_21;

 if (!VAR_20)
  return 1;

 switch (VAR_17->key_len) {
 case 129:
  VAR_21 = VAR_2;
  break;
 case 128:
  VAR_21 = VAR_1;
  break;
 default:
  goto cancel;
 }

 if (FUNC_3(VAR_18, VAR_14, VAR_17->sci,
   VAR_10) ||
     FUNC_5(VAR_18, VAR_3,
         VAR_21, VAR_10) ||
     FUNC_6(VAR_18, VAR_7, VAR_17->icv_len) ||
     FUNC_6(VAR_18, VAR_9, VAR_17->operational) ||
     FUNC_6(VAR_18, VAR_11, VAR_17->protect_frames) ||
     FUNC_6(VAR_18, VAR_12, VAR_17->replay_protect) ||
     FUNC_6(VAR_18, VAR_15, VAR_17->validate_frames) ||
     FUNC_6(VAR_18, VAR_5, VAR_19->encrypt) ||
     FUNC_6(VAR_18, VAR_8, VAR_19->send_sci) ||
     FUNC_6(VAR_18, VAR_6, VAR_19->end_station) ||
     FUNC_6(VAR_18, VAR_13, VAR_19->scb) ||
     FUNC_6(VAR_18, VAR_4, VAR_19->encoding_sa))
  goto cancel;

 if (VAR_17->replay_protect) {
  if (FUNC_4(VAR_18, VAR_16, VAR_17->replay_window))
   goto cancel;
 }

 FUNC_1(VAR_18, VAR_20);
 return 0;

cancel:
 FUNC_0(VAR_18, VAR_20);
 return 1;
}
