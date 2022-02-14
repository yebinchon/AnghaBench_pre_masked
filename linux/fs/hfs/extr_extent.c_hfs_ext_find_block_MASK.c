
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfs_extent {int block; int count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct hfs_extent *VAR_0, u16 VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 3; VAR_0++, VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->count);
  if (VAR_1 < VAR_3)
   return FUNC_0(VAR_0->block) + VAR_1;
  VAR_1 -= VAR_3;
 }

 return 0;
}
