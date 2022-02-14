
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct lan78xx_net {TYPE_2__* net; TYPE_1__* udev; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (struct lan78xx_net*,int ,int ,int*) ;
 scalar_t__ FUNC_7 (struct lan78xx_net*,int ,int ,int*) ;
 int FUNC_8 (struct lan78xx_net*,int ,int*) ;
 int FUNC_9 (struct lan78xx_net*,int ,int) ;
 int FUNC_10 (struct lan78xx_net*,int ,TYPE_2__*,char*) ;

__attribute__((used)) static void FUNC_11(struct lan78xx_net *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;
 u8 VAR_10[6];

 VAR_9 = FUNC_8(VAR_6, VAR_4, &VAR_7);
 VAR_9 = FUNC_8(VAR_6, VAR_3, &VAR_8);

 VAR_10[0] = VAR_7 & 0xFF;
 VAR_10[1] = (VAR_7 >> 8) & 0xFF;
 VAR_10[2] = (VAR_7 >> 16) & 0xFF;
 VAR_10[3] = (VAR_7 >> 24) & 0xFF;
 VAR_10[4] = VAR_8 & 0xFF;
 VAR_10[5] = (VAR_8 >> 8) & 0xFF;

 if (!FUNC_5(VAR_10)) {
  if (!FUNC_2(&VAR_6->udev->dev, VAR_10)) {

   FUNC_10(VAR_6, VAR_5, VAR_6->net,
      "MAC address read from Device Tree");
  } else if (((FUNC_6(VAR_6, VAR_0,
       VAR_1, VAR_10) == 0) ||
       (FUNC_7(VAR_6, VAR_0,
           VAR_1, VAR_10) == 0)) &&
      FUNC_5(VAR_10)) {

   FUNC_10(VAR_6, VAR_5, VAR_6->net,
      "MAC address read from EEPROM");
  } else {

   FUNC_3(VAR_10);
   FUNC_10(VAR_6, VAR_5, VAR_6->net,
      "MAC address set to random addr");
  }

  VAR_7 = VAR_10[0] | (VAR_10[1] << 8) |
     (VAR_10[2] << 16) | (VAR_10[3] << 24);
  VAR_8 = VAR_10[4] | (VAR_10[5] << 8);

  VAR_9 = FUNC_9(VAR_6, VAR_4, VAR_7);
  VAR_9 = FUNC_9(VAR_6, VAR_3, VAR_8);
 }

 VAR_9 = FUNC_9(VAR_6, FUNC_1(0), VAR_7);
 VAR_9 = FUNC_9(VAR_6, FUNC_0(0), VAR_8 | VAR_2);

 FUNC_4(VAR_6->net->dev_addr, VAR_10);
}
