
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fc_wka_port {int work; int refcount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fc_wka_port *VAR_1)
{
 if (FUNC_0(&VAR_1->refcount) != 0)
  return;

 FUNC_1(&VAR_1->work, VAR_0 / 100);
}
