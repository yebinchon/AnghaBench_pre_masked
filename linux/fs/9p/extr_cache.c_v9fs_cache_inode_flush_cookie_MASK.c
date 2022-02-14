
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int * fscache; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct v9fs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char*,struct inode*,int *) ;

void FUNC_3(struct inode *VAR_1)
{
 struct v9fs_inode *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->fscache)
  return;
 FUNC_2(VAR_0, "inode %p flush cookie %p\n",
   VAR_1, VAR_2->fscache);

 FUNC_1(VAR_2->fscache, ((void*)0), 1);
 VAR_2->fscache = ((void*)0);
}
