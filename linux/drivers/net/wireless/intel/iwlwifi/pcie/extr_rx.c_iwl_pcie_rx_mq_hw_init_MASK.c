
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans_pcie {int rx_buf_size; TYPE_1__* rxq; } ;
struct iwl_trans {int num_rx_queues; TYPE_2__* cfg; } ;
struct TYPE_4__ {scalar_t__ integrated; } ;
struct TYPE_3__ {int rb_stts_dma; int used_bd_dma; int bd_dma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct iwl_trans*,unsigned long*) ;
 int FUNC_11 (struct iwl_trans*,unsigned long*) ;
 int FUNC_12 (struct iwl_trans*,int ,int ) ;
 int FUNC_13 (struct iwl_trans*,int ,int ) ;
 int FUNC_14 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static void FUNC_15(struct iwl_trans *VAR_19)
{
 struct iwl_trans_pcie *VAR_20 = FUNC_1(VAR_19);
 u32 VAR_21, VAR_22 = 0;
 unsigned long VAR_23;
 int VAR_24;

 switch (VAR_20->rx_buf_size) {
 case 130:
  VAR_21 = VAR_15;
  break;
 case 129:
  VAR_21 = VAR_16;
  break;
 case 128:
  VAR_21 = VAR_17;
  break;
 case 131:
  VAR_21 = VAR_14;
  break;
 default:
  FUNC_9(1);
  VAR_21 = VAR_16;
 }

 if (!FUNC_10(VAR_19, &VAR_23))
  return;


 FUNC_14(VAR_19, VAR_10, 0);

 FUNC_14(VAR_19, VAR_18, 0);

 for (VAR_24 = 0; VAR_24 < VAR_19->num_rx_queues; VAR_24++) {

  FUNC_13(VAR_19,
      FUNC_3(VAR_24),
      VAR_20->rxq[VAR_24].bd_dma);

  FUNC_13(VAR_19,
      FUNC_6(VAR_24),
      VAR_20->rxq[VAR_24].used_bd_dma);

  FUNC_13(VAR_19,
      FUNC_8(VAR_24),
      VAR_20->rxq[VAR_24].rb_stts_dma);

  FUNC_14(VAR_19, FUNC_5(VAR_24), 0);
  FUNC_14(VAR_19, FUNC_4(VAR_24), 0);
  FUNC_14(VAR_19, FUNC_7(VAR_24), 0);

  VAR_22 |= FUNC_0(VAR_24) | FUNC_0(VAR_24 + 16);
 }
 FUNC_14(VAR_19, VAR_10,
          VAR_4 | VAR_21 |
          VAR_12 |
          VAR_11 |
          VAR_13);






 FUNC_14(VAR_19, VAR_5,
          VAR_8 |
          FUNC_2(VAR_1, 0) |
          VAR_9 |
          FUNC_2(VAR_3,
            VAR_19->cfg->integrated ?
            VAR_7 :
            VAR_6));

 FUNC_14(VAR_19, VAR_18, VAR_22);

 FUNC_11(VAR_19, &VAR_23);


 FUNC_12(VAR_19, VAR_0, VAR_2);
}
