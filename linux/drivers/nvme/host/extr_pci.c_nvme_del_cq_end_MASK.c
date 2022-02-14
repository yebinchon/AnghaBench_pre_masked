
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct nvme_queue* end_io_data; } ;
struct nvme_queue {int flags; } ;
typedef scalar_t__ blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct request*,scalar_t__) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_1, blk_status_t VAR_2)
{
 struct nvme_queue *VAR_3 = VAR_1->end_io_data;

 if (VAR_2)
  FUNC_1(VAR_0, &VAR_3->flags);

 FUNC_0(VAR_1, VAR_2);
}
