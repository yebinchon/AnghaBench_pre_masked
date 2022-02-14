
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;
struct Am79C960 {int RDP; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 volatile struct Am79C960 *VAR_1 = (struct Am79C960 *)VAR_0->base_addr;

 FUNC_1(VAR_0, "transmit timed out, status %04x, resetting\n",
     VAR_1->RDP);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
