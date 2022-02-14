
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_0(struct ahd_softc *VAR_9, u_int *VAR_10,
    u_int *VAR_11, u_int VAR_12)
{
 if (*VAR_10 < VAR_12)
  *VAR_10 = VAR_12;

 if ((*VAR_11 & VAR_5) != 0
  && *VAR_10 > VAR_2)
  *VAR_11 &= ~VAR_5;

 if (*VAR_10 > VAR_1)
  *VAR_10 = 0;


 if (*VAR_10 > VAR_3)
  *VAR_11 &= ~VAR_8;

 if ((*VAR_11 & VAR_6) == 0)
  *VAR_11 &= (VAR_5|VAR_7);

 if ((*VAR_11 & VAR_5) == 0)
  *VAR_11 &= VAR_7;


 if ((*VAR_11 & VAR_6) == 0
  && *VAR_10 < VAR_0)
  *VAR_10 = VAR_0;


 if ((*VAR_11 & VAR_5) == 0
  && *VAR_10 < VAR_4)
  *VAR_10 = VAR_4;
}
