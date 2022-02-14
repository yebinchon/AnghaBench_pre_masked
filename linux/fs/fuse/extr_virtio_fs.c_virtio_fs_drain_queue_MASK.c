
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_fs_vq {scalar_t__ in_flight; int dispatch_work; int done_work; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct virtio_fs_vq *VAR_0)
{
 FUNC_0(VAR_0->in_flight < 0);


 while (1) {
  FUNC_3(&VAR_0->lock);
  if (!VAR_0->in_flight) {
   FUNC_4(&VAR_0->lock);
   break;
  }
  FUNC_4(&VAR_0->lock);

  FUNC_5(1000, 2000);
 }

 FUNC_2(&VAR_0->done_work);
 FUNC_1(&VAR_0->dispatch_work);
}
