
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_wait; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_3)
{
 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_3->d_wait, &VAR_2);
  do {
   FUNC_4(VAR_0);
   FUNC_6(&VAR_3->d_lock);
   FUNC_3();
   FUNC_5(&VAR_3->d_lock);
  } while (FUNC_2(VAR_3));
 }
}
