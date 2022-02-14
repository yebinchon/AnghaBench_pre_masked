
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int type; int num_micbias; int* num_childbias; } ;
__attribute__((used)) static void FUNC_0(struct madera *VAR_0)
{




 switch (VAR_0->type) {
 case 135:
  VAR_0->num_micbias = 1;
  VAR_0->num_childbias[0] = 3;
  return;
 case 134:
  VAR_0->num_micbias = 2;
  VAR_0->num_childbias[0] = 2;
  VAR_0->num_childbias[1] = 2;
  return;
 case 133:
 case 128:
  VAR_0->num_micbias = 4;

  return;
 case 132:
 case 131:
  VAR_0->num_micbias = 2;
  VAR_0->num_childbias[0] = 4;
  VAR_0->num_childbias[1] = 4;
  return;
 case 136:
 case 130:
 case 129:
  VAR_0->num_micbias = 2;
  VAR_0->num_childbias[0] = 4;
  VAR_0->num_childbias[1] = 2;
  return;
 default:
  return;
 }
}
