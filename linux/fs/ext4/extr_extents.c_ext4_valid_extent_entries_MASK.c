
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_super_block {int s_last_error_block; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {scalar_t__ eh_entries; } ;
struct ext4_extent {int ee_block; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {struct ext4_super_block* s_es; } ;


 TYPE_1__* FUNC_0 (int ) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 struct ext4_extent_idx* FUNC_2 (struct ext4_extent_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (struct inode*,struct ext4_extent*) ;
 int FUNC_7 (struct inode*,struct ext4_extent_idx*) ;
 unsigned short FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_0,
    struct ext4_extent_header *VAR_1,
    int VAR_2)
{
 unsigned short VAR_3;
 if (VAR_1->eh_entries == 0)
  return 1;

 VAR_3 = FUNC_8(VAR_1->eh_entries);

 if (VAR_2 == 0) {

  struct ext4_extent *VAR_4 = FUNC_1(VAR_1);
  struct ext4_super_block *VAR_5 = FUNC_0(VAR_0->i_sb)->s_es;
  ext4_fsblk_t VAR_6 = 0;
  ext4_lblk_t VAR_7 = 0;
  ext4_lblk_t VAR_8 = 0;
  int VAR_9 = 0;
  while (VAR_3) {
   if (!FUNC_6(VAR_0, VAR_4))
    return 0;


   VAR_7 = FUNC_9(VAR_4->ee_block);
   VAR_9 = FUNC_4(VAR_4);
   if ((VAR_7 <= VAR_8) && VAR_8) {
    VAR_6 = FUNC_5(VAR_4);
    VAR_5->s_last_error_block = FUNC_3(VAR_6);
    return 0;
   }
   VAR_4++;
   VAR_3--;
   VAR_8 = VAR_7 + VAR_9 - 1;
  }
 } else {
  struct ext4_extent_idx *VAR_10 = FUNC_2(VAR_1);
  while (VAR_3) {
   if (!FUNC_7(VAR_0, VAR_10))
    return 0;
   VAR_10++;
   VAR_3--;
  }
 }
 return 1;
}
