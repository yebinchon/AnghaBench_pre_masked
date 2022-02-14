
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_lun {int dummy; } ;
struct fsg_common {scalar_t__ state; int thread_notifier; int filesem; struct fsg_lun** luns; int lock; int * thread_task; int running; } ;


 int FUNC_0 (struct fsg_lun**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct fsg_common*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct fsg_common*) ;
 scalar_t__ FUNC_6 (struct fsg_common*) ;
 int FUNC_7 (struct fsg_lun*) ;
 scalar_t__ FUNC_8 (struct fsg_lun*) ;
 scalar_t__ FUNC_9 (struct fsg_common*) ;
 int FUNC_10 (struct fsg_common*) ;
 int FUNC_11 (struct fsg_common*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct fsg_common*,int,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(void *VAR_6)
{
 struct fsg_common *VAR_7 = VAR_6;
 int VAR_8;





 FUNC_1(VAR_1);
 FUNC_1(VAR_3);
 FUNC_1(VAR_2);
 FUNC_1(VAR_4);


 FUNC_12();


 while (VAR_7->state != VAR_0) {
  if (FUNC_5(VAR_7) || FUNC_13(VAR_5)) {
   FUNC_10(VAR_7);
   continue;
  }

  if (!VAR_7->running) {
   FUNC_14(VAR_7, 1, ((void*)0));
   continue;
  }

  if (FUNC_9(VAR_7) || FUNC_5(VAR_7))
   continue;
  if (FUNC_3(VAR_7) || FUNC_5(VAR_7))
   continue;
  if (FUNC_6(VAR_7) || FUNC_5(VAR_7))
   continue;
  FUNC_11(VAR_7);
 }

 FUNC_15(&VAR_7->lock);
 VAR_7->thread_task = ((void*)0);
 FUNC_16(&VAR_7->lock);



 FUNC_4(&VAR_7->filesem);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->luns); VAR_8++) {
  struct fsg_lun *VAR_9 = VAR_7->luns[VAR_8];

  if (VAR_9 && FUNC_8(VAR_9))
   FUNC_7(VAR_9);
 }
 FUNC_17(&VAR_7->filesem);


 FUNC_2(&VAR_7->thread_notifier, 0);
}
