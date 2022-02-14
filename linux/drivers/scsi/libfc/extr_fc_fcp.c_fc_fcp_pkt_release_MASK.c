
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int lp; int ref_cnt; } ;
struct fc_fcp_internal {int scsi_pkt_pool; } ;


 struct fc_fcp_internal* FUNC_0 (int ) ;
 int FUNC_1 (struct fc_fcp_pkt*,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fc_fcp_pkt *VAR_0)
{
 if (FUNC_2(&VAR_0->ref_cnt)) {
  struct fc_fcp_internal *VAR_1 = FUNC_0(VAR_0->lp);

  FUNC_1(VAR_0, VAR_1->scsi_pkt_pool);
 }
}
