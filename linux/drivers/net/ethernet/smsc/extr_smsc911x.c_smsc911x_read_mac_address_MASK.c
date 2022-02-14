
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct smsc911x_data {int dummy; } ;
struct net_device {void** dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsc911x_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc911x_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct smsc911x_data *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = FUNC_1(VAR_3, VAR_0);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_1);

 VAR_2->dev_addr[0] = (u8)(VAR_5);
 VAR_2->dev_addr[1] = (u8)(VAR_5 >> 8);
 VAR_2->dev_addr[2] = (u8)(VAR_5 >> 16);
 VAR_2->dev_addr[3] = (u8)(VAR_5 >> 24);
 VAR_2->dev_addr[4] = (u8)(VAR_4);
 VAR_2->dev_addr[5] = (u8)(VAR_4 >> 8);
}
