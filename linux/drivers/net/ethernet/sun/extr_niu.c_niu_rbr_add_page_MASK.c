
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rx_ring_info {int rbr_blocks_per_page; scalar_t__ rbr_block_size; int * rbr; } ;
struct page {int dummy; } ;
struct niu {int device; TYPE_1__* ops; } ;
typedef int gfp_t ;
typedef int __le32 ;
struct TYPE_2__ {int (* map_page ) (int ,struct page*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rx_ring_info*,struct page*,int) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (int ,struct page*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_4, struct rx_ring_info *VAR_5,
       gfp_t VAR_6, int VAR_7)
{
 struct page *VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = VAR_4->ops->map_page(VAR_4->device, VAR_8, 0,
     VAR_2, VAR_0);
 if (!VAR_9) {
  FUNC_0(VAR_8);
  return -VAR_1;
 }

 FUNC_3(VAR_5, VAR_8, VAR_9);
 if (VAR_5->rbr_blocks_per_page > 1)
  FUNC_4(VAR_8, VAR_5->rbr_blocks_per_page - 1);

 for (VAR_10 = 0; VAR_10 < VAR_5->rbr_blocks_per_page; VAR_10++) {
  __le32 *VAR_11 = &VAR_5->rbr[VAR_7 + VAR_10];

  *VAR_11 = FUNC_2(VAR_9 >> VAR_3);
  VAR_9 += VAR_5->rbr_block_size;
 }

 return 0;
}
