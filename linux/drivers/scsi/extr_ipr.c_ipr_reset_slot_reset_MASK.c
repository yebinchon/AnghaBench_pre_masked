
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int reset_work_q; } ;
struct ipr_cmnd {int job_step; int work; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = VAR_5->ioa_cfg;

 VAR_0;
 FUNC_0(&VAR_5->work, VAR_3);
 FUNC_1(VAR_6->reset_work_q, &VAR_5->work);
 VAR_5->job_step = VAR_4;
 VAR_2;
 return VAR_1;
}
