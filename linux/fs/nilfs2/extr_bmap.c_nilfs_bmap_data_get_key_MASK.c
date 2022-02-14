
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {TYPE_1__* b_inode; } ;
typedef struct buffer_head {struct buffer_head const* b_this_page; int b_page; } const buffer_head ;
typedef int __u64 ;
struct TYPE_2__ {int i_blkbits; } ;


 int VAR_0 ;
 struct buffer_head const* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__u64 FUNC_2(const struct nilfs_bmap *VAR_1,
         const struct buffer_head *VAR_2)
{
 struct buffer_head *VAR_3;
 __u64 VAR_4;

 VAR_4 = FUNC_1(VAR_2->b_page) << (VAR_0 -
      VAR_1->b_inode->i_blkbits);
 for (VAR_3 = FUNC_0(VAR_2->b_page); VAR_3 != VAR_2; VAR_3 = VAR_3->b_this_page)
  VAR_4++;

 return VAR_4;
}
