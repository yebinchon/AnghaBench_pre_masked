
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xenix_super_block {int dummy; } ;
struct sysv_sb_info {struct buffer_head* s_bh2; struct buffer_head* s_bh1; int s_lock; scalar_t__ s_block_base; struct super_block* s_sb; } ;
struct sysv_inode {int dummy; } ;
struct sysv4_super_block {int dummy; } ;
struct sysv2_super_block {int dummy; } ;
struct super_block {int s_id; int s_time_max; scalar_t__ s_time_min; struct sysv_sb_info* s_fs_info; } ;
struct coh_super_block {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_3__ {unsigned long block; int (* test ) (int ,struct buffer_head*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct super_block*,int,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct sysv_sb_info*) ;
 struct sysv_sb_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 struct buffer_head* FUNC_9 (struct super_block*,unsigned long) ;
 int FUNC_10 (struct super_block*,int) ;
 int FUNC_11 (int ,struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_6, void *VAR_7, int VAR_8)
{
 struct buffer_head *VAR_9, *VAR_10 = ((void*)0);
 struct sysv_sb_info *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0, VAR_14;

 FUNC_1(1024 != sizeof (struct xenix_super_block));
 FUNC_1(512 != sizeof (struct sysv4_super_block));
 FUNC_1(512 != sizeof (struct sysv2_super_block));
 FUNC_1(500 != sizeof (struct coh_super_block));
 FUNC_1(64 != sizeof (struct sysv_inode));

 VAR_11 = FUNC_6(sizeof(struct sysv_sb_info), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->s_sb = VAR_6;
 VAR_11->s_block_base = 0;
 FUNC_7(&VAR_11->s_lock);
 VAR_6->s_fs_info = VAR_11;
 VAR_6->s_time_min = 0;
 VAR_6->s_time_max = VAR_4;
 FUNC_10(VAR_6, VAR_0);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5) && !VAR_13; VAR_14++) {
  FUNC_3(VAR_10);
  VAR_10 = FUNC_9(VAR_6, VAR_5[VAR_14].block);
  if (!VAR_10)
   continue;
  VAR_13 = VAR_5[VAR_14].test(FUNC_2(VAR_6), VAR_10);
 }

 if (!VAR_13)
  goto Eunknown;

 switch (VAR_13) {
  case 1:
   VAR_12 = VAR_10->b_blocknr << 1;
   FUNC_3(VAR_10);
   FUNC_10(VAR_6, 512);
   VAR_9 = FUNC_9(VAR_6, VAR_12);
   VAR_10 = FUNC_9(VAR_6, VAR_12 + 1);
   break;
  case 2:
   VAR_9 = VAR_10;
   break;
  case 3:
   VAR_12 = VAR_10->b_blocknr >> 1;
   FUNC_3(VAR_10);
   FUNC_10(VAR_6, 2048);
   VAR_9 = VAR_10 = FUNC_9(VAR_6, VAR_12);
   break;
  default:
   goto Ebadsize;
 }

 if (VAR_10 && VAR_9) {
  VAR_11->s_bh1 = VAR_9;
  VAR_11->s_bh2 = VAR_10;
  if (FUNC_4(VAR_6, VAR_8, VAR_13))
   return 0;
 }

 FUNC_3(VAR_9);
 FUNC_3(VAR_10);
 FUNC_10(VAR_6, VAR_0);
 FUNC_8("oldfs: cannot read superblock\n");
failed:
 FUNC_5(VAR_11);
 return -VAR_1;

Eunknown:
 FUNC_3(VAR_10);
 if (!VAR_8)
  FUNC_8("VFS: unable to find oldfs superblock on device %s\n",
   VAR_6->s_id);
 goto failed;
Ebadsize:
 FUNC_3(VAR_10);
 if (!VAR_8)
  FUNC_8("VFS: oldfs: unsupported block size (%dKb)\n",
   1<<(VAR_13-2));
 goto failed;
}
