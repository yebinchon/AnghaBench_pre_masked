
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int attached; scalar_t__ cc2; int pd_capable; int send_discover; int * partner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tcpm_port*,int ) ;
 int FUNC_1 (struct tcpm_port*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_5)
{
 int VAR_6;

 if (VAR_5->attached)
  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_5->cc2 != VAR_0 ?
    VAR_3 : VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, 1, VAR_4, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->pd_capable = 0;

 VAR_5->partner = ((void*)0);

 VAR_5->attached = 1;
 VAR_5->send_discover = 1;

 return 0;
}
