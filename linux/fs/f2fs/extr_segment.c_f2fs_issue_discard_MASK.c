
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int discard_map; } ;
struct f2fs_sb_info {int discard_blks; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ block_t ;


 unsigned int FUNC_0 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_1 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_2 (struct f2fs_sb_info*,struct block_device*,scalar_t__,scalar_t__) ;
 struct block_device* FUNC_3 (struct f2fs_sb_info*,scalar_t__,int *) ;
 int FUNC_4 (unsigned int,int ) ;
 struct seg_entry* FUNC_5 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_6(struct f2fs_sb_info *VAR_0,
    block_t VAR_1, block_t VAR_2)
{
 sector_t VAR_3 = VAR_1, VAR_4 = 0;
 struct block_device *VAR_5;
 struct seg_entry *VAR_6;
 unsigned int VAR_7;
 block_t VAR_8;
 int VAR_9 = 0;

 VAR_5 = FUNC_3(VAR_0, VAR_1, ((void*)0));

 for (VAR_8 = VAR_1; VAR_8 < VAR_1 + VAR_2; VAR_8++, VAR_4++) {
  if (VAR_8 != VAR_3) {
   struct block_device *VAR_10 =
    FUNC_3(VAR_0, VAR_8, ((void*)0));

   if (VAR_10 != VAR_5) {
    VAR_9 = FUNC_2(VAR_0, VAR_5,
      VAR_3, VAR_4);
    if (VAR_9)
     return VAR_9;
    VAR_5 = VAR_10;
    VAR_3 = VAR_8;
    VAR_4 = 0;
   }
  }

  VAR_6 = FUNC_5(VAR_0, FUNC_1(VAR_0, VAR_8));
  VAR_7 = FUNC_0(VAR_0, VAR_8);

  if (!FUNC_4(VAR_7, VAR_6->discard_map))
   VAR_0->discard_blks--;
 }

 if (VAR_4)
  VAR_9 = FUNC_2(VAR_0, VAR_5, VAR_3, VAR_4);
 return VAR_9;
}
