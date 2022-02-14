
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_pmem {int req_list; int pmem_lock; int req_vq; int vdev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct virtio_pmem *VAR_1)
{

 VAR_1->req_vq = FUNC_4(VAR_1->vdev,
     VAR_0, "flush_queue");
 if (FUNC_1(VAR_1->req_vq))
  return FUNC_2(VAR_1->req_vq);

 FUNC_3(&VAR_1->pmem_lock);
 FUNC_0(&VAR_1->req_list);

 return 0;
}
