
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,char*,int,int ) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 u_int VAR_4 = VAR_2->base_addr;

 FUNC_0(VAR_1, VAR_2, "Setting mask to %x at %x\n", VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4, VAR_0);
}
