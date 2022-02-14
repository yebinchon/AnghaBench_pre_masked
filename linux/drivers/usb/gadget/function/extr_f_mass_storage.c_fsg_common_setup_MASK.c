
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {int free_storage_on_release; int luns; int state; int fsg_wait; int io_wait; int thread_notifier; int lock; int filesem; } ;


 int VAR_0 ;
 struct fsg_common* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fsg_common* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct fsg_common *FUNC_7(struct fsg_common *VAR_3)
{
 if (!VAR_3) {
  VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_2);
  if (!VAR_3)
   return FUNC_0(-VAR_0);
  VAR_3->free_storage_on_release = 1;
 } else {
  VAR_3->free_storage_on_release = 0;
 }
 FUNC_2(&VAR_3->filesem);
 FUNC_6(&VAR_3->lock);
 FUNC_1(&VAR_3->thread_notifier);
 FUNC_3(&VAR_3->io_wait);
 FUNC_3(&VAR_3->fsg_wait);
 VAR_3->state = VAR_1;
 FUNC_5(VAR_3->luns, 0, sizeof(VAR_3->luns));

 return VAR_3;
}
