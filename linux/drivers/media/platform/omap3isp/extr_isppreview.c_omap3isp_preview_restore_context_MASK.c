
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int const active; TYPE_1__* params; } ;
struct isp_prev_device {TYPE_2__ params; } ;
struct isp_device {struct isp_prev_device isp_prev; } ;
struct TYPE_3__ {int update; } ;


 int VAR_0 ;
 int FUNC_0 (struct isp_prev_device*,int const,int const) ;

void FUNC_1(struct isp_device *VAR_1)
{
 struct isp_prev_device *VAR_2 = &VAR_1->isp_prev;
 const u32 VAR_3 = VAR_0 - 1;

 VAR_2->params.params[0].update = VAR_2->params.active & VAR_3;
 VAR_2->params.params[1].update = ~VAR_2->params.active & VAR_3;

 FUNC_0(VAR_2, VAR_3, VAR_2->params.active);

 VAR_2->params.params[0].update = 0;
 VAR_2->params.params[1].update = 0;
}
