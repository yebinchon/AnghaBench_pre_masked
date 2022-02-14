
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_retime_dedicated {int * rt; } ;
struct TYPE_2__ {struct st_retime_dedicated rt_d; } ;
struct st_pio_control {TYPE_1__ rt; } ;
struct st_pinctrl {int data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,unsigned int*) ;
 unsigned long FUNC_8 (unsigned long,int ,int) ;

__attribute__((used)) static int FUNC_9(struct st_pinctrl *VAR_8,
 struct st_pio_control *VAR_9, int VAR_10, unsigned long *VAR_11)
{
 unsigned int VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;
 int VAR_16 = FUNC_6(*VAR_11);
 struct st_retime_dedicated *VAR_17 = &VAR_9->rt.rt_d;

 FUNC_7(VAR_17->rt[VAR_10], &VAR_12);

 VAR_15 = (VAR_12 & VAR_1) >> VAR_2;
 FUNC_1(*VAR_11, VAR_15);

 VAR_13 = (VAR_12 & VAR_3) >> VAR_4;
 VAR_14 = FUNC_8(VAR_13, VAR_8->data, VAR_16);
 FUNC_3(*VAR_11, VAR_14);

 if (VAR_12 & VAR_0)
  FUNC_2(*VAR_11);

 if (VAR_12 & VAR_5)
  FUNC_4(*VAR_11);

 if (VAR_12 & VAR_6)
  FUNC_5(*VAR_11);

 if (VAR_12 & VAR_7)
  FUNC_0(*VAR_11);

 return 0;
}
