
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qc_state {TYPE_1__* s_state; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;

__attribute__((used)) static int FUNC_0(struct qc_state *VAR_11)
{
 int VAR_12 = 0;

 if (VAR_11->s_state[VAR_10].flags & VAR_8)
  VAR_12 |= VAR_4;
 if (VAR_11->s_state[VAR_10].flags & VAR_9)
  VAR_12 |= VAR_5;
 if (VAR_11->s_state[VAR_6].flags & VAR_8)
  VAR_12 |= VAR_0;
 if (VAR_11->s_state[VAR_6].flags & VAR_9)
  VAR_12 |= VAR_1;
 if (VAR_11->s_state[VAR_7].flags & VAR_8)
  VAR_12 |= VAR_2;
 if (VAR_11->s_state[VAR_7].flags & VAR_9)
  VAR_12 |= VAR_3;
 return VAR_12;
}
