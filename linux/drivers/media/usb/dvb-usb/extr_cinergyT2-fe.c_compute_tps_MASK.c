
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dtv_frontend_properties {int code_rate_HP; int code_rate_LP; int modulation; int transmission_mode; int guard_interval; int hierarchy; } ;
__attribute__((used)) static uint16_t FUNC_0(struct dtv_frontend_properties *VAR_0)
{
 uint16_t VAR_1 = 0;

 switch (VAR_0->code_rate_HP) {
 case 145:
  VAR_1 |= (1 << 7);
  break;
 case 144:
  VAR_1 |= (2 << 7);
  break;
 case 143:
  VAR_1 |= (3 << 7);
  break;
 case 142:
  VAR_1 |= (4 << 7);
  break;
 case 146:
 case 141:
 default:
                       ;
 }

 switch (VAR_0->code_rate_LP) {
 case 145:
  VAR_1 |= (1 << 4);
  break;
 case 144:
  VAR_1 |= (2 << 4);
  break;
 case 143:
  VAR_1 |= (3 << 4);
  break;
 case 142:
  VAR_1 |= (4 << 4);
  break;
 case 146:
 case 141:
 default:
                       ;
 }

 switch (VAR_0->modulation) {
 case 132:
  VAR_1 |= (1 << 13);
  break;
 case 131:
  VAR_1 |= (2 << 13);
  break;
 case 130:
 default:
                        ;
 }

 switch (VAR_0->transmission_mode) {
 case 128:
  VAR_1 |= (1 << 0);
  break;
 case 129:
 default:
                       ;
 }

 switch (VAR_0->guard_interval) {
 case 140:
  VAR_1 |= (1 << 2);
  break;
 case 137:
  VAR_1 |= (2 << 2);
  break;
 case 138:
  VAR_1 |= (3 << 2);
  break;
 case 139:
 default:
                       ;
 }

 switch (VAR_0->hierarchy) {
 case 136:
  VAR_1 |= (1 << 10);
  break;
 case 135:
  VAR_1 |= (2 << 10);
  break;
 case 134:
  VAR_1 |= (3 << 10);
  break;
 case 133:
 default:
                        ;
 }

 return VAR_1;
}
