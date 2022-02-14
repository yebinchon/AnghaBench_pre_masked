
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_3__* s_op; } ;
struct page {TYPE_2__* mapping; } ;
typedef int gfp_t ;
struct TYPE_5__ {struct super_block* bd_super; } ;
struct TYPE_8__ {TYPE_1__ bdev; } ;
struct TYPE_7__ {int (* bdev_try_to_free_page ) (struct super_block*,struct page*,int ) ;} ;
struct TYPE_6__ {int host; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,struct page*,int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_0, gfp_t VAR_1)
{
 struct super_block *VAR_2 = FUNC_0(VAR_0->mapping->host)->bdev.bd_super;

 if (VAR_2 && VAR_2->s_op->bdev_try_to_free_page)
  return VAR_2->s_op->bdev_try_to_free_page(VAR_2, VAR_0, VAR_1);

 return FUNC_2(VAR_0);
}
