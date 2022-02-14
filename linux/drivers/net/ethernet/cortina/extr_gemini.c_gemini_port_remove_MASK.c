
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemini_ethernet_port {int geth; int pclk; scalar_t__ netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gemini_ethernet_port *VAR_0)
{
 if (VAR_0->netdev)
  FUNC_2(VAR_0->netdev);
 FUNC_0(VAR_0->pclk);
 FUNC_1(VAR_0->geth);
}
