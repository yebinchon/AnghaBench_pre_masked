
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm63xx_udc {TYPE_1__* pd; } ;
struct TYPE_2__ {int port_no; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct bcm63xx_udc *VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6 = FUNC_0(VAR_3->pd->port_no);

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  VAR_5 &= ~(VAR_6 << VAR_2);
 else
  VAR_5 |= (VAR_6 << VAR_2);
 FUNC_2(VAR_0, VAR_5, VAR_1);
}
