
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct aq_vec_s {int dummy; } ;
struct aq_stats_s {scalar_t__ dpc; scalar_t__ dma_oct_tc; scalar_t__ dma_oct_rc; scalar_t__ dma_pkt_tc; scalar_t__ dma_pkt_rc; scalar_t__ bbtc; scalar_t__ mbtc; scalar_t__ ubtc; scalar_t__ bbrc; scalar_t__ mbrc; scalar_t__ ubrc; scalar_t__ bptc; scalar_t__ mptc; scalar_t__ uptc; scalar_t__ erpt; scalar_t__ bprc; scalar_t__ mprc; scalar_t__ uprc; } ;
struct aq_nic_s {unsigned int aq_vecs; struct aq_vec_s** aq_vec; int aq_hw; TYPE_2__* aq_hw_ops; int fwreq_mutex; TYPE_1__* aq_fw_ops; } ;
struct TYPE_4__ {struct aq_stats_s* (* hw_get_hw_stats ) (int ) ;} ;
struct TYPE_3__ {int (* update_stats ) (int ) ;} ;


 int FUNC_0 (struct aq_vec_s*,scalar_t__*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct aq_stats_s* FUNC_4 (int ) ;

void FUNC_5(struct aq_nic_s *VAR_0, u64 *VAR_1)
{
 unsigned int VAR_2 = 0U;
 unsigned int VAR_3 = 0U;
 struct aq_vec_s *VAR_4 = ((void*)0);
 struct aq_stats_s *VAR_5;

 if (VAR_0->aq_fw_ops->update_stats) {
  FUNC_1(&VAR_0->fwreq_mutex);
  VAR_0->aq_fw_ops->update_stats(VAR_0->aq_hw);
  FUNC_2(&VAR_0->fwreq_mutex);
 }
 VAR_5 = VAR_0->aq_hw_ops->hw_get_hw_stats(VAR_0->aq_hw);

 if (!VAR_5)
  goto err_exit;

 VAR_1[VAR_2] = VAR_5->uprc + VAR_5->mprc + VAR_5->bprc;
 VAR_1[++VAR_2] = VAR_5->uprc;
 VAR_1[++VAR_2] = VAR_5->mprc;
 VAR_1[++VAR_2] = VAR_5->bprc;
 VAR_1[++VAR_2] = VAR_5->erpt;
 VAR_1[++VAR_2] = VAR_5->uptc + VAR_5->mptc + VAR_5->bptc;
 VAR_1[++VAR_2] = VAR_5->uptc;
 VAR_1[++VAR_2] = VAR_5->mptc;
 VAR_1[++VAR_2] = VAR_5->bptc;
 VAR_1[++VAR_2] = VAR_5->ubrc;
 VAR_1[++VAR_2] = VAR_5->ubtc;
 VAR_1[++VAR_2] = VAR_5->mbrc;
 VAR_1[++VAR_2] = VAR_5->mbtc;
 VAR_1[++VAR_2] = VAR_5->bbrc;
 VAR_1[++VAR_2] = VAR_5->bbtc;
 VAR_1[++VAR_2] = VAR_5->ubrc + VAR_5->mbrc + VAR_5->bbrc;
 VAR_1[++VAR_2] = VAR_5->ubtc + VAR_5->mbtc + VAR_5->bbtc;
 VAR_1[++VAR_2] = VAR_5->dma_pkt_rc;
 VAR_1[++VAR_2] = VAR_5->dma_pkt_tc;
 VAR_1[++VAR_2] = VAR_5->dma_oct_rc;
 VAR_1[++VAR_2] = VAR_5->dma_oct_tc;
 VAR_1[++VAR_2] = VAR_5->dpc;

 VAR_2++;

 VAR_1 += VAR_2;

 for (VAR_2 = 0U, VAR_4 = VAR_0->aq_vec[0];
  VAR_4 && VAR_0->aq_vecs > VAR_2; ++VAR_2, VAR_4 = VAR_0->aq_vec[VAR_2]) {
  VAR_1 += VAR_3;
  FUNC_0(VAR_4, VAR_1, &VAR_3);
 }

err_exit:;
}
