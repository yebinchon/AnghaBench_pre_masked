
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {struct buffer_head* pr_entry_bh; scalar_t__ pr_entry_nr; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_5 (struct inode*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*) ;

int FUNC_7(struct inode *VAR_0, ino_t *VAR_1,
        struct buffer_head **VAR_2)
{
 struct nilfs_palloc_req VAR_3;
 int VAR_4;

 VAR_3.pr_entry_nr = 0;



 VAR_3.pr_entry_bh = ((void*)0);

 VAR_4 = FUNC_6(VAR_0, &VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_5(VAR_0, VAR_3.pr_entry_nr, 1,
         &VAR_3.pr_entry_bh);
  if (VAR_4 < 0)
   FUNC_3(VAR_0, &VAR_3);
 }
 if (VAR_4 < 0) {
  FUNC_0(VAR_3.pr_entry_bh);
  return VAR_4;
 }
 FUNC_4(VAR_0, &VAR_3);
 FUNC_1(VAR_3.pr_entry_bh);
 FUNC_2(VAR_0);
 *VAR_1 = (ino_t)VAR_3.pr_entry_nr;
 *VAR_2 = VAR_3.pr_entry_bh;
 return 0;
}
