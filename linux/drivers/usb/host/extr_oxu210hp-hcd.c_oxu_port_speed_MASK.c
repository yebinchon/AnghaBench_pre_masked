
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct oxu_hcd *VAR_2,
      unsigned int VAR_3)
{
 switch ((VAR_3 >> 26) & 3) {
 case 0:
  return 0;
 case 1:
  return VAR_1;
 case 2:
 default:
  return VAR_0;
 }
}
