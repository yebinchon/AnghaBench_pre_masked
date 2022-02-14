
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {scalar_t__ cfg_locked; int pdev; } ;
struct ipr_cmnd {int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ipr_cmnd *VAR_4)
{
 struct ipr_ioa_cfg *VAR_5 = VAR_4->ioa_cfg;

 VAR_0;
 if (VAR_5->cfg_locked)
  FUNC_0(VAR_5->pdev);
 VAR_5->cfg_locked = 0;
 VAR_4->job_step = VAR_3;
 VAR_2;
 return VAR_1;
}
