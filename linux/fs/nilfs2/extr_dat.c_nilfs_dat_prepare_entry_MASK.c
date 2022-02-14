
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {int pr_entry_bh; int pr_entry_nr; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0,
       struct nilfs_palloc_req *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->pr_entry_nr,
         VAR_2, &VAR_1->pr_entry_bh);
}
