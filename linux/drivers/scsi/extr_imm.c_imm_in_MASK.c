
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned short base; int mode; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (unsigned short,char*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (unsigned short,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned short) ;
 int FUNC_11 (unsigned short,int) ;

__attribute__((used)) static int FUNC_12(imm_struct *VAR_1, char *VAR_2, int VAR_3)
{
 unsigned short VAR_4 = VAR_1->base;
 int VAR_5 = FUNC_5(VAR_1);






 if ((VAR_5 & 0x18) != 0x18) {
  FUNC_3(VAR_1, VAR_0);
  return 0;
 }
 switch (VAR_1->mode) {
 case 129:

  VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_3);
  FUNC_11(VAR_4, 0xc);
  break;

 case 128:

  VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
  FUNC_11(VAR_4, 0xc);
  break;

 case 131:
 case 132:
 case 130:
  FUNC_1(VAR_4);
  FUNC_11(VAR_4, 0x24);




  if (!(((long) VAR_2 | VAR_3) & 0x03))
   FUNC_7(VAR_4 + 4, VAR_2, VAR_3 >> 2);

  else
   FUNC_6(VAR_4 + 4, VAR_2, VAR_3);
  FUNC_11(VAR_4, 0x2c);
  VAR_5 = !(FUNC_10(VAR_4) & 0x01);
  FUNC_11(VAR_4, 0x2c);
  FUNC_0(VAR_1);
  break;

 default:
  FUNC_9("IMM: bug in imm_ins()\n");
  VAR_5 = 0;
  break;
 }
 return VAR_5;
}
