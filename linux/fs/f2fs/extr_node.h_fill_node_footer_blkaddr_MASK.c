
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int next_blkaddr; int cp_ver; } ;
struct f2fs_node {TYPE_1__ footer; } ;
struct f2fs_checkpoint {int dummy; } ;
typedef int block_t ;
typedef int __u64 ;


 int VAR_0 ;
 struct f2fs_checkpoint* FUNC_0 (int ) ;
 struct f2fs_node* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct f2fs_checkpoint*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct f2fs_checkpoint*) ;
 int FUNC_7 (struct f2fs_checkpoint*) ;

__attribute__((used)) static inline void FUNC_8(struct page *VAR_1, block_t VAR_2)
{
 struct f2fs_checkpoint *VAR_3 = FUNC_0(FUNC_2(VAR_1));
 struct f2fs_node *VAR_4 = FUNC_1(VAR_1);
 __u64 VAR_5 = FUNC_7(VAR_3);

 if (FUNC_3(VAR_3, VAR_0))
  VAR_5 |= (FUNC_6(VAR_3) << 32);

 VAR_4->footer.cp_ver = FUNC_5(VAR_5);
 VAR_4->footer.next_blkaddr = FUNC_4(VAR_2);
}
