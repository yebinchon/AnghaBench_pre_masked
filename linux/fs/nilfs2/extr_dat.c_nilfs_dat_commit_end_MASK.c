
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {int de_blocknr; int de_end; int de_start; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int b_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 struct nilfs_dat_entry* FUNC_8 (struct inode*,int ,TYPE_1__*,void*) ;

void FUNC_9(struct inode *VAR_0, struct nilfs_palloc_req *VAR_1,
     int VAR_2)
{
 struct nilfs_dat_entry *VAR_3;
 __u64 VAR_4, VAR_5;
 sector_t VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_2(VAR_1->pr_entry_bh->b_page);
 VAR_3 = FUNC_8(VAR_0, VAR_1->pr_entry_nr,
          VAR_1->pr_entry_bh, VAR_7);
 VAR_5 = VAR_4 = FUNC_4(VAR_3->de_start);
 if (!VAR_2) {
  VAR_5 = FUNC_7(VAR_0);
  FUNC_0(VAR_4 > VAR_5);
 }
 VAR_3->de_end = FUNC_1(VAR_5);
 VAR_6 = FUNC_4(VAR_3->de_blocknr);
 FUNC_3(VAR_7);

 if (VAR_6 == 0)
  FUNC_6(VAR_0, VAR_1);
 else
  FUNC_5(VAR_0, VAR_1);
}
