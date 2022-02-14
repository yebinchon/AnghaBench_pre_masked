
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
struct TYPE_3__ {int * brgc; } ;
struct TYPE_4__ {TYPE_1__ brg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;
 TYPE_2__* VAR_9 ;

int FUNC_3(enum qe_clock VAR_10, unsigned int VAR_11, unsigned int VAR_12)
{
 u32 VAR_13, VAR_14;
 u32 VAR_15 = 0;

 if ((VAR_10 < VAR_3) || (VAR_10 > VAR_4))
  return -VAR_0;

 VAR_13 = FUNC_2() / (VAR_11 * VAR_12);

 if (VAR_13 > VAR_6 + 1) {
  VAR_15 = VAR_5;
  VAR_13 /= 16;
 }




 if (FUNC_1(VAR_2) || FUNC_1(VAR_1))
  if (!VAR_15 && (VAR_13 & 1) && (VAR_13 > 3))
   VAR_13++;

 VAR_14 = ((VAR_13 - 1) << VAR_7) |
  VAR_8 | VAR_15;

 FUNC_0(&VAR_9->brg.brgc[VAR_10 - VAR_3], VAR_14);

 return 0;
}
