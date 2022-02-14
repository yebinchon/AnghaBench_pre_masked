
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t sqs_id; int nicvf; int msg; } ;
union nic_mbx {TYPE_1__ nicvf; } ;
struct nicvf_ptr {size_t vf_id; size_t sqs_id; } ;
struct nicpf {int** vf_sqs; int * nicvf; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*,size_t,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicpf *VAR_1, struct nicvf_ptr *VAR_2)
{
 union nic_mbx VAR_3 = {};
 int VAR_4 = VAR_1->vf_sqs[VAR_2->vf_id][VAR_2->sqs_id];

 VAR_3.nicvf.msg = VAR_0;
 VAR_3.nicvf.sqs_id = VAR_2->sqs_id;
 VAR_3.nicvf.nicvf = VAR_1->nicvf[VAR_4];
 FUNC_0(VAR_1, VAR_2->vf_id, &VAR_3);
}
