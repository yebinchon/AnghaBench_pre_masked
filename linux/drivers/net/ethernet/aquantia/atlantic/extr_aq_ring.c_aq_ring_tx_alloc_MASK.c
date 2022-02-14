
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_ring_s {unsigned int idx; int dx_size; int size; struct aq_nic_s* aq_nic; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {TYPE_1__* aq_hw_caps; int txds; } ;
struct TYPE_2__ {int txd_size; } ;


 int VAR_0 ;
 struct aq_ring_s* FUNC_0 (struct aq_ring_s*,struct aq_nic_s*) ;
 int FUNC_1 (struct aq_ring_s*) ;

struct aq_ring_s *FUNC_2(struct aq_ring_s *VAR_1,
       struct aq_nic_s *VAR_2,
       unsigned int VAR_3,
       struct aq_nic_cfg_s *VAR_4)
{
 int VAR_5 = 0;

 VAR_1->aq_nic = VAR_2;
 VAR_1->idx = VAR_3;
 VAR_1->size = VAR_4->txds;
 VAR_1->dx_size = VAR_4->aq_hw_caps->txd_size;

 VAR_1 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_1) {
  VAR_5 = -VAR_0;
  goto err_exit;
 }

err_exit:
 if (VAR_5 < 0) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
 return VAR_1;
}
