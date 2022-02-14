
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct be_adapter {TYPE_1__* netdev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_1, u8 *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->netdev->dev_addr, VAR_0, 0);

 VAR_2[5] = (u8)(VAR_3 & 0xFF);
 VAR_2[4] = (u8)((VAR_3 >> 8) & 0xFF);
 VAR_2[3] = (u8)((VAR_3 >> 16) & 0xFF);

 FUNC_1(VAR_2, VAR_1->netdev->dev_addr, 3);
}
