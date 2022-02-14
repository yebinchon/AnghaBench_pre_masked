
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_queue {int lock; } ;
struct blk_mq_hw_ctx {struct scm_queue* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scm_queue* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_hw_ctx *VAR_2, void *VAR_3,
        unsigned int VAR_4)
{
 struct scm_queue *VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);
 VAR_2->driver_data = VAR_5;

 return 0;
}
