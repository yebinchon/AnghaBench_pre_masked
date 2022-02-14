
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_bdev; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int erofs_blk_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct address_space* const,int ) ;
 struct page* FUNC_3 (struct address_space* const,int ,int ) ;

struct page *FUNC_4(struct super_block *VAR_1, erofs_blk_t VAR_2)
{
 struct address_space *const VAR_3 = VAR_1->s_bdev->bd_inode->i_mapping;
 struct page *VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_2,
       FUNC_2(VAR_3, ~VAR_0));

 if (!FUNC_0(VAR_4))
  FUNC_1(VAR_4);
 return VAR_4;
}
