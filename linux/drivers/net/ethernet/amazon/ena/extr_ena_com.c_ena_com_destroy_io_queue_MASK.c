
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ena_com_io_sq {int dummy; } ;
struct ena_com_io_cq {int dummy; } ;
struct ena_com_dev {struct ena_com_io_cq* io_cq_queues; struct ena_com_io_sq* io_sq_queues; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_com_io_cq*) ;
 int FUNC_1 (struct ena_com_dev*,struct ena_com_io_sq*) ;
 int FUNC_2 (struct ena_com_dev*,struct ena_com_io_sq*,struct ena_com_io_cq*) ;
 int FUNC_3 (char*,size_t,size_t) ;

void FUNC_4(struct ena_com_dev *VAR_1, u16 VAR_2)
{
 struct ena_com_io_sq *VAR_3;
 struct ena_com_io_cq *VAR_4;

 if (VAR_2 >= VAR_0) {
  FUNC_3("Qid (%d) is bigger than max num of queues (%d)\n", VAR_2,
         VAR_0);
  return;
 }

 VAR_3 = &VAR_1->io_sq_queues[VAR_2];
 VAR_4 = &VAR_1->io_cq_queues[VAR_2];

 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_1, VAR_4);

 FUNC_2(VAR_1, VAR_3, VAR_4);
}
