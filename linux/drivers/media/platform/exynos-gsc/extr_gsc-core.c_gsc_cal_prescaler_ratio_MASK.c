
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_variant {int poly_sc_down_max; int pre_sc_down_max; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct gsc_variant *VAR_1, u32 VAR_2, u32 VAR_3,
        u32 *VAR_4)
{
 if ((VAR_3 > VAR_2) || (VAR_3 >= VAR_2 / VAR_1->poly_sc_down_max)) {
  *VAR_4 = 1;
  return 0;
 }

 if ((VAR_2 / VAR_1->poly_sc_down_max / VAR_1->pre_sc_down_max) > VAR_3) {
  FUNC_0("Exceeded maximum downscaling ratio (1/16))");
  return -VAR_0;
 }

 *VAR_4 = (VAR_3 > (VAR_2 / 8)) ? 2 : 4;

 return 0;
}
