
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_dat_entry {int de_blocknr; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ sector_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 struct buffer_head* FUNC_8 (struct inode*,struct buffer_head*) ;
 struct nilfs_dat_entry* FUNC_9 (struct inode*,int ,struct buffer_head*,void*) ;
 int FUNC_10 (struct inode*,int ,int ,struct buffer_head**) ;

int FUNC_11(struct inode *VAR_1, __u64 VAR_2, sector_t *VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5;
 struct nilfs_dat_entry *VAR_6;
 sector_t VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_10(VAR_1, VAR_2, 0, &VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 if (!FUNC_7() && FUNC_2(VAR_4)) {
  VAR_5 = FUNC_8(VAR_1, VAR_4);
  if (VAR_5) {
   FUNC_0(!FUNC_3(VAR_5));
   FUNC_1(VAR_4);
   VAR_4 = VAR_5;
  }
 }

 VAR_8 = FUNC_4(VAR_4->b_page);
 VAR_6 = FUNC_9(VAR_1, VAR_2, VAR_4, VAR_8);
 VAR_7 = FUNC_6(VAR_6->de_blocknr);
 if (VAR_7 == 0) {
  VAR_9 = -VAR_0;
  goto out;
 }
 *VAR_3 = VAR_7;

 out:
 FUNC_5(VAR_8);
 FUNC_1(VAR_4);
 return VAR_9;
}
