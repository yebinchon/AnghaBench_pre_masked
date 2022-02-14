
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {unsigned long vc_pos; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;

u16 FUNC_1(struct vc_data *VAR_1, const u16 *VAR_2)
{
 if ((unsigned long)VAR_2 == VAR_1->vc_pos && VAR_0 != -1)
  return VAR_0;
 return FUNC_0(VAR_2);
}
