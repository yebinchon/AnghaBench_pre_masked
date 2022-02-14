
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_inode {scalar_t__ i_flags; } ;
struct inode {int dummy; } ;
typedef int ino_t ;
struct TYPE_5__ {int b_page; } ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*) ;
 struct nilfs_inode* FUNC_5 (struct inode*,int ,TYPE_1__*,void*) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_7 (struct inode*,int ,int ,TYPE_1__**) ;
 int FUNC_8 (struct inode*,struct nilfs_palloc_req*) ;

int FUNC_9(struct inode *VAR_0, ino_t VAR_1)
{
 struct nilfs_palloc_req VAR_2 = {
  .pr_entry_nr = VAR_1, .pr_entry_bh = ((void*)0)
 };
 struct nilfs_inode *VAR_3;
 void *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_0, &VAR_2);
 if (!VAR_5) {
  VAR_5 = FUNC_7(VAR_0, VAR_2.pr_entry_nr, 0,
         &VAR_2.pr_entry_bh);
  if (VAR_5 < 0)
   FUNC_4(VAR_0, &VAR_2);
 }
 if (VAR_5 < 0) {
  FUNC_0(VAR_2.pr_entry_bh);
  return VAR_5;
 }

 VAR_4 = FUNC_1(VAR_2.pr_entry_bh->b_page);
 VAR_3 = FUNC_5(VAR_0, VAR_2.pr_entry_nr,
       VAR_2.pr_entry_bh, VAR_4);
 VAR_3->i_flags = 0;
 FUNC_2(VAR_4);

 FUNC_3(VAR_2.pr_entry_bh);
 FUNC_0(VAR_2.pr_entry_bh);

 FUNC_6(VAR_0, &VAR_2);

 return 0;
}
