
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtu3_ep {int epnum; int is_in; struct mtu3* mtu; } ;
struct mtu3 {int mac_base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mtu3_ep *VAR_1)
{
 struct mtu3 *VAR_2 = VAR_1->mtu;
 u32 VAR_3 = FUNC_0(VAR_1->is_in, VAR_1->epnum);

 FUNC_2(VAR_2->mac_base, VAR_0, VAR_3);
 FUNC_1(VAR_2->mac_base, VAR_0, VAR_3);
}
