
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* hdw; } ;
struct TYPE_2__ {int big_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_ctrl*,int,int,char*,unsigned int,unsigned int*) ;

int FUNC_3(struct pvr2_ctrl *VAR_0,
      int VAR_1,int VAR_2,
      char *VAR_3,unsigned int VAR_4,
      unsigned int *VAR_5)
{
 int VAR_6;
 FUNC_1(VAR_0->hdw->big_lock); do {
  VAR_6 = FUNC_2(VAR_0,VAR_1,VAR_2,
            VAR_3,VAR_4,VAR_5);
 } while(0); FUNC_0(VAR_0->hdw->big_lock);
 return VAR_6;
}
