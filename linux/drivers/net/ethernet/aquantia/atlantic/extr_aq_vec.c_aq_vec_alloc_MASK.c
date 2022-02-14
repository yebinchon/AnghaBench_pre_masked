
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int vec_idx; int affinity_mask; scalar_t__ cpu; } ;
struct aq_vec_s {scalar_t__ rx_rings; int ** ring; scalar_t__ tx_rings; TYPE_2__ aq_ring_param; int nic; int napi; struct aq_nic_s* aq_nic; } ;
struct aq_ring_s {int dummy; } ;
struct aq_nic_s {int dummy; } ;
struct TYPE_3__ {scalar_t__ base_cpu_number; } ;
struct aq_nic_cfg_s {unsigned int tcs; TYPE_1__ aq_rss; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,scalar_t__,unsigned int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*,unsigned int,struct aq_ring_s*) ;
 struct aq_ring_s* FUNC_3 (int *,struct aq_nic_s*,unsigned int,struct aq_nic_cfg_s*) ;
 struct aq_ring_s* FUNC_4 (int *,struct aq_nic_s*,unsigned int,struct aq_nic_cfg_s*) ;
 int FUNC_5 (struct aq_vec_s*) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__,int *) ;
 struct aq_vec_s* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int *,int ,int ) ;

struct aq_vec_s *FUNC_9(struct aq_nic_s *VAR_6, unsigned int VAR_7,
         struct aq_nic_cfg_s *VAR_8)
{
 struct aq_vec_s *VAR_9 = ((void*)0);
 struct aq_ring_s *VAR_10 = ((void*)0);
 unsigned int VAR_11 = 0U;
 int VAR_12 = 0;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_12 = -VAR_3;
  goto err_exit;
 }

 VAR_9->aq_nic = VAR_6;
 VAR_9->aq_ring_param.vec_idx = VAR_7;
 VAR_9->aq_ring_param.cpu =
  VAR_7 + VAR_8->aq_rss.base_cpu_number;

 FUNC_6(VAR_9->aq_ring_param.cpu,
   &VAR_9->aq_ring_param.affinity_mask);

 VAR_9->tx_rings = 0;
 VAR_9->rx_rings = 0;

 FUNC_8(FUNC_1(VAR_6), &VAR_9->napi,
         VAR_5, VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_8->tcs; ++VAR_11) {
  unsigned int VAR_13 = FUNC_0(VAR_9->nic,
      VAR_9->tx_rings,
      VAR_9->aq_ring_param.vec_idx);

  VAR_10 = FUNC_4(&VAR_9->ring[VAR_11][VAR_2], VAR_6,
     VAR_13, VAR_8);
  if (!VAR_10) {
   VAR_12 = -VAR_3;
   goto err_exit;
  }

  ++VAR_9->tx_rings;

  FUNC_2(VAR_6, VAR_13, VAR_10);

  VAR_10 = FUNC_3(&VAR_9->ring[VAR_11][VAR_1], VAR_6,
     VAR_13, VAR_8);
  if (!VAR_10) {
   VAR_12 = -VAR_3;
   goto err_exit;
  }

  ++VAR_9->rx_rings;
 }

err_exit:
 if (VAR_12 < 0) {
  FUNC_5(VAR_9);
  VAR_9 = ((void*)0);
 }
 return VAR_9;
}
