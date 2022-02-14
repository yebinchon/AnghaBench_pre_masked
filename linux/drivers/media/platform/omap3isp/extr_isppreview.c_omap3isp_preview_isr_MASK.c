
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lock; int active; } ;
struct isp_prev_device {scalar_t__ input; int output; scalar_t__ state; TYPE_1__ params; int stopping; int wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct isp_prev_device*,int ) ;
 int FUNC_2 (struct isp_prev_device*) ;
 int FUNC_3 (struct isp_prev_device*) ;
 int FUNC_4 (struct isp_prev_device*,int ,int) ;
 int FUNC_5 (struct isp_prev_device*) ;
 int FUNC_6 (struct isp_prev_device*,int ,int) ;
 int FUNC_7 (struct isp_prev_device*,int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct isp_prev_device *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 if (FUNC_0(&VAR_3->wait, &VAR_3->stopping))
  return;

 FUNC_8(&VAR_3->params.lock, VAR_4);
 FUNC_5(VAR_3);
 VAR_5 = FUNC_4(VAR_3, 0, 0);
 VAR_6 = VAR_3->params.active;
 FUNC_9(&VAR_3->params.lock, VAR_4);

 FUNC_7(VAR_3, VAR_5, VAR_6);
 FUNC_1(VAR_3, VAR_6);

 if (VAR_3->input == VAR_1 ||
     VAR_3->output & VAR_2)
  FUNC_3(VAR_3);
 else if (VAR_3->state == VAR_0)
  FUNC_2(VAR_3);

 FUNC_8(&VAR_3->params.lock, VAR_4);
 FUNC_6(VAR_3, VAR_5, 0);
 FUNC_9(&VAR_3->params.lock, VAR_4);
}
