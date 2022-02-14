
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode {int i_inode_checksum; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {struct f2fs_inode i; } ;


 TYPE_1__* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_0 ;
 int FUNC_3 (struct f2fs_sb_info*,struct page*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_5 (struct f2fs_sb_info*,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

bool FUNC_10(struct f2fs_sb_info *VAR_1, struct page *VAR_2)
{
 struct f2fs_inode *VAR_3;
 __u32 VAR_4, VAR_5;

 if (FUNC_9(FUNC_7(VAR_1, VAR_0)))
  return 1;




 if (!FUNC_3(VAR_1, VAR_2) ||
   FUNC_1(VAR_2) || FUNC_2(VAR_2))

  return 1;

 VAR_3 = &FUNC_0(VAR_2)->i;
 VAR_4 = FUNC_8(VAR_3->i_inode_checksum);
 VAR_5 = FUNC_4(VAR_1, VAR_2);

 if (VAR_4 != VAR_5)
  FUNC_5(VAR_1, "checksum invalid, nid = %lu, ino_of_node = %x, %x vs. %x",
     VAR_2->index, FUNC_6(VAR_2), VAR_4, VAR_5);

 return VAR_4 == VAR_5;
}
