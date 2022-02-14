
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int s_blocksize; } ;
struct minix_sb_info {int s_imap_blocks; unsigned long s_ninodes; struct buffer_head** s_imap; } ;
struct inode {unsigned long i_ino; scalar_t__ i_blocks; int i_ctime; int i_atime; int i_mtime; struct super_block* i_sb; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {int u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct inode const*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int ,int) ;
 unsigned long FUNC_7 (int ,int) ;
 TYPE_1__* FUNC_8 (struct inode*) ;
 struct minix_sb_info* FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (unsigned long,int ) ;
 struct inode* FUNC_11 (struct super_block*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

struct inode *FUNC_15(const struct inode *VAR_3, umode_t VAR_4, int *VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct minix_sb_info *VAR_7 = FUNC_9(VAR_6);
 struct inode *VAR_8 = FUNC_11(VAR_6);
 struct buffer_head * VAR_9;
 int VAR_10 = 8 * VAR_6->s_blocksize;
 unsigned long VAR_11;
 int VAR_12;

 if (!VAR_8) {
  *VAR_5 = -VAR_0;
  return ((void*)0);
 }
 VAR_11 = VAR_10;
 VAR_9 = ((void*)0);
 *VAR_5 = -VAR_1;
 FUNC_13(&VAR_2);
 for (VAR_12 = 0; VAR_12 < VAR_7->s_imap_blocks; VAR_12++) {
  VAR_9 = VAR_7->s_imap[VAR_12];
  VAR_11 = FUNC_7(VAR_9->b_data, VAR_10);
  if (VAR_11 < VAR_10)
   break;
 }
 if (!VAR_9 || VAR_11 >= VAR_10) {
  FUNC_14(&VAR_2);
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 if (FUNC_10(VAR_11, VAR_9->b_data)) {
  FUNC_14(&VAR_2);
  FUNC_12("minix_new_inode: bit already set\n");
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 FUNC_14(&VAR_2);
 FUNC_4(VAR_9);
 VAR_11 += VAR_12 * VAR_10;
 if (!VAR_11 || VAR_11 > VAR_7->s_ninodes) {
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 FUNC_1(VAR_8, VAR_3, VAR_4);
 VAR_8->i_ino = VAR_11;
 VAR_8->i_mtime = VAR_8->i_atime = VAR_8->i_ctime = FUNC_0(VAR_8);
 VAR_8->i_blocks = 0;
 FUNC_6(&FUNC_8(VAR_8)->u, 0, sizeof(FUNC_8(VAR_8)->u));
 FUNC_2(VAR_8);
 FUNC_5(VAR_8);

 *VAR_5 = 0;
 return VAR_8;
}
