
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_ring_s {unsigned int idx; scalar_t__ page_order; int dx_size; int size; struct aq_nic_s* aq_nic; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {scalar_t__ rxpageorder; TYPE_1__* aq_hw_caps; int rxds; } ;
struct TYPE_2__ {int rxd_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aq_ring_s* FUNC_0 (struct aq_ring_s*,struct aq_nic_s*) ;
 int FUNC_1 (struct aq_ring_s*) ;
 scalar_t__ FUNC_2 (int) ;

struct aq_ring_s *FUNC_3(struct aq_ring_s *VAR_3,
       struct aq_nic_s *VAR_4,
       unsigned int VAR_5,
       struct aq_nic_cfg_s *VAR_6)
{
 int VAR_7 = 0;

 VAR_3->aq_nic = VAR_4;
 VAR_3->idx = VAR_5;
 VAR_3->size = VAR_6->rxds;
 VAR_3->dx_size = VAR_6->aq_hw_caps->rxd_size;
 VAR_3->page_order = FUNC_2(VAR_0 / VAR_2 +
          (VAR_0 % VAR_2 ? 1 : 0)) - 1;

 if (VAR_6->rxpageorder > VAR_3->page_order)
  VAR_3->page_order = VAR_6->rxpageorder;

 VAR_3 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_3) {
  VAR_7 = -VAR_1;
  goto err_exit;
 }

err_exit:
 if (VAR_7 < 0) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
