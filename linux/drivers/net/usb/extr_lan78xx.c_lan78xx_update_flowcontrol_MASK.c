
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lan78xx_net {int fc_request_control; int net; TYPE_1__* udev; scalar_t__ fc_autoneg; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lan78xx_net*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct lan78xx_net*,int ,int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct lan78xx_net *VAR_9, u8 VAR_10,
          u16 VAR_11, u16 VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = 0;
 int VAR_15;
 u8 VAR_16;

 if (VAR_9->fc_autoneg)
  VAR_16 = FUNC_1(VAR_11, VAR_12);
 else
  VAR_16 = VAR_9->fc_request_control;

 if (VAR_16 & VAR_5)
  VAR_13 |= (VAR_3 | 0xFFFF);

 if (VAR_16 & VAR_4)
  VAR_13 |= VAR_2;

 if (VAR_9->udev->speed == VAR_7)
  VAR_14 = 0x817;
 else if (VAR_9->udev->speed == VAR_6)
  VAR_14 = 0x211;

 FUNC_2(VAR_9, VAR_8, VAR_9->net, "rx pause %s, tx pause %s",
    (VAR_16 & VAR_4 ? "enabled" : "disabled"),
    (VAR_16 & VAR_5 ? "enabled" : "disabled"));

 VAR_15 = FUNC_0(VAR_9, VAR_0, VAR_14);


 VAR_15 = FUNC_0(VAR_9, VAR_1, VAR_13);

 return 0;
}
