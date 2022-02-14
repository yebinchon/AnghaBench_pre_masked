
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_queue {int scmrq; } ;
struct blk_mq_hw_ctx {struct scm_queue* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scm_queue*) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_hw_ctx *VAR_0, unsigned int VAR_1)
{
 struct scm_queue *VAR_2 = VAR_0->driver_data;

 FUNC_0(VAR_2->scmrq);
 FUNC_1(VAR_0->driver_data);
 VAR_0->driver_data = ((void*)0);
}
