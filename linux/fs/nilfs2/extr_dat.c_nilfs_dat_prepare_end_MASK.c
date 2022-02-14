
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {int de_blocknr; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int b_page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_5 (struct inode*,struct nilfs_palloc_req*,int ) ;
 struct nilfs_dat_entry* FUNC_6 (struct inode*,int ,TYPE_1__*,void*) ;
 int FUNC_7 (struct inode*,struct nilfs_palloc_req*) ;

int FUNC_8(struct inode *VAR_1, struct nilfs_palloc_req *VAR_2)
{
 struct nilfs_dat_entry *VAR_3;
 sector_t VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2, 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_6 == -VAR_0);
  return VAR_6;
 }

 VAR_5 = FUNC_1(VAR_2->pr_entry_bh->b_page);
 VAR_3 = FUNC_6(VAR_1, VAR_2->pr_entry_nr,
          VAR_2->pr_entry_bh, VAR_5);
 VAR_4 = FUNC_3(VAR_3->de_blocknr);
 FUNC_2(VAR_5);

 if (VAR_4 == 0) {
  VAR_6 = FUNC_7(VAR_1, VAR_2);
  if (VAR_6 < 0) {
   FUNC_4(VAR_1, VAR_2);
   return VAR_6;
  }
 }

 return 0;
}
