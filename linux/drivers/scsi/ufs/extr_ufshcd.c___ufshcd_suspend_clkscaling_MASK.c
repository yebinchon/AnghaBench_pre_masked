
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ window_start_t; } ;
struct ufs_hba {TYPE_2__* host; TYPE_1__ clk_scaling; int devfreq; } ;
struct TYPE_4__ {int host_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(VAR_0->devfreq);
 FUNC_1(VAR_0->host->host_lock, VAR_1);
 VAR_0->clk_scaling.window_start_t = 0;
 FUNC_2(VAR_0->host->host_lock, VAR_1);
}
