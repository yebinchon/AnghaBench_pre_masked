
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_request {int entry; struct nvme_tcp_queue* queue; } ;
struct nvme_tcp_queue {int io_work; int io_cpu; int lock; int send_list; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct nvme_tcp_request *VAR_1)
{
 struct nvme_tcp_queue *VAR_2 = VAR_1->queue;

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_1->entry, &VAR_2->send_list);
 FUNC_3(&VAR_2->lock);

 FUNC_1(VAR_2->io_cpu, VAR_0, &VAR_2->io_work);
}
