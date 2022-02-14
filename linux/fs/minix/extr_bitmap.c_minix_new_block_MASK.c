
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minix_sb_info {int s_zmap_blocks; int s_firstdatazone; int s_nzones; struct buffer_head** s_zmap; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_data; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,int) ;
 struct minix_sb_info* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode * VAR_1)
{
 struct minix_sb_info *VAR_2 = FUNC_2(VAR_1->i_sb);
 int VAR_3 = 8 * VAR_1->i_sb->s_blocksize;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->s_zmap_blocks; VAR_4++) {
  struct buffer_head *VAR_5 = VAR_2->s_zmap[VAR_4];
  int VAR_6;

  FUNC_4(&VAR_0);
  VAR_6 = FUNC_1(VAR_5->b_data, VAR_3);
  if (VAR_6 < VAR_3) {
   FUNC_3(VAR_6, VAR_5->b_data);
   FUNC_5(&VAR_0);
   FUNC_0(VAR_5);
   VAR_6 += VAR_4 * VAR_3 + VAR_2->s_firstdatazone-1;
   if (VAR_6 < VAR_2->s_firstdatazone || VAR_6 >= VAR_2->s_nzones)
    break;
   return VAR_6;
  }
  FUNC_5(&VAR_0);
 }
 return 0;
}
