
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_retime_dedicated {int * rt; } ;
struct TYPE_2__ {struct st_retime_dedicated rt_d; } ;
struct st_pio_control {TYPE_1__ rt; } ;
struct st_pinctrl {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 unsigned long FUNC_8 (int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct st_pinctrl *VAR_7,
 struct st_pio_control *VAR_8, unsigned long VAR_9, int VAR_10)
{
 int VAR_11 = FUNC_0(VAR_9) ? 0 : 1;
 int VAR_12 = FUNC_2(VAR_9);
 int VAR_13 = FUNC_3(VAR_9);
 int VAR_14 = FUNC_5(VAR_9);
 int VAR_15 = FUNC_6(VAR_9);
 int VAR_16 = FUNC_1(VAR_9);

 unsigned long VAR_17 = FUNC_8(
   FUNC_4(VAR_9),
   VAR_7->data, VAR_9);
 struct st_retime_dedicated *VAR_18 = &VAR_8->rt.rt_d;

 unsigned long VAR_19 =
  ((VAR_12) << VAR_1) |
  ((VAR_17) << VAR_3) |
  ((VAR_11) << VAR_2) |
  ((VAR_16) << VAR_6) |
  ((VAR_13) << VAR_0) |
  ((VAR_15) << VAR_5) |
  ((VAR_14) << VAR_4);

 FUNC_7(VAR_18->rt[VAR_10], VAR_19);
}
