
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netdata_local {int ndev; int net_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct netdata_local *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;


 VAR_2 = VAR_1[0] | ((u32)VAR_1[1] << 8);
 FUNC_4(VAR_2, FUNC_2(VAR_0->net_base));
 VAR_2 = VAR_1[2] | ((u32)VAR_1[3] << 8);
 FUNC_4(VAR_2, FUNC_1(VAR_0->net_base));
 VAR_2 = VAR_1[4] | ((u32)VAR_1[5] << 8);
 FUNC_4(VAR_2, FUNC_0(VAR_0->net_base));

 FUNC_3(VAR_0->ndev, "Ethernet MAC address %pM\n", VAR_1);
}
