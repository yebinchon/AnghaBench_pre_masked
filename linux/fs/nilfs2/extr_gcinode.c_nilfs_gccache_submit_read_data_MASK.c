
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_dat; } ;
struct inode {TYPE_1__* i_sb; int i_mapping; } ;
struct buffer_head {int b_page; scalar_t__ b_blocknr; int b_end_io; int b_bdev; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int s_bdev; struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int VAR_2 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*) ;
 struct buffer_head* FUNC_6 (struct inode*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int ,struct buffer_head*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct inode *VAR_3, sector_t VAR_4,
       sector_t VAR_5, __u64 VAR_6,
       struct buffer_head **VAR_7)
{
 struct buffer_head *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_3, VAR_3->i_mapping, VAR_4, 0);
 if (FUNC_10(!VAR_8))
  return -VAR_0;

 if (FUNC_2(VAR_8))
  goto out;

 if (VAR_5 == 0) {
  struct the_nilfs *VAR_10 = VAR_3->i_sb->s_fs_info;

  VAR_9 = FUNC_5(VAR_10->ns_dat, VAR_6, &VAR_5);
  if (FUNC_10(VAR_9)) {
   FUNC_0(VAR_8);
   goto failed;
  }
 }

 FUNC_4(VAR_8);
 if (FUNC_2(VAR_8)) {
  FUNC_11(VAR_8);
  goto out;
 }

 if (!FUNC_1(VAR_8)) {
  VAR_8->b_bdev = VAR_3->i_sb->s_bdev;
  FUNC_8(VAR_8);
 }
 VAR_8->b_blocknr = VAR_5;
 VAR_8->b_end_io = VAR_2;
 FUNC_3(VAR_8);
 FUNC_9(VAR_1, 0, VAR_8);
 if (VAR_6)
  VAR_8->b_blocknr = VAR_6;
 out:
 VAR_9 = 0;
 *VAR_7 = VAR_8;

 failed:
 FUNC_12(VAR_8->b_page);
 FUNC_7(VAR_8->b_page);
 return VAR_9;
}
