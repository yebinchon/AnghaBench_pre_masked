
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int data; } ;
struct ehea_rwqe {TYPE_4__* sg_list; int wr_id; } ;
struct ehea_qp_init_attr {int act_nr_rwqes_rq2; int act_nr_rwqes_rq3; } ;
struct ehea_qp {struct ehea_qp_init_attr init_attr; } ;
struct TYPE_7__ {void* lkey; } ;
struct TYPE_6__ {struct sk_buff** arr; } ;
struct TYPE_5__ {struct sk_buff** arr; } ;
struct ehea_port_res {TYPE_3__ recv_mr; TYPE_2__ rq3_skba; TYPE_1__ rq2_skba; } ;
struct TYPE_8__ {void* vaddr; void* l_key; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct ehea_rwqe* FUNC_1 (struct ehea_qp*,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ehea_qp *VAR_1, struct ehea_port_res *VAR_2)
{
 struct ehea_qp VAR_3 = *VAR_1;
 struct ehea_qp_init_attr *VAR_4 = &VAR_3.init_attr;
 struct ehea_rwqe *VAR_5;
 struct sk_buff **VAR_6 = VAR_2->rq2_skba.arr;
 struct sk_buff **VAR_7 = VAR_2->rq3_skba.arr;
 struct sk_buff *VAR_8;
 u32 VAR_9 = VAR_2->recv_mr.lkey;


 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4->act_nr_rwqes_rq2 + 1; VAR_10++) {
  VAR_5 = FUNC_1(&VAR_3, 2);
  VAR_5->sg_list[0].l_key = VAR_9;
  VAR_11 = FUNC_0(VAR_0, VAR_5->wr_id);
  VAR_8 = VAR_6[VAR_11];
  if (VAR_8)
   VAR_5->sg_list[0].vaddr = FUNC_2(VAR_8->data);
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->act_nr_rwqes_rq3 + 1; VAR_10++) {
  VAR_5 = FUNC_1(&VAR_3, 3);
  VAR_5->sg_list[0].l_key = VAR_9;
  VAR_11 = FUNC_0(VAR_0, VAR_5->wr_id);
  VAR_8 = VAR_7[VAR_11];
  if (VAR_8)
   VAR_5->sg_list[0].vaddr = FUNC_2(VAR_8->data);
 }
}
