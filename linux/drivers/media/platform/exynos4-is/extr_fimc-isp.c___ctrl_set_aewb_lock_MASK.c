
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl {int val; } ;
struct TYPE_7__ {int cmd; void* target; } ;
struct isp_param {TYPE_3__ aa; } ;
struct TYPE_8__ {int ae_lock_state; int awb_lock_state; } ;
struct fimc_is {TYPE_4__ af; TYPE_2__* is_p_region; } ;
struct TYPE_5__ {struct isp_param isp; } ;
struct TYPE_6__ {TYPE_1__ parameter; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fimc_is*,int) ;
 int FUNC_1 (struct fimc_is*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct fimc_is *VAR_6,
          struct v4l2_ctrl *VAR_7)
{
 bool VAR_8 = VAR_7->val & VAR_5;
 bool VAR_9 = VAR_7->val & VAR_4;
 struct isp_param *VAR_10 = &VAR_6->is_p_region->parameter.isp;
 int VAR_11, VAR_12;

 VAR_11 = VAR_9 ? VAR_1 : VAR_0;
 VAR_10->aa.cmd = VAR_11;
 VAR_10->aa.target = VAR_2;
 FUNC_1(VAR_6, VAR_3);
 VAR_6->af.ae_lock_state = VAR_9;
 FUNC_2();

 VAR_12 = FUNC_0(VAR_6, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_8 ? VAR_1 : VAR_0;
 VAR_10->aa.cmd = VAR_11;
 VAR_10->aa.target = VAR_2;
 FUNC_1(VAR_6, VAR_3);
 VAR_6->af.awb_lock_state = VAR_8;
 FUNC_2();

 return FUNC_0(VAR_6, 0);
}
