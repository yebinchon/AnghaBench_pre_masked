
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfsplus_extent {int start_block; int block_count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct hfsplus_extent *VAR_0, u32 VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 for (VAR_2 = 0; VAR_2 < 8; VAR_0++, VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->block_count);
  if (VAR_1 < VAR_3)
   return FUNC_0(VAR_0->start_block) + VAR_1;
  VAR_1 -= VAR_3;
 }

 return 0;
}
