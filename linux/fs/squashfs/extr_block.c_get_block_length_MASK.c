
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct squashfs_sb_info* s_fs_info; } ;
struct squashfs_sb_info {int devblksize; } ;
struct buffer_head {scalar_t__* b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static struct buffer_head *FUNC_2(struct super_block *VAR_0,
   u64 *VAR_1, int *VAR_2, int *VAR_3)
{
 struct squashfs_sb_info *VAR_4 = VAR_0->s_fs_info;
 struct buffer_head *VAR_5;

 VAR_5 = FUNC_1(VAR_0, *VAR_1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_4->devblksize - *VAR_2 == 1) {
  *VAR_3 = (unsigned char) VAR_5->b_data[*VAR_2];
  FUNC_0(VAR_5);
  VAR_5 = FUNC_1(VAR_0, ++(*VAR_1));
  if (VAR_5 == ((void*)0))
   return ((void*)0);
  *VAR_3 |= (unsigned char) VAR_5->b_data[0] << 8;
  *VAR_2 = 1;
 } else {
  *VAR_3 = (unsigned char) VAR_5->b_data[*VAR_2] |
   (unsigned char) VAR_5->b_data[*VAR_2 + 1] << 8;
  *VAR_2 += 2;

  if (*VAR_2 == VAR_4->devblksize) {
   FUNC_0(VAR_5);
   VAR_5 = FUNC_1(VAR_0, ++(*VAR_1));
   if (VAR_5 == ((void*)0))
    return ((void*)0);
   *VAR_2 = 0;
  }
 }

 return VAR_5;
}
