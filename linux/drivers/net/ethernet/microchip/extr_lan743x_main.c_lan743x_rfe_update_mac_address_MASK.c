
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct lan743x_adapter {scalar_t__* mac_address; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct lan743x_adapter *VAR_1)
{
 u8 *VAR_2;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;


 VAR_2 = VAR_1->mac_address;
 VAR_4 = ((((u32)(VAR_2[0])) << 0) |
        (((u32)(VAR_2[1])) << 8) |
        (((u32)(VAR_2[2])) << 16) |
        (((u32)(VAR_2[3])) << 24));
 VAR_3 = ((((u32)(VAR_2[4])) << 0) |
        (((u32)(VAR_2[5])) << 8));

 FUNC_2(VAR_1, FUNC_1(0), VAR_4);
 FUNC_2(VAR_1, FUNC_0(0),
     VAR_3 | VAR_0);
}
