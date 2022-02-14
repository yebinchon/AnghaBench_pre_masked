
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cfg; int sqs_count; int num; int msg; } ;
union nic_mbx {TYPE_1__ qs; } ;
struct queue_set {int enable; int vnic_id; } ;
struct qs_cfg {int ena; int be; int send_tstmp_ena; int vnic; } ;
struct nicvf {scalar_t__ ptp_clock; int sqs_count; int vf_id; int netdev; struct queue_set* qs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

void FUNC_2(struct nicvf *VAR_1, bool VAR_2)
{
 union nic_mbx VAR_3 = {};
 struct queue_set *VAR_4 = VAR_1->qs;
 struct qs_cfg *VAR_5;

 if (!VAR_4) {
  FUNC_0(VAR_1->netdev,
       "Qset is still not allocated, don't init queues\n");
  return;
 }

 VAR_4->enable = VAR_2;
 VAR_4->vnic_id = VAR_1->vf_id;


 VAR_3.qs.msg = VAR_0;
 VAR_3.qs.num = VAR_4->vnic_id;
 VAR_3.qs.sqs_count = VAR_1->sqs_count;

 VAR_3.qs.cfg = 0;
 VAR_5 = (struct qs_cfg *)&VAR_3.qs.cfg;
 if (VAR_4->enable) {
  VAR_5->ena = 1;



  VAR_5->vnic = VAR_4->vnic_id;

  if (VAR_1->ptp_clock)
   VAR_5->send_tstmp_ena = 1;
 }
 FUNC_1(VAR_1, &VAR_3);
}
