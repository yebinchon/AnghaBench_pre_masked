
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct omfs_sb_info {unsigned int s_imap_size; int * s_imap; } ;


 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int) ;

unsigned long FUNC_2(struct super_block *VAR_0)
{
 unsigned int VAR_1;
 unsigned long VAR_2 = 0;
 struct omfs_sb_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_0->s_blocksize * 8;

 for (VAR_1 = 0; VAR_1 < VAR_3->s_imap_size; VAR_1++)
  VAR_2 += VAR_4 - FUNC_1(VAR_3->s_imap[VAR_1], VAR_4);

 return VAR_2;
}
