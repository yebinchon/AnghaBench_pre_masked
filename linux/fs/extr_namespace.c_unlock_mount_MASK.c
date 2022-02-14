
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountpoint {struct dentry* m_dentry; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mountpoint*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mountpoint *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->m_dentry;

 FUNC_3(&VAR_0);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_0);

 FUNC_1();
 FUNC_0(VAR_2->d_inode);
}
