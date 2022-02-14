
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short base; int mode; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned short,int) ;
 int FUNC_5 (unsigned short,unsigned char) ;

__attribute__((used)) static int FUNC_6(imm_struct * VAR_1)
{
 unsigned short VAR_2 = VAR_1->base;
 unsigned char VAR_3, VAR_4;

 switch (VAR_1->mode) {
 case 129:
  VAR_4 = 0x00;
  break;
 case 128:
  VAR_4 = 0x01;
  break;
 default:
  return 0;
 }

 FUNC_4(VAR_2, 0x04);
 FUNC_3(5);
 FUNC_5(VAR_2, VAR_4);
 FUNC_3(100);
 FUNC_4(VAR_2, 0x06);
 FUNC_3(5);
 VAR_3 = (FUNC_2(VAR_2) & 0x20) ? 0 : 1;
 FUNC_3(5);
 FUNC_4(VAR_2, 0x07);
 FUNC_3(5);
 FUNC_4(VAR_2, 0x06);

 if (VAR_3) {
  FUNC_1
      ("IMM: IEEE1284 negotiate indicates no data available.\n");
  FUNC_0(VAR_1, VAR_0);
 }
 return VAR_3;
}
