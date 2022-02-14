
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_variant {int h_scale_down_max; int v_scale_down_max; int h_scale_up_max; int v_scale_up_max; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtk_mdp_variant *VAR_1, int VAR_2,
          int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 == 90 || VAR_6 == 270) {
  VAR_7 = VAR_5;
  VAR_8 = VAR_4;
 } else {
  VAR_7 = VAR_4;
  VAR_8 = VAR_5;
 }

 if ((VAR_2 / VAR_7) > VAR_1->h_scale_down_max ||
     (VAR_3 / VAR_8) > VAR_1->v_scale_down_max ||
     (VAR_7 / VAR_2) > VAR_1->h_scale_up_max ||
     (VAR_8 / VAR_3) > VAR_1->v_scale_up_max)
  return -VAR_0;

 return 0;
}
