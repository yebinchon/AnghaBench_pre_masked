
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_hw_resc {scalar_t__ resv_tx_rings; int resv_rx_rings; int resv_cp_rings; int resv_vnics; int resv_stat_ctxs; int resv_hw_ring_grps; int resv_irqs; } ;
struct bnxt {int rx_nr_rings; int hwrm_spec_code; scalar_t__ tx_nr_rings; int flags; struct bnxt_hw_resc hw_resc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;

__attribute__((used)) static bool FUNC_5(struct bnxt *VAR_3)
{
 struct bnxt_hw_resc *VAR_4 = &VAR_3->hw_resc;
 int VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = FUNC_4(VAR_3);
 int VAR_7 = VAR_3->rx_nr_rings, VAR_8;
 int VAR_9 = 1, VAR_10 = VAR_7;

 if (VAR_3->hwrm_spec_code < 0x10601)
  return 0;

 if (VAR_4->resv_tx_rings != VAR_3->tx_nr_rings)
  return 1;

 if ((VAR_3->flags & VAR_2) && !(VAR_3->flags & VAR_1))
  VAR_9 = VAR_7 + 1;
 if (VAR_3->flags & VAR_0)
  VAR_7 <<= 1;
 VAR_8 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_3) &&
     (VAR_4->resv_rx_rings != VAR_7 || VAR_4->resv_cp_rings != VAR_5 ||
      VAR_4->resv_vnics != VAR_9 || VAR_4->resv_stat_ctxs != VAR_8 ||
      (VAR_4->resv_hw_ring_grps != VAR_10 &&
       !(VAR_3->flags & VAR_1))))
  return 1;
 if ((VAR_3->flags & VAR_1) && FUNC_1(VAR_3) &&
     VAR_4->resv_irqs != VAR_6)
  return 1;
 return 0;
}
