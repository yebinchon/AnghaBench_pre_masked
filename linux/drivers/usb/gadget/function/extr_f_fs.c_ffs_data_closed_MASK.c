
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_data {scalar_t__ setup_state; void* state; int opened; int * epfiles; int eps_count; scalar_t__ no_disconnect; } ;


 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ffs_data*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ffs_data*) ;
 int FUNC_5 (struct ffs_data*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct ffs_data *VAR_3)
{
 FUNC_0();

 if (FUNC_2(&VAR_3->opened)) {
  if (VAR_3->no_disconnect) {
   VAR_3->state = VAR_1;
   if (VAR_3->epfiles) {
    FUNC_6(VAR_3->epfiles,
         VAR_3->eps_count);
    VAR_3->epfiles = ((void*)0);
   }
   if (VAR_3->setup_state == VAR_2)
    FUNC_1(VAR_3);
  } else {
   VAR_3->state = VAR_0;
   FUNC_5(VAR_3);
  }
 }
 if (FUNC_3(&VAR_3->opened) < 0) {
  VAR_3->state = VAR_0;
  FUNC_5(VAR_3);
 }

 FUNC_4(VAR_3);
}
