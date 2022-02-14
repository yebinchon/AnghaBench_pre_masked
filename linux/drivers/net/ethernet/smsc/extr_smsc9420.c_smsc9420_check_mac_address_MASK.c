
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct smsc9420_pdata {int dev; } ;
struct net_device {void** dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (void**) ;
 struct smsc9420_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct smsc9420_pdata*,int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_2(VAR_3);


 if (FUNC_1(VAR_3->dev_addr)) {
  FUNC_5(VAR_3);
  FUNC_3(VAR_4, VAR_2, VAR_4->dev,
     "MAC Address is specified by configuration\n");
 } else {


  u32 VAR_5 = FUNC_4(VAR_4, VAR_0);
  u32 VAR_6 = FUNC_4(VAR_4, VAR_1);
  VAR_3->dev_addr[0] = (u8)(VAR_6);
  VAR_3->dev_addr[1] = (u8)(VAR_6 >> 8);
  VAR_3->dev_addr[2] = (u8)(VAR_6 >> 16);
  VAR_3->dev_addr[3] = (u8)(VAR_6 >> 24);
  VAR_3->dev_addr[4] = (u8)(VAR_5);
  VAR_3->dev_addr[5] = (u8)(VAR_5 >> 8);

  if (FUNC_1(VAR_3->dev_addr)) {

   FUNC_3(VAR_4, VAR_2, VAR_4->dev,
      "Mac Address is read from EEPROM\n");
  } else {

   FUNC_0(VAR_3);
   FUNC_5(VAR_3);
   FUNC_3(VAR_4, VAR_2, VAR_4->dev,
      "MAC Address is set to random\n");
  }
 }
}
