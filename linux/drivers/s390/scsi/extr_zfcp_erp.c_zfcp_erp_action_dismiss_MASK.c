
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct zfcp_erp_action*) ;
 int FUNC_1 (struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_erp_action *VAR_1)
{
 VAR_1->status |= VAR_0;
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1);
}
