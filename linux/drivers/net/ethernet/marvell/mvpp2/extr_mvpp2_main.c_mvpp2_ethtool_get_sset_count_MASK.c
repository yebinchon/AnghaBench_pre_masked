
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvpp2_port {int nrxqs; int ntxqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mvpp2_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct mvpp2_port *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 == VAR_1)
  return FUNC_0(VAR_4->ntxqs, VAR_4->nrxqs);

 return -VAR_0;
}
