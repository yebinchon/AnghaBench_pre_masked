
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int status; } ;
struct zfcp_erp_action {int step; int status; struct zfcp_port* port; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct zfcp_erp_action*) ;
 int FUNC_2 (struct zfcp_erp_action*) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_3(
 struct zfcp_erp_action *VAR_5)
{
 struct zfcp_port *VAR_6 = VAR_5->port;
 int VAR_7 = FUNC_0(&VAR_6->status);

 if ((VAR_7 & VAR_2) &&
     !(VAR_7 & VAR_3))
  goto close_init_done;

 switch (VAR_5->step) {
 case 128:
  if (VAR_7 & VAR_3)
   return FUNC_1(VAR_5);
  break;

 case 130:
  if (VAR_7 & VAR_3)
   return VAR_1;
  break;
 case 131:
 case 129:
 case 133:
 case 132:

  break;
 }

close_init_done:
 if (VAR_5->status & VAR_4)
  return VAR_0;

 return FUNC_2(VAR_5);
}
