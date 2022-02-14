
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_blkno; void* bg_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,int,int) ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (struct super_block*,struct ocfs2_group_desc*,int ,int,int) ;
 int FUNC_7 (unsigned long long,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_2,
       struct ocfs2_group_desc *VAR_3, u64 VAR_4,
       u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0, VAR_10;
 void *VAR_11 = VAR_3->bg_bitmap;

 if (FUNC_1(VAR_3->bg_free_bits_count) < VAR_7)
  return 0;

 FUNC_7((unsigned long long)FUNC_2(VAR_3->bg_blkno),
          VAR_5, VAR_6, VAR_7);

 while (VAR_5 < VAR_6) {
  VAR_5 = FUNC_5(VAR_11, VAR_6, VAR_5);
  if (VAR_5 >= VAR_6)
   break;
  VAR_10 = FUNC_4(VAR_11, VAR_6, VAR_5);

  if ((VAR_10 - VAR_5) >= VAR_7) {
   VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_10 - VAR_5);
   if (VAR_8 < 0) {
    FUNC_3(VAR_8);
    break;
   }
   VAR_9 += VAR_10 - VAR_5;
  }
  VAR_5 = VAR_10 + 1;

  if (FUNC_0(VAR_1)) {
   VAR_9 = -VAR_0;
   break;
  }

  if ((FUNC_1(VAR_3->bg_free_bits_count) - VAR_9) < VAR_7)
   break;
 }

 if (VAR_8 < 0)
  VAR_9 = VAR_8;

 return VAR_9;
}
