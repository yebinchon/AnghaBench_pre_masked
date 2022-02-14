
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_enet_ring {size_t next_to_clean; size_t next_to_use; TYPE_2__* desc; } ;
struct TYPE_3__ {scalar_t__ bdtp_fe_sc_vld_ra_ri; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;


 int FUNC_0 (struct hns3_enet_ring*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct hns3_enet_ring*,int ) ;

__attribute__((used)) static void FUNC_2(struct hns3_enet_ring *VAR_1)
{
 while (VAR_1->next_to_clean != VAR_1->next_to_use) {
  VAR_1->desc[VAR_1->next_to_clean].tx.bdtp_fe_sc_vld_ra_ri = 0;
  FUNC_0(VAR_1, VAR_1->next_to_clean);
  FUNC_1(VAR_1, VAR_0);
 }
}
