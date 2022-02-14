
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802154_hw {struct device* parent; int flags; TYPE_2__* phy; struct hwsim_phy* priv; } ;
struct hwsim_pib {int dummy; } ;
struct hwsim_phy {int idx; struct ieee802154_hw* hw; int list; int edges; int pib; } ;
struct genl_info {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int* channels; } ;
struct TYPE_4__ {int current_channel; int perm_extended_addr; TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct genl_info*,struct hwsim_phy*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct hwsim_phy*) ;
 struct ieee802154_hw* FUNC_3 (int,int *) ;
 int FUNC_4 (struct ieee802154_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee802154_hw*) ;
 int FUNC_7 (struct ieee802154_hw*) ;
 int FUNC_8 (struct hwsim_pib*) ;
 struct hwsim_pib* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,struct hwsim_pib*) ;

__attribute__((used)) static int FUNC_14(struct genl_info *VAR_7, struct device *VAR_8,
    bool VAR_9)
{
 struct ieee802154_hw *VAR_10;
 struct hwsim_phy *VAR_11;
 struct hwsim_pib *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_6++;

 VAR_10 = FUNC_3(sizeof(*VAR_11), &VAR_3);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = VAR_10->priv;
 VAR_11->hw = VAR_10;


 VAR_10->phy->supported.channels[0] |= 1;

 VAR_10->phy->supported.channels[0] |= 0x7fe;

 VAR_10->phy->supported.channels[0] |= 0x7FFF800;

 VAR_10->phy->supported.channels[1] |= 1;

 VAR_10->phy->supported.channels[1] |= 0x7fe;

 VAR_10->phy->supported.channels[2] |= 1;

 VAR_10->phy->supported.channels[2] |= 0x7fe;

 VAR_10->phy->supported.channels[3] |= 0x3fff;

 VAR_10->phy->supported.channels[4] |= 1;

 VAR_10->phy->supported.channels[4] |= 0x1e;

 VAR_10->phy->supported.channels[4] |= 0xffe0;

 VAR_10->phy->supported.channels[5] |= 0xf;

 VAR_10->phy->supported.channels[5] |= 0xf0;

 VAR_10->phy->supported.channels[6] |= 0x3ff;

 VAR_10->phy->supported.channels[6] |= 0x3ffc00;

 FUNC_5(&VAR_10->phy->perm_extended_addr);


 VAR_10->phy->current_channel = 13;
 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto err_pib;
 }

 FUNC_13(VAR_11->pib, VAR_12);
 VAR_11->idx = VAR_13;
 FUNC_0(&VAR_11->edges);

 VAR_10->flags = VAR_2;
 VAR_10->parent = VAR_8;

 VAR_14 = FUNC_6(VAR_10);
 if (VAR_14)
  goto err_reg;

 FUNC_11(&VAR_5);
 if (VAR_9) {
  VAR_14 = FUNC_2(VAR_11);
  if (VAR_14 < 0) {
   FUNC_12(&VAR_5);
   goto err_subscribe;
  }
 }
 FUNC_10(&VAR_11->list, &VAR_4);
 FUNC_12(&VAR_5);

 FUNC_1(VAR_7, VAR_11);

 return VAR_13;

err_subscribe:
 FUNC_7(VAR_11->hw);
err_reg:
 FUNC_8(VAR_12);
err_pib:
 FUNC_4(VAR_11->hw);
 return VAR_14;
}
