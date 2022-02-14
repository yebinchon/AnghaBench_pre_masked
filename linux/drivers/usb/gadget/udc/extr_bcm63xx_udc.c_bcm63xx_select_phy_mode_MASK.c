
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm63xx_udc {TYPE_1__* pd; } ;
struct TYPE_2__ {int port_no; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct bcm63xx_udc *VAR_10, bool VAR_11)
{
 u32 VAR_12, VAR_13 = FUNC_1(VAR_10->pd->port_no);

 if (FUNC_0()) {

  VAR_12 = FUNC_2(VAR_3);
  VAR_12 &= ~VAR_2;
  VAR_12 |= VAR_11 ? VAR_0 :
          VAR_1;
  FUNC_3(VAR_12, VAR_3);
 }

 VAR_12 = FUNC_4(VAR_4, VAR_7);
 if (VAR_11) {
  VAR_12 |= (VAR_13 << VAR_8);
  VAR_12 |= (VAR_13 << VAR_9);
 } else {
  VAR_12 &= ~(VAR_13 << VAR_8);
  VAR_12 &= ~(VAR_13 << VAR_9);
 }
 FUNC_5(VAR_4, VAR_12, VAR_7);

 VAR_12 = FUNC_4(VAR_4, VAR_5);
 if (VAR_11)
  VAR_12 |= VAR_6;
 else
  VAR_12 &= ~VAR_6;
 FUNC_5(VAR_4, VAR_12, VAR_5);
}
