
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int* advertising; } ;
struct TYPE_3__ {int ieee_fc; } ;
struct bnx2x {TYPE_2__ port; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 size_t FUNC_0 (struct bnx2x*) ;

void FUNC_1(struct bnx2x *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3);

 VAR_3->port.advertising[VAR_4] &= ~(VAR_0 |
        VAR_1);
 switch (VAR_3->link_vars.ieee_fc &
  VAR_2) {
 case 128:
  VAR_3->port.advertising[VAR_4] |= (VAR_0 |
        VAR_1);
  break;

 case 129:
  VAR_3->port.advertising[VAR_4] |= VAR_0;
  break;

 default:
  break;
 }
}
