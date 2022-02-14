
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {scalar_t__ sdt_state; int in_ioa_bringdown; scalar_t__ reset_retries; } ;
typedef enum ipr_shutdown_type { ____Placeholder_ipr_shutdown_type } ipr_shutdown_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipr_ioa_cfg*,int) ;

__attribute__((used)) static void FUNC_1(struct ipr_ioa_cfg *VAR_4,
           enum ipr_shutdown_type VAR_5)
{
 VAR_1;
 if (VAR_4->sdt_state == VAR_3)
  VAR_4->sdt_state = VAR_0;
 VAR_4->reset_retries = 0;
 VAR_4->in_ioa_bringdown = 1;
 FUNC_0(VAR_4, VAR_5);
 VAR_2;
}
