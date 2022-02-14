
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct cifsInodeInfo {scalar_t__ time; } ;
typedef int loff_t ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0, loff_t VAR_1)
{
 struct cifsInodeInfo *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->i_lock);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->i_lock);


 VAR_2->time = 0;
 FUNC_4(VAR_0, VAR_1);
}
