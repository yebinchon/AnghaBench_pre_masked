
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct neofb_par {int PanelDispCntlRegRead; int PanelDispCntlReg1; int state; } ;
struct fb_info {struct neofb_par* par; } ;
struct TYPE_3__ {int eax; int ebx; int ecx; } ;
typedef TYPE_1__ SMMRegisters ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_3, struct fb_info *VAR_4)
{
 struct neofb_par *VAR_5 = VAR_4->par;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;





 FUNC_1();
 VAR_10 = FUNC_3(((void*)0), 0x20) & 0x03;
 FUNC_0(&VAR_5->state);





 if (VAR_5->PanelDispCntlRegRead) {
  VAR_5->PanelDispCntlReg1 = VAR_10;
 }
 VAR_5->PanelDispCntlRegRead = !VAR_3;

 switch (VAR_3) {
 case 130:
  VAR_6 = VAR_2;
  VAR_7 = 0;
  VAR_8 = VAR_0 |
       VAR_1;
  break;
 case 132:
  VAR_6 = VAR_2;
  VAR_7 = 0;
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_2;
  VAR_7 = 0;
  VAR_8 = VAR_1;
  break;
 case 131:
  VAR_6 = VAR_2;
  VAR_7 = ((VAR_5->PanelDispCntlReg1 | VAR_10) & 0x02);
  VAR_8 = 0x00;
  break;
 case 129:
  VAR_6 = 0;
  VAR_7 = ((VAR_5->PanelDispCntlReg1 | VAR_10) & 0x02);
  VAR_8 = 0x00;
  break;
 default:

  return 1;
 }

 FUNC_1();
 VAR_9 = (FUNC_4(((void*)0), 0x01) & ~0x20) | VAR_6;
 FUNC_6(((void*)0), 0x01, VAR_9);
 VAR_9 = (FUNC_3(((void*)0), 0x20) & ~0x02) | VAR_7;
 FUNC_5(((void*)0), 0x20, VAR_9);
 VAR_9 = (FUNC_3(((void*)0), 0x01) & ~0xF0) | 0x80 | VAR_8;
 FUNC_5(((void*)0), 0x01, VAR_9);
 FUNC_0(&VAR_5->state);
 return 0;
}
