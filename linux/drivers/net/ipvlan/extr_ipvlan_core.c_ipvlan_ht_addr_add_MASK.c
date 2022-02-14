
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ipvl_port {int * hlhead; } ;
struct ipvl_dev {struct ipvl_port* port; } ;
struct ipvl_addr {scalar_t__ atype; int hlnode; int ip4addr; int ip6addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;

void FUNC_4(struct ipvl_dev *VAR_1, struct ipvl_addr *VAR_2)
{
 struct ipvl_port *VAR_3 = VAR_1->port;
 u8 VAR_4;

 VAR_4 = (VAR_2->atype == VAR_0) ?
        FUNC_3(&VAR_2->ip6addr) :
        FUNC_2(&VAR_2->ip4addr);
 if (FUNC_1(&VAR_2->hlnode))
  FUNC_0(&VAR_2->hlnode, &VAR_3->hlhead[VAR_4]);
}
