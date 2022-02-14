
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int state; int wait_for_comp; int scsi_pkt_lock; int tm_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct fc_fcp_pkt *VAR_4)
{
 int VAR_5 = VAR_0;
 unsigned long VAR_6;

 FUNC_0(VAR_4, "pkt abort state %x\n", VAR_4->state);
 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_4, "failed to send abort\n");
  return VAR_0;
 }

 if (VAR_4->state & VAR_2) {
  FUNC_0(VAR_4, "target abort cmd  completed\n");
  return VAR_3;
 }

 FUNC_3(&VAR_4->tm_done);
 VAR_4->wait_for_comp = 1;

 FUNC_5(&VAR_4->scsi_pkt_lock);
 VAR_6 = FUNC_6(&VAR_4->tm_done,
       VAR_1);
 FUNC_4(&VAR_4->scsi_pkt_lock);
 VAR_4->wait_for_comp = 0;

 if (!VAR_6) {
  FUNC_0(VAR_4, "target abort cmd  failed\n");
 } else if (VAR_4->state & VAR_2) {
  FUNC_0(VAR_4, "target abort cmd  passed\n");
  VAR_5 = VAR_3;
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
