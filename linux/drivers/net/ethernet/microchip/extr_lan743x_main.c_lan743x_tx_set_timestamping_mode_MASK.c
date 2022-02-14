
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_tx {int ts_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct lan743x_tx *VAR_2,
          bool VAR_3,
          bool VAR_4)
{
 if (VAR_3)
  VAR_2->ts_flags |= VAR_1;
 else
  VAR_2->ts_flags &= ~VAR_1;
 if (VAR_4)
  VAR_2->ts_flags |= VAR_0;
 else
  VAR_2->ts_flags &= ~VAR_0;
}
