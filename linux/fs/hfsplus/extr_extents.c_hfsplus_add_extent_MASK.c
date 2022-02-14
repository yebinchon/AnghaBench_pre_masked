
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfsplus_extent {void* block_count; void* start_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hfsplus_extent*) ;

__attribute__((used)) static int FUNC_3(struct hfsplus_extent *VAR_2, u32 VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(VAR_2);
 for (VAR_8 = 0; VAR_8 < 8; VAR_2++, VAR_8++) {
  VAR_6 = FUNC_0(VAR_2->block_count);
  if (VAR_3 == VAR_6) {
   VAR_7 = FUNC_0(VAR_2->start_block);
   if (VAR_4 != VAR_7 + VAR_6) {
    if (++VAR_8 >= 8)
     return -VAR_1;
    VAR_2++;
    VAR_2->start_block = FUNC_1(VAR_4);
   } else
    VAR_5 += VAR_6;
   VAR_2->block_count = FUNC_1(VAR_5);
   return 0;
  } else if (VAR_3 < VAR_6)
   break;
  VAR_3 -= VAR_6;
 }

 return -VAR_0;
}
