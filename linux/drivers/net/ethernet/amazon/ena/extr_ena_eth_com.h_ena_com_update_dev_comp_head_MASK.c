
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_io_cq {int cq_head_db_reg; int head; int last_head_update; int q_depth; int qid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static inline int FUNC_3(struct ena_com_io_cq *VAR_1)
{
 u16 VAR_2, VAR_3;
 bool VAR_4;

 if (FUNC_1(VAR_1->cq_head_db_reg)) {
  VAR_3 = VAR_1->head;
  VAR_2 = VAR_3 - VAR_1->last_head_update;
  VAR_4 = VAR_2 > (VAR_1->q_depth / VAR_0);

  if (FUNC_1(VAR_4)) {
   FUNC_0("Write completion queue doorbell for queue %d: head: %d\n",
     VAR_1->qid, VAR_3);
   FUNC_2(VAR_3, VAR_1->cq_head_db_reg);
   VAR_1->last_head_update = VAR_3;
  }
 }

 return 0;
}
