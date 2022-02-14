
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {scalar_t__ state; scalar_t__ free_storage_on_release; int fsg_num_buffers; int buffhds; int dev; struct fsg_lun** luns; int thread_notifier; } ;
struct fsg_common {scalar_t__ state; scalar_t__ free_storage_on_release; int fsg_num_buffers; int buffhds; int dev; struct fsg_common** luns; int thread_notifier; } ;


 int FUNC_0 (struct fsg_lun**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fsg_lun*) ;
 int FUNC_5 (struct fsg_lun*) ;
 int FUNC_6 (struct fsg_lun*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct fsg_common *VAR_2)
{
 int VAR_3;


 if (VAR_2->state != VAR_1) {
  FUNC_6(VAR_2, VAR_0);
  FUNC_7(&VAR_2->thread_notifier);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->luns); ++VAR_3) {
  struct fsg_lun *VAR_4 = VAR_2->luns[VAR_3];
  if (!VAR_4)
   continue;
  FUNC_4(VAR_4);
  if (FUNC_2(&VAR_4->dev))
   FUNC_3(&VAR_4->dev);
  FUNC_5(VAR_4);
 }

 FUNC_1(VAR_2->buffhds, VAR_2->fsg_num_buffers);
 if (VAR_2->free_storage_on_release)
  FUNC_5(VAR_2);
}
