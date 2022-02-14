
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int qid; } ;
struct p9_wstat {int qid; } ;
struct inode {int dummy; } ;


 struct v9fs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct v9fs_inode *VAR_2 = FUNC_0(VAR_0);
 struct p9_wstat *VAR_3 = (struct p9_wstat *)VAR_1;

 FUNC_1(&VAR_2->qid, &VAR_3->qid, sizeof(VAR_3->qid));
 return 0;
}
