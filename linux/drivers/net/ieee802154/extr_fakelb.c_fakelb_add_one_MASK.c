
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802154_hw {struct device* parent; int flags; TYPE_2__* phy; struct fakelb_phy* priv; } ;
struct fakelb_phy {int channel; struct ieee802154_hw* hw; int list; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int* channels; } ;
struct TYPE_4__ {int current_channel; int perm_extended_addr; TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee802154_hw* FUNC_0 (int,int *) ;
 int FUNC_1 (struct ieee802154_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee802154_hw*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 struct ieee802154_hw *VAR_6;
 struct fakelb_phy *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(sizeof(*VAR_7), &VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_6->priv;
 VAR_7->hw = VAR_6;


 VAR_6->phy->supported.channels[0] |= 1;

 VAR_6->phy->supported.channels[0] |= 0x7fe;

 VAR_6->phy->supported.channels[0] |= 0x7FFF800;

 VAR_6->phy->supported.channels[1] |= 1;

 VAR_6->phy->supported.channels[1] |= 0x7fe;

 VAR_6->phy->supported.channels[2] |= 1;

 VAR_6->phy->supported.channels[2] |= 0x7fe;

 VAR_6->phy->supported.channels[3] |= 0x3fff;

 VAR_6->phy->supported.channels[4] |= 1;

 VAR_6->phy->supported.channels[4] |= 0x1e;

 VAR_6->phy->supported.channels[4] |= 0xffe0;

 VAR_6->phy->supported.channels[5] |= 0xf;

 VAR_6->phy->supported.channels[5] |= 0xf0;

 VAR_6->phy->supported.channels[6] |= 0x3ff;

 VAR_6->phy->supported.channels[6] |= 0x3ffc00;

 FUNC_2(&VAR_6->phy->perm_extended_addr);

 VAR_6->phy->current_channel = 13;
 VAR_7->channel = VAR_6->phy->current_channel;

 VAR_6->flags = VAR_1;
 VAR_6->parent = VAR_5;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  goto err_reg;

 FUNC_5(&VAR_4);
 FUNC_4(&VAR_7->list, &VAR_3);
 FUNC_6(&VAR_4);

 return 0;

err_reg:
 FUNC_1(VAR_7->hw);
 return VAR_8;
}
