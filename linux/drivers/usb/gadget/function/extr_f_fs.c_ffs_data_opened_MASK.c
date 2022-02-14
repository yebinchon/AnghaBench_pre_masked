
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_data {scalar_t__ state; int opened; int ref; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct ffs_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ffs_data *VAR_2)
{
 FUNC_0();

 FUNC_3(&VAR_2->ref);
 if (FUNC_1(1, &VAR_2->opened) == 1 &&
   VAR_2->state == VAR_1) {
  VAR_2->state = VAR_0;
  FUNC_2(VAR_2);
 }
}
