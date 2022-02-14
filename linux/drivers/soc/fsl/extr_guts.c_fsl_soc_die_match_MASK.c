
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_soc_die_attr {int svr; int mask; } ;



__attribute__((used)) static const struct fsl_soc_die_attr *FUNC_0(
 u32 VAR_0, const struct fsl_soc_die_attr *VAR_1)
{
 while (VAR_1->svr) {
  if (VAR_1->svr == (VAR_0 & VAR_1->mask))
   return VAR_1;
  VAR_1++;
 };
 return ((void*)0);
}
