
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_ucr {TYPE_1__* pusb_intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct rtsx_ucr*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_ucr*) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_ucr *VAR_5, u8 VAR_6, u8 VAR_7)
{
 FUNC_0(&VAR_5->pusb_intf->dev, "Write 0x%x to phy register 0x%x\n",
   VAR_7, VAR_6);

 FUNC_2(VAR_5);

 FUNC_1(VAR_5, VAR_4, VAR_2, 0xFF, VAR_7);
 FUNC_1(VAR_5, VAR_4, VAR_0, 0xFF, VAR_6 & 0x0F);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x00);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x00);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x01);
 FUNC_1(VAR_5, VAR_4, VAR_0,
   0xFF, (VAR_6 >> 4) & 0x0F);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x00);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x00);
 FUNC_1(VAR_5, VAR_4, VAR_1, 0xFF, 0x01);

 return FUNC_3(VAR_5, VAR_3, 100);
}
