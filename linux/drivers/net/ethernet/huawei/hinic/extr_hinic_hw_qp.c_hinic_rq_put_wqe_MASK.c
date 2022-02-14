
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct hinic_rq_cqe {int status; } ;
struct hinic_rq {int wq; struct hinic_rq_cqe** cqe; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 () ;

void FUNC_5(struct hinic_rq *VAR_1, u16 VAR_2,
        unsigned int VAR_3)
{
 struct hinic_rq_cqe *VAR_4 = VAR_1->cqe[VAR_2];
 u32 VAR_5 = FUNC_1(VAR_4->status);

 VAR_5 = FUNC_0(VAR_5, VAR_0);


 VAR_4->status = FUNC_2(VAR_5);

 FUNC_4();

 FUNC_3(VAR_1->wq, VAR_3);
}
