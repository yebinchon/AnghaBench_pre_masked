
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfsplus_extent {int block_count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hfsplus_extent *VAR_0)
{
 int VAR_1;
 u32 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 8; VAR_0++, VAR_1++)
  VAR_2 += FUNC_0(VAR_0->block_count);
 return VAR_2;
}
