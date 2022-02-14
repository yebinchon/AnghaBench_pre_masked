
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct bttv {int use_i2c_hw; TYPE_1__ c; } ;
struct TYPE_4__ {int has_dvb; } ;
 int FUNC_0 (struct bttv*,int) ;
 int FUNC_1 (struct bttv*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct bttv*) ;
 int FUNC_3 (struct bttv*) ;
 int FUNC_4 (struct bttv*) ;

void FUNC_5(struct bttv *VAR_1)
{
 switch (VAR_1->c.type) {
 case 135:
 case 134:
  FUNC_0(VAR_1,5);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_1,20);
  break;
 case 136:
  FUNC_0(VAR_1,11);
  break;
 case 133:
  FUNC_4(VAR_1);
  break;
 case 130:
 case 137:
 case 131:
  VAR_1->use_i2c_hw = 1;
  break;
 case 138:
  FUNC_3( VAR_1 );
  break;
 case 132:
  FUNC_2(VAR_1);
  break;

 }
 if (!VAR_0[VAR_1->c.type].has_dvb)
  FUNC_1(VAR_1);
}
