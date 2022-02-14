
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfsplus_extent {scalar_t__ block_count; scalar_t__ start_block; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct hfsplus_extent *VAR_0)
{
 int VAR_1;

 VAR_0 += 7;
 for (VAR_1 = 0; VAR_1 < 7; VAR_0--, VAR_1++)
  if (VAR_0->block_count)
   break;
 return FUNC_0(VAR_0->start_block) + FUNC_0(VAR_0->block_count);
}
