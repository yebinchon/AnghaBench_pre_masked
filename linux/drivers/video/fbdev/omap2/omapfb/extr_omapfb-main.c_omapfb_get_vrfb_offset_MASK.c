
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vrfb {unsigned int yoffset; unsigned int xoffset; unsigned int bytespp; } ;
struct omapfb_info {TYPE_1__* region; } ;
struct TYPE_2__ {struct vrfb vrfb; } ;


 int FUNC_0 () ;




 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_1(const struct omapfb_info *VAR_1, int VAR_2)
{
 const struct vrfb *VAR_3 = &VAR_1->region->vrfb;
 unsigned VAR_4;

 switch (VAR_2) {
 case 128:
  VAR_4 = 0;
  break;
 case 130:
  VAR_4 = VAR_3->yoffset;
  break;
 case 129:
  VAR_4 = VAR_3->yoffset * VAR_0 + VAR_3->xoffset;
  break;
 case 131:
  VAR_4 = VAR_3->xoffset * VAR_0;
  break;
 default:
  FUNC_0();
  return 0;
 }

 VAR_4 *= VAR_3->bytespp;

 return VAR_4;
}
