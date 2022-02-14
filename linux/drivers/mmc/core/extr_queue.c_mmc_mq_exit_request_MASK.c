
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue {int queue; } ;
struct blk_mq_tag_set {struct mmc_queue* driver_data; } ;


 int FUNC_0 (int ,struct request*) ;

__attribute__((used)) static void FUNC_1(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
    unsigned int VAR_2)
{
 struct mmc_queue *VAR_3 = VAR_0->driver_data;

 FUNC_0(VAR_3->queue, VAR_1);
}
