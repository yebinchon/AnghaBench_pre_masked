
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_fcp_pkt {int seq_ptr; int state; TYPE_1__* lp; } ;
struct TYPE_4__ {int FcpPktAborts; } ;
struct TYPE_3__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct fc_fcp_pkt *VAR_3)
{
 int VAR_4;

 if (!VAR_3->seq_ptr)
  return -VAR_0;

 FUNC_3(VAR_3->lp->stats, FUNC_2())->FcpPktAborts++;
 FUNC_4();

 VAR_3->state |= VAR_2;
 VAR_4 = FUNC_1(VAR_3->seq_ptr, 0);




 if (VAR_4 == -VAR_1) {
  FUNC_0(VAR_3);
  VAR_4 = 0;
 }
 return VAR_4;
}
