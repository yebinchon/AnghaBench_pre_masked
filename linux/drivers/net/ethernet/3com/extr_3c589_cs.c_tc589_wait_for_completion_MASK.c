
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 int VAR_4 = 100;
 FUNC_2(VAR_3, VAR_2->base_addr + VAR_0);
 while (--VAR_4 > 0)
  if (!(FUNC_0(VAR_2->base_addr + VAR_1) & 0x1000))
   break;
 if (VAR_4 == 0)
  FUNC_1(VAR_2, "command 0x%04x did not complete!\n", VAR_3);
}
