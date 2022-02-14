
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {int ucr1; int ucr2; int ucr3; int ucr4; int ufcr; TYPE_1__ port; } ;







 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct imx_port *VAR_0, u32 VAR_1, u32 VAR_2)
{
 switch (VAR_2) {
 case 132:
  VAR_0->ucr1 = VAR_1;
  break;
 case 131:
  VAR_0->ucr2 = VAR_1;
  break;
 case 130:
  VAR_0->ucr3 = VAR_1;
  break;
 case 129:
  VAR_0->ucr4 = VAR_1;
  break;
 case 128:
  VAR_0->ufcr = VAR_1;
  break;
 default:
  break;
 }
 FUNC_0(VAR_1, VAR_0->port.membase + VAR_2);
}
