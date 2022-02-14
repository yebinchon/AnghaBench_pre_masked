
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef size_t u16 ;
struct hinic_sge {int len; void* lo_addr; void* hi_addr; } ;
struct TYPE_2__ {int lo_addr; int hi_addr; } ;
struct hinic_rq_wqe {TYPE_1__ buf_desc; } ;
struct hinic_rq_cqe {int len; } ;
struct hinic_rq {struct hinic_rq_cqe** cqe; } ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;

void FUNC_2(struct hinic_rq *VAR_1, struct hinic_rq_wqe *VAR_2,
        u16 VAR_3, struct hinic_sge *VAR_4)
{
 struct hinic_rq_cqe *VAR_5 = VAR_1->cqe[VAR_3];
 u32 VAR_6 = FUNC_1(VAR_5->len);

 VAR_4->hi_addr = FUNC_1(VAR_2->buf_desc.hi_addr);
 VAR_4->lo_addr = FUNC_1(VAR_2->buf_desc.lo_addr);
 VAR_4->len = FUNC_0(VAR_6, VAR_0);
}
