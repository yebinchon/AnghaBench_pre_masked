
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_speed; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct ice_port_info {TYPE_2__ phy; } ;


 unsigned int FUNC_0 (int,unsigned int) ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_1(struct ice_port_info *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 switch (VAR_3->phy.link_info.link_speed) {
 case 133:
  VAR_5 += FUNC_0(17 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 case 128:
  VAR_5 += FUNC_0(34 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 case 129:
  VAR_5 += FUNC_0(43 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 case 130:
  VAR_5 += FUNC_0(68 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 case 131:
  VAR_5 += FUNC_0(85 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 case 132:

 default:
  VAR_5 += FUNC_0(170 * (VAR_4 + 24),
        VAR_4 + 640);
  break;
 }

 if ((VAR_5 & VAR_2) > VAR_1) {
  VAR_5 &= VAR_0;
  VAR_5 += VAR_1;
 }

 return VAR_5;
}
