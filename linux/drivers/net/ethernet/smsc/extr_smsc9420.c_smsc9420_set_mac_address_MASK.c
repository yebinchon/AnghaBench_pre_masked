
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc9420_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct smsc9420_pdata *VAR_3 = FUNC_0(VAR_2);
 u8 *VAR_4 = VAR_2->dev_addr;
 u32 VAR_5 = (VAR_4[5] << 8) | VAR_4[4];
 u32 VAR_6 = (VAR_4[3] << 24) | (VAR_4[2] << 16) |
     (VAR_4[1] << 8) | VAR_4[0];

 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3, VAR_1, VAR_6);
}
