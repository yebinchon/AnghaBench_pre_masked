
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_inode_info {scalar_t__ i_iget5_offset; int i_iget5_block; } ;
struct inode {int i_generation; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 struct iso_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_1,
         __u32 *VAR_2,
         int *VAR_3,
         struct inode *VAR_4)
{
 struct iso_inode_info * VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = *VAR_3;
 int VAR_7 = 1;
 __u16 *VAR_8 = (__u16*)VAR_2;







 if (VAR_4 && (VAR_6 < 5)) {
  *VAR_3 = 5;
  return VAR_0;
 } else if (VAR_6 < 3) {
  *VAR_3 = 3;
  return VAR_0;
 }

 VAR_6 = 3;
 VAR_2[0] = VAR_5->i_iget5_block;
  VAR_8[2] = (__u16)VAR_5->i_iget5_offset;
 VAR_8[3] = 0;
 VAR_2[2] = VAR_1->i_generation;
 if (VAR_4) {
  struct iso_inode_info *VAR_9;
  VAR_9 = FUNC_0(VAR_4);
  VAR_2[3] = VAR_9->i_iget5_block;
  VAR_8[3] = (__u16)VAR_9->i_iget5_offset;
  VAR_2[4] = VAR_4->i_generation;
  VAR_6 = 5;
  VAR_7 = 2;
 }
 *VAR_3 = VAR_6;
 return VAR_7;
}
