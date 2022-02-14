
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffs_epfile {int * dentry; int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ffs_epfile*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ffs_epfile *VAR_0, unsigned VAR_1)
{
 struct ffs_epfile *VAR_2 = VAR_0;

 FUNC_1();

 for (; VAR_1; --VAR_1, ++VAR_2) {
  FUNC_0(FUNC_5(&VAR_2->mutex));
  if (VAR_2->dentry) {
   FUNC_2(VAR_2->dentry);
   FUNC_3(VAR_2->dentry);
   VAR_2->dentry = ((void*)0);
  }
 }

 FUNC_4(VAR_0);
}
