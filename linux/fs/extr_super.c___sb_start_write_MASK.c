
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rw_sem; } ;
struct super_block {TYPE_1__ s_writers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int FUNC_4(struct super_block *VAR_0, int VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = 1;
 if (VAR_2 && !VAR_3)
  FUNC_1(VAR_0->s_writers.rw_sem + VAR_1-1);
 else
  VAR_4 = FUNC_2(VAR_0->s_writers.rw_sem + VAR_1-1);

 FUNC_0(VAR_3 && !VAR_4);
 return VAR_4;
}
