
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signal; } ;
struct pvr2_hdw {TYPE_1__ tuner_signal_info; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;


 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct pvr2_ctrl *VAR_0,int *VAR_1)
{
 struct pvr2_hdw *VAR_2 = VAR_0->hdw;
 FUNC_0(VAR_2);
 *VAR_1 = VAR_2->tuner_signal_info.signal;
 return 0;
}
