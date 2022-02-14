
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {void* pr_entry_nr; } ;
struct nilfs_bmap {scalar_t__ b_ptr_type; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef void* __u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct nilfs_bmap*,struct buffer_head*) ;
 struct inode* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*,struct nilfs_palloc_req*,int) ;
 int FUNC_5 (struct inode*,void*) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*,struct nilfs_palloc_req*) ;
 void* FUNC_7 (struct nilfs_bmap*,void*) ;
 int FUNC_8 (struct nilfs_bmap*,void*,void*) ;
 int FUNC_9 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_10(struct nilfs_bmap *VAR_1,
      struct buffer_head *VAR_2)
{
 struct nilfs_palloc_req VAR_3, VAR_4;
 struct inode *VAR_5;
 __u64 VAR_6;
 __u64 VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 VAR_7 = FUNC_7(VAR_1, VAR_6);
 if (!FUNC_1(VAR_2)) {
  VAR_3.pr_entry_nr = VAR_7;
  VAR_4.pr_entry_nr = VAR_7;
  VAR_8 = FUNC_6(VAR_5, &VAR_3, &VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
  FUNC_4(VAR_5, &VAR_3, &VAR_4,
     VAR_1->b_ptr_type == VAR_0);
  FUNC_9(VAR_2);
  FUNC_8(VAR_1, VAR_6, VAR_4.pr_entry_nr);
 } else
  VAR_8 = FUNC_5(VAR_5, VAR_7);

 return VAR_8;
}
