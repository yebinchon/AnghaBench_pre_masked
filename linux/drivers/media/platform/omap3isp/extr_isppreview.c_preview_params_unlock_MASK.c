
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int active; TYPE_1__* params; } ;
struct isp_prev_device {TYPE_2__ params; } ;
struct TYPE_3__ {int update; int busy; } ;



__attribute__((used)) static void
FUNC_0(struct isp_prev_device *VAR_0, u32 VAR_1, bool VAR_2)
{
 u32 VAR_3 = VAR_0->params.active;

 if (VAR_2) {



  VAR_0->params.params[0].update |= (~VAR_3 & VAR_1);
  VAR_0->params.params[1].update |= (VAR_3 & VAR_1);
  VAR_0->params.params[0].busy &= VAR_3;
  VAR_0->params.params[1].busy &= ~VAR_3;
 } else {



  VAR_0->params.params[0].update &= ~(VAR_3 & VAR_1);
  VAR_0->params.params[1].update &= ~(~VAR_3 & VAR_1);
  VAR_0->params.params[0].busy &= ~VAR_3;
  VAR_0->params.params[1].busy &= VAR_3;
 }
}
