
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct mac80211_hwsim_data {int idx; TYPE_1__* hw; int channels; int regd; int use_chanctx; scalar_t__* alpha2; } ;
struct hwsim_new_radio_params {int reg_strict; int p2p_device; int hwname; int channels; int regd; int use_chanctx; scalar_t__* reg_alpha2; } ;
struct TYPE_4__ {int regulatory_flags; int interface_modes; } ;
struct TYPE_3__ {TYPE_2__* wiphy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int ,struct hwsim_new_radio_params*) ;
 int FUNC_2 (struct netlink_callback*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5,
        struct mac80211_hwsim_data *VAR_6,
        u32 VAR_7, u32 VAR_8,
        struct netlink_callback *VAR_9, int VAR_10)
{
 void *VAR_11;
 struct hwsim_new_radio_params VAR_12 = { };
 int VAR_13 = -VAR_0;

 VAR_11 = FUNC_5(VAR_5, VAR_7, VAR_8, &VAR_4, VAR_10,
     VAR_1);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_9)
  FUNC_2(VAR_9, VAR_11);

 if (VAR_6->alpha2[0] && VAR_6->alpha2[1])
  VAR_12.reg_alpha2 = VAR_6->alpha2;

 VAR_12.reg_strict = !!(VAR_6->hw->wiphy->regulatory_flags &
     VAR_3);
 VAR_12.p2p_device = !!(VAR_6->hw->wiphy->interface_modes &
     FUNC_0(VAR_2));
 VAR_12.use_chanctx = VAR_6->use_chanctx;
 VAR_12.regd = VAR_6->regd;
 VAR_12.channels = VAR_6->channels;
 VAR_12.hwname = FUNC_6(VAR_6->hw->wiphy);

 VAR_13 = FUNC_1(VAR_5, VAR_6->idx, &VAR_12);
 if (VAR_13 < 0)
  goto out_err;

 FUNC_4(VAR_5, VAR_11);
 return 0;

out_err:
 FUNC_3(VAR_5, VAR_11);
 return VAR_13;
}
