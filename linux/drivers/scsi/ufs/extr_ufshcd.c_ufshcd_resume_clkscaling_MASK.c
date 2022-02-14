
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_suspended; } ;
struct ufs_hba {int devfreq; TYPE_2__* host; TYPE_1__ clk_scaling; } ;
struct TYPE_4__ {int host_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_4(struct ufs_hba *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2 = 0;

 if (!FUNC_3(VAR_0))
  return;

 FUNC_1(VAR_0->host->host_lock, VAR_1);
 if (VAR_0->clk_scaling.is_suspended) {
  VAR_2 = 1;
  VAR_0->clk_scaling.is_suspended = 0;
 }
 FUNC_2(VAR_0->host->host_lock, VAR_1);

 if (VAR_2)
  FUNC_0(VAR_0->devfreq);
}
