
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lan743x_adapter {int netdev; int mac_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int ,char*,int*) ;

__attribute__((used)) static void FUNC_3(struct lan743x_adapter *VAR_3,
        u8 *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = VAR_4[0] |
  VAR_4[1] << 8 |
  VAR_4[2] << 16 |
  VAR_4[3] << 24;
 VAR_6 = VAR_4[4] |
  VAR_4[5] << 8;
 FUNC_1(VAR_3, VAR_1, VAR_5);
 FUNC_1(VAR_3, VAR_0, VAR_6);

 FUNC_0(VAR_3->mac_address, VAR_4);
 FUNC_2(VAR_3, VAR_2, VAR_3->netdev,
     "MAC address set to %pM\n", VAR_4);
}
