
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_local {scalar_t__ virt_addr; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct net_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct net_local *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_5->virt_addr + VAR_0);
 FUNC_0(VAR_4, VAR_5->virt_addr + VAR_1);
}
