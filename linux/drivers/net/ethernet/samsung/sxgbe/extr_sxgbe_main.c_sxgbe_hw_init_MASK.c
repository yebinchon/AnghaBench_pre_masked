
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ rx_csum_offload; scalar_t__ tx_csum_offload; } ;
struct sxgbe_priv_data {TYPE_2__ hw_cap; TYPE_3__* hw; int ioaddr; } ;
struct TYPE_7__ {int ctrl_uid; int ctrl_id; TYPE_1__* mac; } ;
struct TYPE_5__ {int (* get_controller_version ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sxgbe_priv_data* const) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct sxgbe_priv_data * const VAR_2)
{
 u32 VAR_3;

 VAR_2->hw = FUNC_0(sizeof(*VAR_2->hw), VAR_1);
 if(!VAR_2->hw)
  return -VAR_0;


 FUNC_4(VAR_2->hw);


 VAR_3 = VAR_2->hw->mac->get_controller_version(VAR_2->ioaddr);
 VAR_2->hw->ctrl_uid = (VAR_3 & 0x00ff0000) >> 16;
 VAR_2->hw->ctrl_id = (VAR_3 & 0x000000ff);
 FUNC_1("user ID: 0x%x, Controller ID: 0x%x\n",
  VAR_2->hw->ctrl_uid, VAR_2->hw->ctrl_id);


 if (!FUNC_3(VAR_2))
  FUNC_1("Hardware features not found\n");

 if (VAR_2->hw_cap.tx_csum_offload)
  FUNC_1("TX Checksum offload supported\n");

 if (VAR_2->hw_cap.rx_csum_offload)
  FUNC_1("RX Checksum offload supported\n");

 return 0;
}
