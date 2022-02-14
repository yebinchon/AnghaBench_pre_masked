
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int attached; int * partner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcpm_port*,int,int ,int ) ;
 int FUNC_1 (struct tcpm_port*) ;

__attribute__((used)) static int FUNC_2(struct tcpm_port *VAR_2)
{
 int VAR_3;

 if (VAR_2->attached)
  return 0;

 VAR_3 = FUNC_0(VAR_2, 1, VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->partner = ((void*)0);

 FUNC_1(VAR_2);

 VAR_2->attached = 1;

 return 0;
}
