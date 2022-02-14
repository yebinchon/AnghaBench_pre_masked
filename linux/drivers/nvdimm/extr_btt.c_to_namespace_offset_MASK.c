
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arena_info {int dataoff; int internal_lbasize; } ;



__attribute__((used)) static u64 FUNC_0(struct arena_info *VAR_0, u64 VAR_1)
{
 return VAR_0->dataoff + ((u64)VAR_1 * VAR_0->internal_lbasize);
}
