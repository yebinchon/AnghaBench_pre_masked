
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {unsigned long i_blocks; int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {unsigned long si_blocks; unsigned long si_lf_eblk; int bfs_lock; int si_freeb; } ;
struct bfs_inode_info {unsigned long i_sblock; unsigned long i_eblock; } ;
typedef unsigned long sector_t ;


 struct bfs_inode_info* FUNC_0 (struct inode*) ;
 struct bfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_2 (struct super_block*,long,unsigned long,unsigned long) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct buffer_head*,struct super_block*,unsigned long) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, sector_t VAR_2,
   struct buffer_head *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct super_block *VAR_7 = VAR_1->i_sb;
 struct bfs_sb_info *VAR_8 = FUNC_1(VAR_7);
 struct bfs_inode_info *VAR_9 = FUNC_0(VAR_1);

 VAR_5 = VAR_9->i_sblock + VAR_2;
 if (!VAR_4) {
  if (VAR_5 <= VAR_9->i_eblock) {
   FUNC_3("c=%d, b=%08lx, phys=%09lx (granted)\n",
                                VAR_4, (unsigned long)VAR_2, VAR_5);
   FUNC_4(VAR_3, VAR_7, VAR_5);
  }
  return 0;
 }





 if (VAR_9->i_sblock && (VAR_5 <= VAR_9->i_eblock)) {
  FUNC_3("c=%d, b=%08lx, phys=%08lx (interim block granted)\n",
    VAR_4, (unsigned long)VAR_2, VAR_5);
  FUNC_4(VAR_3, VAR_7, VAR_5);
  return 0;
 }


 if (VAR_5 >= VAR_8->si_blocks)
  return -VAR_0;


 FUNC_6(&VAR_8->bfs_lock);






 if (VAR_9->i_eblock == VAR_8->si_lf_eblk) {
  FUNC_3("c=%d, b=%08lx, phys=%08lx (simple extension)\n",
    VAR_4, (unsigned long)VAR_2, VAR_5);
  FUNC_4(VAR_3, VAR_7, VAR_5);
  VAR_8->si_freeb -= VAR_5 - VAR_9->i_eblock;
  VAR_8->si_lf_eblk = VAR_9->i_eblock = VAR_5;
  FUNC_5(VAR_1);
  VAR_6 = 0;
  goto out;
 }


 VAR_5 = VAR_8->si_lf_eblk + 1;
 if (VAR_5 + VAR_2 >= VAR_8->si_blocks) {
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_9->i_sblock) {
  VAR_6 = FUNC_2(VAR_1->i_sb, VAR_9->i_sblock,
      VAR_9->i_eblock, VAR_5);
  if (VAR_6) {
   FUNC_3("failed to move ino=%08lx -> fs corruption\n",
        VAR_1->i_ino);
   goto out;
  }
 } else
  VAR_6 = 0;

 FUNC_3("c=%d, b=%08lx, phys=%08lx (moved)\n",
                VAR_4, (unsigned long)VAR_2, VAR_5);
 VAR_9->i_sblock = VAR_5;
 VAR_5 += VAR_2;
 VAR_8->si_lf_eblk = VAR_9->i_eblock = VAR_5;





 VAR_8->si_freeb -= VAR_9->i_eblock - VAR_9->i_sblock + 1 - VAR_1->i_blocks;
 FUNC_5(VAR_1);
 FUNC_4(VAR_3, VAR_7, VAR_5);
out:
 FUNC_7(&VAR_8->bfs_lock);
 return VAR_6;
}
