
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_ring_cmpl_ring_cfg_aggint_params_input {void* ring_id; int member_0; } ;
struct bnxt_napi {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;
struct bnxt_coal {int dummy; } ;
struct bnxt {int cp_nr_rings; int flags; int hwrm_cmd_lock; struct bnxt_coal tx_coal; struct bnxt_coal rx_coal; struct bnxt_napi** bnapi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct bnxt_napi*,struct bnxt_coal*) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,scalar_t__) ;
 int FUNC_3 (struct bnxt*,scalar_t__) ;
 int FUNC_4 (struct bnxt*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*,int ,int,int) ;
 int FUNC_5 (struct bnxt*,struct bnxt_coal*,struct hwrm_ring_cmpl_ring_cfg_aggint_params_input*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct bnxt *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct hwrm_ring_cmpl_ring_cfg_aggint_params_input VAR_6 = {0},
          VAR_7 = {0}, *VAR_8;

 FUNC_4(VAR_3, &VAR_6,
          VAR_2, -1, -1);
 FUNC_4(VAR_3, &VAR_7,
          VAR_2, -1, -1);

 FUNC_5(VAR_3, &VAR_3->rx_coal, &VAR_6);
 FUNC_5(VAR_3, &VAR_3->tx_coal, &VAR_7);

 FUNC_7(&VAR_3->hwrm_cmd_lock);
 for (VAR_4 = 0; VAR_4 < VAR_3->cp_nr_rings; VAR_4++) {
  struct bnxt_napi *VAR_9 = VAR_3->bnapi[VAR_4];
  struct bnxt_coal *VAR_10;
  u16 VAR_11;

  VAR_8 = &VAR_6;
  if (!VAR_9->rx_ring) {
   VAR_11 = FUNC_3(VAR_3, VAR_9->tx_ring);
   VAR_8 = &VAR_7;
  } else {
   VAR_11 = FUNC_2(VAR_3, VAR_9->rx_ring);
  }
  VAR_8->ring_id = FUNC_6(VAR_11);

  VAR_5 = FUNC_1(VAR_3, VAR_8, sizeof(*VAR_8),
     VAR_1);
  if (VAR_5)
   break;

  if (!(VAR_3->flags & VAR_0))
   continue;

  if (VAR_9->rx_ring && VAR_9->tx_ring) {
   VAR_8 = &VAR_7;
   VAR_11 = FUNC_3(VAR_3, VAR_9->tx_ring);
   VAR_8->ring_id = FUNC_6(VAR_11);
   VAR_5 = FUNC_1(VAR_3, VAR_8, sizeof(*VAR_8),
      VAR_1);
   if (VAR_5)
    break;
  }
  if (VAR_9->rx_ring)
   VAR_10 = &VAR_3->rx_coal;
  else
   VAR_10 = &VAR_3->tx_coal;
  FUNC_0(VAR_3, VAR_9, VAR_10);
 }
 FUNC_8(&VAR_3->hwrm_cmd_lock);
 return VAR_5;
}
