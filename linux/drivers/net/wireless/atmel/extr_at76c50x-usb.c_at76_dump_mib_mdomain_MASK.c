
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_mdomain {int tx_powerlevel; int channel_list; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int ) ;
 int FUNC_1 (int ,int ,struct mib_mdomain*,int) ;
 int FUNC_2 (struct mib_mdomain*) ;
 struct mib_mdomain* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct at76_priv *VAR_3)
{
 int VAR_4;
 struct mib_mdomain *VAR_5 = FUNC_3(sizeof(struct mib_mdomain), VAR_1);

 if (!VAR_5)
  return;

 VAR_4 = FUNC_1(VAR_3->udev, VAR_2, VAR_5,
      sizeof(struct mib_mdomain));
 if (VAR_4 < 0) {
  FUNC_4(VAR_3->hw->wiphy,
     "at76_get_mib (MDOMAIN) failed: %d\n", VAR_4);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB MDOMAIN: channel_list %*phD",
   FUNC_5(VAR_3->hw->wiphy),
   (int)sizeof(VAR_5->channel_list), VAR_5->channel_list);

 FUNC_0(VAR_0, "%s: MIB MDOMAIN: tx_powerlevel %*phD",
   FUNC_5(VAR_3->hw->wiphy),
   (int)sizeof(VAR_5->tx_powerlevel), VAR_5->tx_powerlevel);
exit:
 FUNC_2(VAR_5);
}
