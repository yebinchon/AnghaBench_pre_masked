
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lpc32xx_udc {scalar_t__ atx; int isp1301_i2c_client; int dev; TYPE_1__* board; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ vbus_drv_pol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct lpc32xx_udc *VAR_17)
{
 u8 VAR_18;
 s32 VAR_19, VAR_20;

 VAR_19 = FUNC_1(VAR_17->isp1301_i2c_client, 0x00);
 VAR_20 = FUNC_1(VAR_17->isp1301_i2c_client, 0x02);

 if (VAR_19 == 0x0483 && VAR_20 == 0xa0c4)
  VAR_17->atx = VAR_16;





 FUNC_2(VAR_17->isp1301_i2c_client,
  (VAR_3 | VAR_6),
  VAR_9);


 FUNC_2(VAR_17->isp1301_i2c_client,
  (VAR_3 | VAR_6), ~0);
 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_3, (VAR_8 | VAR_7));




 FUNC_2(VAR_17->isp1301_i2c_client,
  (VAR_4 | VAR_6), ~0);

 VAR_18 = VAR_10;
 if (VAR_17->atx != VAR_16)
  VAR_18 |= VAR_11;
 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_4, VAR_18);


 if (VAR_17->board->vbus_drv_pol != 0)
  FUNC_2(VAR_17->isp1301_i2c_client,
   VAR_5, VAR_15);
 else
  FUNC_2(VAR_17->isp1301_i2c_client,
   VAR_5 | VAR_6,
   VAR_15);




 FUNC_2(VAR_17->isp1301_i2c_client,
  (VAR_5 | VAR_6), ~0);
 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_5,
  (0 | VAR_12 | VAR_13));


 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_5, VAR_14);
 FUNC_3(1);
 FUNC_2(VAR_17->isp1301_i2c_client,
  (VAR_5 | VAR_6),
  VAR_14);

 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_1 | VAR_6, ~0);

 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_0 | VAR_6, ~0);
 FUNC_2(VAR_17->isp1301_i2c_client,
  VAR_2 | VAR_6, ~0);

 FUNC_0(VAR_17->dev, "ISP1301 Vendor ID  : 0x%04x\n", VAR_19);
 FUNC_0(VAR_17->dev, "ISP1301 Product ID : 0x%04x\n", VAR_20);
 FUNC_0(VAR_17->dev, "ISP1301 Version ID : 0x%04x\n",
   FUNC_1(VAR_17->isp1301_i2c_client, 0x14));

}
