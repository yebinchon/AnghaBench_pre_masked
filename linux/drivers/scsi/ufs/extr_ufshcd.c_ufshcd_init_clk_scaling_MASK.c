
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wq_name ;
struct TYPE_3__ {int workq; int resume_work; int suspend_work; } ;
struct ufs_hba {TYPE_1__ clk_scaling; TYPE_2__* host; } ;
struct TYPE_4__ {int host_no; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_5(struct ufs_hba *VAR_2)
{
 char VAR_3[sizeof("ufs_clkscaling_00")];

 if (!FUNC_4(VAR_2))
  return;

 FUNC_0(&VAR_2->clk_scaling.suspend_work,
    VAR_1);
 FUNC_0(&VAR_2->clk_scaling.resume_work,
    VAR_0);

 FUNC_2(VAR_3, sizeof(VAR_3), "ufs_clkscaling_%d",
   VAR_2->host->host_no);
 VAR_2->clk_scaling.workq = FUNC_1(VAR_3);

 FUNC_3(VAR_2);
}
