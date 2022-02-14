
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct nvme_queue* end_io_data; } ;
struct nvme_queue {int delete_done; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0, blk_status_t VAR_1)
{
 struct nvme_queue *VAR_2 = VAR_0->end_io_data;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_2->delete_done);
}
