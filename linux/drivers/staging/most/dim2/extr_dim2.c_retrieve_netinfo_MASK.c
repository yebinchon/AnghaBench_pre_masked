
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mbo {int* virt_address; } ;
struct dim2_hdm {int link_state; int netinfo_waitq; int deliver_netinfo; int mac_addrs; } ;


 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dim2_hdm *VAR_0, struct mbo *VAR_1)
{
 u8 *VAR_2 = VAR_1->virt_address;

 FUNC_1("Node Address: 0x%03x\n", (u16)VAR_2[16] << 8 | VAR_2[17]);
 VAR_0->link_state = VAR_2[18];
 FUNC_1("NIState: %d\n", VAR_0->link_state);
 FUNC_0(VAR_0->mac_addrs, VAR_2 + 19, 6);
 VAR_0->deliver_netinfo++;
 FUNC_2(&VAR_0->netinfo_waitq);
}
