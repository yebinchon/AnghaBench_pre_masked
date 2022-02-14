
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tbnet {struct tb_xdomain* xd; } ;
struct tb_xdomain {scalar_t__ local_uuid; int route; } ;
struct net_device {int* dev_addr; } ;
typedef int hash ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 struct tbnet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 const struct tbnet *VAR_1 = FUNC_3(VAR_0);
 const struct tb_xdomain *VAR_2 = VAR_1->xd;
 u8 VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_4(FUNC_0(VAR_2->route));


 VAR_0->dev_addr[0] = VAR_3 << 4 | 0x02;
 VAR_4 = FUNC_1((u32 *)VAR_2->local_uuid, 4, 0);
 FUNC_2(VAR_0->dev_addr + 1, &VAR_4, sizeof(VAR_4));
 VAR_4 = FUNC_1((u32 *)VAR_2->local_uuid, 4, VAR_4);
 VAR_0->dev_addr[5] = VAR_4 & 0xff;
}
