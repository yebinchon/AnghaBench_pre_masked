
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm63xx_udc {int dummy; } ;
struct bcm63xx_ep {int ep_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm63xx_udc*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct bcm63xx_udc *VAR_4, struct bcm63xx_ep *VAR_5,
 bool VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_3 |
  (VAR_6 ? VAR_0 : 0) |
  (VAR_5->ep_num << VAR_1);
 FUNC_0(VAR_4, VAR_7, VAR_2);
}
