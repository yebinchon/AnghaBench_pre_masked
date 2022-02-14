
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_regs {int rdp; } ;
struct lance_private {struct lance_regs* ll; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 struct lance_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct lance_private *VAR_1 = FUNC_2(VAR_0);
 volatile struct lance_regs *VAR_2 = VAR_1->ll;

 FUNC_1(VAR_0, "transmit timed out, status %04x, reset\n", VAR_2->rdp);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
}
