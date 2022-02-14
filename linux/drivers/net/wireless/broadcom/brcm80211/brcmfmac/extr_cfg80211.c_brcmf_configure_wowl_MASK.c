
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wowl_wakeind ;
typedef int u8 ;
typedef size_t u32 ;
struct cfg80211_wowlan {size_t n_patterns; scalar_t__ gtk_rekey_failure; scalar_t__ nd_config; TYPE_1__* patterns; scalar_t__ magic_pkt; scalar_t__ disconnect; } ;
struct brcmf_wowl_wakeind_le {int dummy; } ;
struct brcmf_if {TYPE_2__* vif; int ndev; } ;
struct TYPE_8__ {int nd_data_completed; int nd_enabled; int active; int pre_pmmode; } ;
struct brcmf_cfg80211_info {TYPE_3__ wowl; TYPE_4__* pub; int wiphy; } ;
struct TYPE_9__ {int bus_if; } ;
struct TYPE_7__ {int sme_state; } ;
struct TYPE_6__ {int pkt_offset; scalar_t__ mask; int pattern_len; scalar_t__ pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct brcmf_if*,char*,int *,int ,int *,int ) ;
 int FUNC_3 (struct brcmf_if*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct brcmf_if*,int ) ;
 int FUNC_6 (struct brcmf_if*,int ,int *) ;
 int FUNC_7 (struct brcmf_if*,int ,int ) ;
 int FUNC_8 (struct brcmf_if*,char*,struct brcmf_wowl_wakeind_le*,int) ;
 int FUNC_9 (struct brcmf_if*,char*,int) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int VAR_15 ;
 int FUNC_12 (struct brcmf_wowl_wakeind_le*,char*,int) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct brcmf_cfg80211_info *VAR_16,
     struct brcmf_if *VAR_17,
     struct cfg80211_wowlan *VAR_18)
{
 u32 VAR_19;
 struct brcmf_wowl_wakeind_le VAR_20;
 u32 VAR_21;

 FUNC_4(VAR_14, "Suspend, wowl config.\n");

 if (!FUNC_5(VAR_17, VAR_3))
  FUNC_3(VAR_17, 0);
 FUNC_6(VAR_17, VAR_0, &VAR_16->wowl.pre_pmmode);
 FUNC_7(VAR_17, VAR_1, VAR_13);

 VAR_19 = 0;
 if (VAR_18->disconnect)
  VAR_19 = VAR_6 | VAR_5 | VAR_11;
 if (VAR_18->magic_pkt)
  VAR_19 |= VAR_8;
 if ((VAR_18->patterns) && (VAR_18->n_patterns)) {
  VAR_19 |= VAR_9;
  for (VAR_21 = 0; VAR_21 < VAR_18->n_patterns; VAR_21++) {
   FUNC_2(VAR_17, "add",
    (u8 *)VAR_18->patterns[VAR_21].pattern,
    VAR_18->patterns[VAR_21].pattern_len,
    (u8 *)VAR_18->patterns[VAR_21].mask,
    VAR_18->patterns[VAR_21].pkt_offset);
  }
 }
 if (VAR_18->nd_config) {
  FUNC_1(VAR_16->wiphy, VAR_17->ndev,
      VAR_18->nd_config);
  VAR_19 |= VAR_10;

  VAR_16->wowl.nd_data_completed = 0;
  VAR_16->wowl.nd_enabled = 1;

  FUNC_11(VAR_16->pub, VAR_2);
  FUNC_10(VAR_16->pub, VAR_2,
        VAR_15);
 }
 if (VAR_18->gtk_rekey_failure)
  VAR_19 |= VAR_7;
 if (!FUNC_13(VAR_4, &VAR_17->vif->sme_state))
  VAR_19 |= VAR_12;

 FUNC_12(&VAR_20, "clear", 6);
 FUNC_8(VAR_17, "wowl_wakeind", &VAR_20,
     sizeof(VAR_20));
 FUNC_9(VAR_17, "wowl", VAR_19);
 FUNC_9(VAR_17, "wowl_activate", 1);
 FUNC_0(VAR_16->pub->bus_if, 1);
 VAR_16->wowl.active = 1;
}
