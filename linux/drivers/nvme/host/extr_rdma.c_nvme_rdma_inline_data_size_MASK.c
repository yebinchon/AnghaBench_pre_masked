
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {size_t cmnd_capsule_len; } ;
struct nvme_command {int dummy; } ;



__attribute__((used)) static inline size_t FUNC_0(struct nvme_rdma_queue *VAR_0)
{
 return VAR_0->cmnd_capsule_len - sizeof(struct nvme_command);
}
