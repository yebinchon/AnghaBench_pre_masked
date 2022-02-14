
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxp_fmt {int fourcc; int depth; } ;
__attribute__((used)) static inline u32 FUNC_0(struct pxp_fmt *VAR_0, u32 VAR_1)
{
 switch (VAR_0->fourcc) {
 case 129:
 case 133:
 case 131:
 case 128:
 case 132:
 case 130:
  return VAR_1;
 default:
  return (VAR_1 * VAR_0->depth) >> 3;
 }
}
