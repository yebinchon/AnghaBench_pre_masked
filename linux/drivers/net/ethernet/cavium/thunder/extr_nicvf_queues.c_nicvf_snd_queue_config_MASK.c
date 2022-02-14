
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qs_num; int sq_num; int cfg; int sqs_mode; int msg; } ;
union nic_mbx {TYPE_1__ sq; } ;
typedef int u64 ;
struct sq_cfg {int ena; int cq_limit; scalar_t__ tstmp_bgx_intf; int qsize; scalar_t__ ldwb; scalar_t__ reset; } ;
struct TYPE_4__ {scalar_t__ phys_base; } ;
struct snd_queue {int enable; int cq_qs; int cq_idx; int affinity_mask; int thresh; TYPE_2__ dmem; } ;
struct queue_set {int vnic_id; int sq_len; int cq_len; struct snd_queue* sq; } ;
struct nicvf {int netdev; int sqs_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sq_cfg*,int ,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct nicvf*,int ,int,int ) ;
 int FUNC_6 (struct nicvf*,struct queue_set*,int) ;
 int FUNC_7 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_8(struct nicvf *VAR_6, struct queue_set *VAR_7,
       int VAR_8, bool VAR_9)
{
 union nic_mbx VAR_10 = {};
 struct snd_queue *VAR_11;
 struct sq_cfg VAR_12;

 VAR_11 = &VAR_7->sq[VAR_8];
 VAR_11->enable = VAR_9;

 if (!VAR_11->enable) {
  FUNC_6(VAR_6, VAR_7, VAR_8);
  return;
 }


 FUNC_5(VAR_6, VAR_4, VAR_8, VAR_1);

 VAR_11->cq_qs = VAR_7->vnic_id;
 VAR_11->cq_idx = VAR_8;


 VAR_10.sq.msg = VAR_2;
 VAR_10.sq.qs_num = VAR_7->vnic_id;
 VAR_10.sq.sq_num = VAR_8;
 VAR_10.sq.sqs_mode = VAR_6->sqs_mode;
 VAR_10.sq.cfg = (VAR_11->cq_qs << 3) | VAR_11->cq_idx;
 FUNC_7(VAR_6, &VAR_10);


 FUNC_5(VAR_6, VAR_3,
         VAR_8, (u64)(VAR_11->dmem.phys_base));


 FUNC_3(&VAR_12, 0, sizeof(struct sq_cfg));
 VAR_12.ena = 1;
 VAR_12.reset = 0;
 VAR_12.ldwb = 0;
 VAR_12.qsize = FUNC_2(VAR_7->sq_len >> 10);
 VAR_12.tstmp_bgx_intf = 0;



 VAR_12.cq_limit = (VAR_0 * 256) / VAR_7->cq_len;
 FUNC_5(VAR_6, VAR_4, VAR_8, *(u64 *)&VAR_12);


 FUNC_5(VAR_6, VAR_5, VAR_8, VAR_11->thresh);


 if (FUNC_0(VAR_8)) {
  FUNC_1(VAR_8, &VAR_11->affinity_mask);
  FUNC_4(VAR_6->netdev,
        &VAR_11->affinity_mask, VAR_8);
 }
}
