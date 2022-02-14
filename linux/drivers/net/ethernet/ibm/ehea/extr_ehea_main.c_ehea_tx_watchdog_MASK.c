
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ehea_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ehea_port*) ;
 struct ehea_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct ehea_port *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_2) &&
     !FUNC_3(VAR_0, &VAR_1))
  FUNC_0(VAR_3);
}
