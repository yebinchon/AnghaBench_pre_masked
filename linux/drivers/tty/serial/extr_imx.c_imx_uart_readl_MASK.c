
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int membase; } ;
struct imx_port {int ucr1; int ucr2; int ucr3; int ucr4; int ufcr; TYPE_1__ port; } ;




 int VAR_0 ;



 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct imx_port *VAR_1, u32 VAR_2)
{
 switch (VAR_2) {
 case 132:
  return VAR_1->ucr1;
  break;
 case 131:






  if (!(VAR_1->ucr2 & VAR_0))
   VAR_1->ucr2 = FUNC_0(VAR_1->port.membase + VAR_2);
  return VAR_1->ucr2;
  break;
 case 130:
  return VAR_1->ucr3;
  break;
 case 129:
  return VAR_1->ucr4;
  break;
 case 128:
  return VAR_1->ufcr;
  break;
 default:
  return FUNC_0(VAR_1->port.membase + VAR_2);
 }
}
