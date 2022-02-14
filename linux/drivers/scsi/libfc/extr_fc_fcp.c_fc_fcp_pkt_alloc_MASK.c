
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_lport {int stats; } ;
struct fc_fcp_pkt {int scsi_pkt_lock; int list; int timer; int ref_cnt; int xfer_ddp; struct fc_lport* lp; } ;
struct fc_fcp_internal {int scsi_pkt_pool; } ;
typedef int gfp_t ;
struct TYPE_2__ {int FcpPktAllocFails; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fc_fcp_internal* FUNC_1 (struct fc_lport*) ;
 int FUNC_2 () ;
 struct fc_fcp_pkt* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct fc_fcp_pkt*,int ,int) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;

__attribute__((used)) static struct fc_fcp_pkt *FUNC_10(struct fc_lport *VAR_1, gfp_t VAR_2)
{
 struct fc_fcp_internal *VAR_3 = FUNC_1(VAR_1);
 struct fc_fcp_pkt *VAR_4;

 VAR_4 = FUNC_3(VAR_3->scsi_pkt_pool, VAR_2);
 if (VAR_4) {
  FUNC_4(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->lp = VAR_1;
  VAR_4->xfer_ddp = VAR_0;
  FUNC_7(&VAR_4->ref_cnt, 1);
  FUNC_9(&VAR_4->timer, ((void*)0), 0);
  FUNC_0(&VAR_4->list);
  FUNC_8(&VAR_4->scsi_pkt_lock);
 } else {
  FUNC_5(VAR_1->stats, FUNC_2())->FcpPktAllocFails++;
  FUNC_6();
 }
 return VAR_4;
}
