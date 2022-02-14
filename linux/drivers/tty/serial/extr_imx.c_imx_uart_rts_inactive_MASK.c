
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mctrl; } ;
struct imx_port {TYPE_1__ port; int gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct imx_port *VAR_3, u32 *VAR_4)
{
 *VAR_4 &= ~VAR_2;
 *VAR_4 |= VAR_1;

 VAR_3->port.mctrl &= ~VAR_0;
 FUNC_0(VAR_3->gpios, VAR_3->port.mctrl);
}
