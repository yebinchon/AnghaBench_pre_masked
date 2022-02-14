
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; int d_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_1)
{
 FUNC_2(VAR_1);
 while (VAR_1->d_flags & VAR_0) {
  struct dentry *VAR_2 = FUNC_3(VAR_1);

  FUNC_1(FUNC_0(VAR_1));

  FUNC_5(&VAR_1->d_lock);
  VAR_1->d_flags &= ~VAR_0;
  FUNC_6(&VAR_1->d_lock);

  FUNC_4(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_4(VAR_1);
}
