
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int tso; scalar_t__ vsw; scalar_t__ tsolen; scalar_t__ rmtu; int clean_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vnet_port*) ;

void FUNC_2(struct vnet_port *VAR_0)
{
 FUNC_0(&VAR_0->clean_timer);
 FUNC_1(VAR_0);
 VAR_0->rmtu = 0;
 VAR_0->tso = (VAR_0->vsw == 0);
 VAR_0->tsolen = 0;
}
