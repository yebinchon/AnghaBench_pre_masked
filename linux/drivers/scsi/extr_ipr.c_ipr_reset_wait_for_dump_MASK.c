
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {scalar_t__ sdt_state; int dump_timeout; } ;
struct ipr_cmnd {int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct ipr_cmnd *VAR_6)
{
 struct ipr_ioa_cfg *VAR_7 = VAR_6->ioa_cfg;

 if (VAR_7->sdt_state == VAR_1)
  VAR_7->sdt_state = VAR_4;
 else if (VAR_7->sdt_state == VAR_3)
  VAR_7->sdt_state = VAR_0;

 VAR_7->dump_timeout = 1;
 VAR_6->job_step = VAR_5;

 return VAR_2;
}
