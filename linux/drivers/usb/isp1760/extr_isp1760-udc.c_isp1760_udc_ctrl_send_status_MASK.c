
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_udc {int ep0_state; } ;
struct isp1760_ep {struct isp1760_udc* udc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct isp1760_udc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct isp1760_ep *VAR_6, int VAR_7)
{
 struct isp1760_udc *VAR_8 = VAR_6->udc;






 FUNC_1(VAR_8, VAR_2, FUNC_0(0) |
     (VAR_7 == VAR_5 ? 0 : VAR_1));
 FUNC_1(VAR_8, VAR_0, VAR_3);





 VAR_8->ep0_state = VAR_4;
}
