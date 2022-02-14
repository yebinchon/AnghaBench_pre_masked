
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t vf_id; int qs_count; int msg; } ;
union nic_mbx {TYPE_1__ sqs_alloc; } ;
struct sqs_alloc {int qs_count; size_t vf_id; } ;
struct nicpf {int** vf_sqs; size_t* pqs_vf; int num_sqs_en; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*) ;
 int FUNC_1 (struct nicpf*,size_t,union nic_mbx*) ;

__attribute__((used)) static void FUNC_2(struct nicpf *VAR_1, struct sqs_alloc *VAR_2)
{
 union nic_mbx VAR_3 = {};
 int VAR_4, VAR_5 = 0;
 int VAR_6;

 if (!VAR_1->num_sqs_en)
  goto send_mbox;

 for (VAR_4 = 0; VAR_4 < VAR_2->qs_count; VAR_4++) {
  VAR_6 = FUNC_0(VAR_1);
  if (VAR_6 < 0)
   break;
  VAR_1->vf_sqs[VAR_2->vf_id][VAR_4] = VAR_6;
  VAR_1->pqs_vf[VAR_6] = VAR_2->vf_id;
  VAR_5++;
 }

send_mbox:
 VAR_3.sqs_alloc.msg = VAR_0;
 VAR_3.sqs_alloc.vf_id = VAR_2->vf_id;
 VAR_3.sqs_alloc.qs_count = VAR_5;
 FUNC_1(VAR_1, VAR_2->vf_id, &VAR_3);
}
