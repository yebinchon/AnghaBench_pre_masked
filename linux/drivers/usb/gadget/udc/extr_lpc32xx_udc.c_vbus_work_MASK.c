
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lpc32xx_udc {scalar_t__ enabled; int vbus; int last_vbus; int gadget; int isp1301_i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct lpc32xx_udc *VAR_6)
{
 u8 VAR_7;

 if (VAR_6->enabled != 0) {

  FUNC_1(VAR_6->isp1301_i2c_client,
   VAR_3, VAR_5);


  FUNC_3(100);


  FUNC_1(VAR_6->isp1301_i2c_client,
   VAR_3 | VAR_4,
   VAR_5);


  FUNC_1(VAR_6->isp1301_i2c_client,
   VAR_1 |
   VAR_4, ~0);


  VAR_7 = FUNC_0(VAR_6->isp1301_i2c_client,
       VAR_2);


  if (VAR_7 & VAR_0)
   VAR_6->vbus = 1;
  else
   VAR_6->vbus = 0;


  if (VAR_6->last_vbus != VAR_6->vbus) {
   VAR_6->last_vbus = VAR_6->vbus;
   FUNC_2(&VAR_6->gadget, VAR_6->vbus);
  }
 }
}
