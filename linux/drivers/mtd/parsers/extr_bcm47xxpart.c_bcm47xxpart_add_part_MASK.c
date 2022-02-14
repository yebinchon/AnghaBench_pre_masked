
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
struct mtd_partition {char const* name; int mask_flags; int offset; } ;



__attribute__((used)) static void FUNC_0(struct mtd_partition *VAR_0, const char *VAR_1,
     u64 VAR_2, uint32_t VAR_3)
{
 VAR_0->name = VAR_1;
 VAR_0->offset = VAR_2;
 VAR_0->mask_flags = VAR_3;
}
