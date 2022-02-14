
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct nicvf {int pf_acked; int pf_nacked; int rx_mode_mtx; int vf_id; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct nicvf*,union nic_mbx*) ;

int FUNC_5(struct nicvf *VAR_3, union nic_mbx *VAR_4)
{
 int VAR_5 = VAR_2;
 int VAR_6 = 10;
 int VAR_7 = 0;

 FUNC_1(&VAR_3->rx_mode_mtx);

 VAR_3->pf_acked = 0;
 VAR_3->pf_nacked = 0;

 FUNC_4(VAR_3, VAR_4);


 while (!VAR_3->pf_acked) {
  if (VAR_3->pf_nacked) {
   FUNC_3(VAR_3->netdev,
       "PF NACK to mbox msg 0x%02x from VF%d\n",
       (VAR_4->msg.msg & 0xFF), VAR_3->vf_id);
   VAR_7 = -VAR_1;
   break;
  }
  FUNC_0(VAR_6);
  if (VAR_3->pf_acked)
   break;
  VAR_5 -= VAR_6;
  if (!VAR_5) {
   FUNC_3(VAR_3->netdev,
       "PF didn't ACK to mbox msg 0x%02x from VF%d\n",
       (VAR_4->msg.msg & 0xFF), VAR_3->vf_id);
   VAR_7 = -VAR_0;
   break;
  }
 }
 FUNC_2(&VAR_3->rx_mode_mtx);
 return VAR_7;
}
