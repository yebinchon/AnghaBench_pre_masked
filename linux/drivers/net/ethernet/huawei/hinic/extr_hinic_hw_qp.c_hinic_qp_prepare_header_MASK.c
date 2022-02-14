
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_qp_ctxt_header {int queue_type; int addr_offset; int num_queues; } ;
typedef enum hinic_qp_ctxt_type { ____Placeholder_hinic_qp_ctxt_type } hinic_qp_ctxt_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct hinic_qp_ctxt_header*,int) ;

void FUNC_4(struct hinic_qp_ctxt_header *VAR_1,
        enum hinic_qp_ctxt_type VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_4;
 u16 VAR_6 = VAR_4;

 VAR_1->num_queues = VAR_3;
 VAR_1->queue_type = VAR_2;

 if (VAR_2 == VAR_0)
  VAR_1->addr_offset = FUNC_2(VAR_5, VAR_6, 0);
 else
  VAR_1->addr_offset = FUNC_0(VAR_5, VAR_6, 0);

 VAR_1->addr_offset = FUNC_1(VAR_1->addr_offset);

 FUNC_3(VAR_1, sizeof(*VAR_1));
}
