
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int dummy; } ;
struct ipr_cmnd {int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int ) ;

__attribute__((used)) static int FUNC_1(struct ipr_cmnd *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = VAR_5->ioa_cfg;

 VAR_0;
 VAR_5->job_step = VAR_4;
 FUNC_0(VAR_6, ~VAR_1);
 VAR_3;
 return VAR_2;
}
