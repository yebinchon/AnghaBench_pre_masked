
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_udc {int isp1301_i2c_client; scalar_t__ pullup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct lpc32xx_udc *VAR_3)
{
 if (VAR_3->pullup)

  FUNC_0(VAR_3->isp1301_i2c_client,
   VAR_0, VAR_2);
 else

  FUNC_0(VAR_3->isp1301_i2c_client,
   VAR_0 | VAR_1,
   VAR_2);
}
