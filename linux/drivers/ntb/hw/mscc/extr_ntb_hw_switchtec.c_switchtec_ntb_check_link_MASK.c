
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int link_force_down; int check_link_status_work; } ;
typedef enum switchtec_msg { ____Placeholder_switchtec_msg } switchtec_msg ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct switchtec_ntb *VAR_1,
          enum switchtec_msg VAR_2)
{
 if (VAR_2 == VAR_0)
  VAR_1->link_force_down = 1;

 FUNC_0(&VAR_1->check_link_status_work);
}
