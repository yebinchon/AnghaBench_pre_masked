
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_port {int flow_ctrl; } ;





 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(struct ksz_port *VAR_1, u16 VAR_2)
{
 VAR_2 &= ~VAR_0;
 switch (VAR_1->flow_ctrl) {
 case 130:
  VAR_2 |= VAR_0;
  break;

 case 128:
 case 129:
 default:
  break;
 }
 return VAR_2;
}
