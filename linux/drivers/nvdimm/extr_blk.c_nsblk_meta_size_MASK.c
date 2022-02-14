
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nd_namespace_blk {int lbasize; } ;



__attribute__((used)) static u32 FUNC_0(struct nd_namespace_blk *VAR_0)
{
 return VAR_0->lbasize - ((VAR_0->lbasize >= 4096) ? 4096 : 512);
}
