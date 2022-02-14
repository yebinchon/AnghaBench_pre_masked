
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ data_role; int send_discover; scalar_t__ pd_capable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcpm_port*,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_3)
{
 if (VAR_3->data_role == VAR_1 && VAR_3->send_discover &&
     VAR_3->pd_capable) {
  FUNC_0(VAR_3, VAR_2, VAR_0, ((void*)0), 0);
  VAR_3->send_discover = 0;
 }
}
