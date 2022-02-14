
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct inode {struct super_block* i_sb; } ;
struct fstrim_range {int start; int len; int minlen; } ;
struct bmap {int db_agsize; int db_mapsize; } ;
struct TYPE_3__ {struct bmap* bmap; struct inode* ipbmap; } ;


 int FUNC_0 (int,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct inode*,int,int) ;

int FUNC_3(struct inode *VAR_1, struct fstrim_range *VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1->i_sb)->ipbmap;
 struct bmap *VAR_4 = FUNC_1(VAR_1->i_sb)->bmap;
 struct super_block *VAR_5 = VAR_3->i_sb;
 int VAR_6, VAR_7;
 u64 VAR_8, VAR_9, VAR_10;
 u64 VAR_11 = 0;







 VAR_8 = VAR_2->start >> VAR_5->s_blocksize_bits;
 VAR_9 = VAR_8 + (VAR_2->len >> VAR_5->s_blocksize_bits) - 1;
 VAR_10 = VAR_2->minlen >> VAR_5->s_blocksize_bits;
 if (VAR_10 == 0)
  VAR_10 = 1;

 if (VAR_10 > VAR_4->db_agsize ||
     VAR_8 >= VAR_4->db_mapsize ||
     VAR_2->len < VAR_5->s_blocksize)
  return -VAR_0;

 if (VAR_9 >= VAR_4->db_mapsize)
  VAR_9 = VAR_4->db_mapsize - 1;




 VAR_6 = FUNC_0(VAR_8, FUNC_1(VAR_1->i_sb));
 VAR_7 = FUNC_0(VAR_9, FUNC_1(VAR_1->i_sb));
 while (VAR_6 <= VAR_7) {
  VAR_11 += FUNC_2(VAR_1, VAR_6, VAR_10);
  VAR_6++;
 }
 VAR_2->len = VAR_11 << VAR_5->s_blocksize_bits;

 return 0;
}
