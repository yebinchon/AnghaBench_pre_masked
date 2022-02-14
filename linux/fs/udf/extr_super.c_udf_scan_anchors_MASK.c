
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {int s_anchor; int s_session; } ;
struct super_block {int s_blocksize_bits; TYPE_1__* s_bdev; } ;
struct kernel_lb_addr {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int,struct kernel_lb_addr*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, sector_t *VAR_2,
       struct kernel_lb_addr *VAR_3)
{
 sector_t VAR_4[6];
 int VAR_5;
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 0;
 int VAR_8;


 if (VAR_6->s_anchor) {
  VAR_8 = FUNC_2(VAR_1, VAR_6->s_anchor, VAR_3);
  if (VAR_8 != -VAR_0)
   return VAR_8;
 }







 VAR_8 = FUNC_2(VAR_1, VAR_6->s_session + 256, VAR_3);
 if (VAR_8 != -VAR_0)
  return VAR_8;




 VAR_4[VAR_7++] = *VAR_2;
 if (*VAR_2 >= 1)
  VAR_4[VAR_7++] = *VAR_2 - 1;
 VAR_4[VAR_7++] = *VAR_2 + 1;
 if (*VAR_2 >= 2)
  VAR_4[VAR_7++] = *VAR_2 - 2;
 if (*VAR_2 >= 150)
  VAR_4[VAR_7++] = *VAR_2 - 150;
 if (*VAR_2 >= 152)
  VAR_4[VAR_7++] = *VAR_2 - 152;

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (VAR_4[VAR_5] >= FUNC_1(VAR_1->s_bdev->bd_inode) >>
    VAR_1->s_blocksize_bits)
   continue;
  VAR_8 = FUNC_2(VAR_1, VAR_4[VAR_5], VAR_3);
  if (VAR_8 != -VAR_0) {
   if (!VAR_8)
    *VAR_2 = VAR_4[VAR_5];
   return VAR_8;
  }
  if (VAR_4[VAR_5] < 256)
   continue;
  VAR_8 = FUNC_2(VAR_1, VAR_4[VAR_5] - 256, VAR_3);
  if (VAR_8 != -VAR_0) {
   if (!VAR_8)
    *VAR_2 = VAR_4[VAR_5];
   return VAR_8;
  }
 }


 return FUNC_2(VAR_1, VAR_6->s_session + 512, VAR_3);
}
