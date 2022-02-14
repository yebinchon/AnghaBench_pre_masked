
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct the_nilfs {scalar_t__ ns_prot_seq; scalar_t__ ns_sbwtime; scalar_t__ ns_sbwcount; TYPE_2__* ns_bdev; struct buffer_head** ns_sbh; struct nilfs_super_block** ns_sbp; } ;
struct super_block {int dummy; } ;
struct nilfs_super_block {int s_last_seq; int s_wtime; int s_last_cno; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {int i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,int ,char*,...) ;
 struct nilfs_super_block* FUNC_4 (struct super_block*,int ,int,struct buffer_head**) ;
 int FUNC_5 (struct the_nilfs*) ;
 scalar_t__ FUNC_6 (struct nilfs_super_block*,int ) ;
 int FUNC_7 (struct the_nilfs*) ;
 int FUNC_8 (struct nilfs_super_block*) ;

__attribute__((used)) static int FUNC_9(struct the_nilfs *VAR_5,
      struct super_block *VAR_6, int VAR_7,
      struct nilfs_super_block **VAR_8)
{
 struct nilfs_super_block **VAR_9 = VAR_5->ns_sbp;
 struct buffer_head **VAR_10 = VAR_5->ns_sbh;
 u64 VAR_11 = FUNC_0(VAR_5->ns_bdev->bd_inode->i_size);
 int VAR_12[2], VAR_13 = 0;

 VAR_9[0] = FUNC_4(VAR_6, VAR_4, VAR_7,
     &VAR_10[0]);
 VAR_9[1] = FUNC_4(VAR_6, VAR_11, VAR_7, &VAR_10[1]);

 if (!VAR_9[0]) {
  if (!VAR_9[1]) {
   FUNC_3(VAR_6, VAR_2, "unable to read superblock");
   return -VAR_1;
  }
  FUNC_3(VAR_6, VAR_3,
     "unable to read primary superblock (blocksize = %d)",
     VAR_7);
 } else if (!VAR_9[1]) {
  FUNC_3(VAR_6, VAR_3,
     "unable to read secondary superblock (blocksize = %d)",
     VAR_7);
 }





 VAR_12[0] = FUNC_8(VAR_9[0]);
 VAR_12[1] = FUNC_8(VAR_9[1]);
 VAR_13 = VAR_12[1] && (!VAR_12[0] ||
      FUNC_2(VAR_9[1]->s_last_cno) >
      FUNC_2(VAR_9[0]->s_last_cno));

 if (VAR_12[VAR_13] && FUNC_6(VAR_9[VAR_13], VAR_11)) {
  FUNC_1(VAR_10[1]);
  VAR_10[1] = ((void*)0);
  VAR_9[1] = ((void*)0);
  VAR_12[1] = 0;
  VAR_13 = 0;
 }
 if (!VAR_12[VAR_13]) {
  FUNC_5(VAR_5);
  FUNC_3(VAR_6, VAR_2, "couldn't find nilfs on the device");
  return -VAR_0;
 }

 if (!VAR_12[!VAR_13])
  FUNC_3(VAR_6, VAR_3,
     "broken superblock, retrying with spare superblock (blocksize = %d)",
     VAR_7);
 if (VAR_13)
  FUNC_7(VAR_5);

 VAR_5->ns_sbwcount = 0;
 VAR_5->ns_sbwtime = FUNC_2(VAR_9[0]->s_wtime);
 VAR_5->ns_prot_seq = FUNC_2(VAR_9[VAR_12[1] & !VAR_13]->s_last_seq);
 *VAR_8 = VAR_9[0];
 return 0;
}
