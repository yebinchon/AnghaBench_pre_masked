
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_variant {int sc_down_max; int local_sc_down; int sc_up_max; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct gsc_variant *VAR_2, int VAR_3, int VAR_4, int VAR_5,
      int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_8 == VAR_1)
  VAR_11 = VAR_2->sc_down_max;
 else
  VAR_11 = VAR_2->local_sc_down;

 if (VAR_7 == 90 || VAR_7 == 270) {
  VAR_9 = VAR_6;
  VAR_10 = VAR_5;
 } else {
  VAR_9 = VAR_5;
  VAR_10 = VAR_6;
 }

 if ((VAR_3 / VAR_9) > VAR_11 ||
     (VAR_4 / VAR_10) > VAR_11 ||
     (VAR_9 / VAR_3) > VAR_2->sc_up_max ||
     (VAR_10 / VAR_4) > VAR_2->sc_up_max)
  return -VAR_0;

 return 0;
}
