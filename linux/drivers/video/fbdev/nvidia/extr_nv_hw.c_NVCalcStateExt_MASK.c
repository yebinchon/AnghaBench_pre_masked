
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvidia_par {int Architecture; int Chipset; int CursorStart; int PFB; int PRAMDAC0; int FlatPanel; scalar_t__ twoStagePLL; } ;
struct TYPE_3__ {int bpp; int width; int height; int arbitration0; int arbitration1; int cursor0; int cursor1; int cursor2; int pllsel; int config; int general; int repaint1; int control; int repaint0; int pixel; int pll; int pllB; } ;
typedef TYPE_1__ RIVA_HW_STATE ;


 int FUNC_0 (int,int*,int *,struct nvidia_par*) ;
 int FUNC_1 (int,int*,int *,int *,struct nvidia_par*) ;
 int VAR_0 ;





 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int,int*,int*,struct nvidia_par*) ;
 int FUNC_4 (int,int,int*,int*,struct nvidia_par*) ;
 int FUNC_5 (struct nvidia_par*,int*,int*) ;
 int FUNC_6 (int,int,int*,int*,struct nvidia_par*) ;

void FUNC_7(struct nvidia_par *VAR_1,
      RIVA_HW_STATE * VAR_2,
      int VAR_3,
      int VAR_4,
      int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;



 VAR_2->bpp = VAR_3;
 VAR_2->width = VAR_4;
 VAR_2->height = VAR_6;



 VAR_9 = (VAR_3 + 1) / 8;
 if (VAR_1->twoStagePLL)
  FUNC_1(VAR_7, &VAR_10, &VAR_2->pll, &VAR_2->pllB,
     VAR_1);
 else
  FUNC_0(VAR_7, &VAR_10, &VAR_2->pll, VAR_1);

 switch (VAR_1->Architecture) {
 case 132:
  FUNC_6(VAR_10,
          VAR_9 * 8,
          &(VAR_2->arbitration0),
          &(VAR_2->arbitration1), VAR_1);
  VAR_2->cursor0 = 0x00;
  VAR_2->cursor1 = 0xbC;
  if (VAR_8 & VAR_0)
   VAR_2->cursor1 |= 2;
  VAR_2->cursor2 = 0x00000000;
  VAR_2->pllsel = 0x10000700;
  VAR_2->config = 0x00001114;
  VAR_2->general = VAR_3 == 16 ? 0x00101100 : 0x00100100;
  VAR_2->repaint1 = VAR_5 < 1280 ? 0x04 : 0x00;
  break;
 case 128:
  if (!VAR_1->FlatPanel)
   VAR_2->control = FUNC_2(VAR_1->PRAMDAC0, 0x0580) &
    0xeffffeff;

 case 131:
 case 130:
 case 129:
 default:
  if ((VAR_1->Chipset & 0xfff0) == 0x0240 ||
      (VAR_1->Chipset & 0xfff0) == 0x03d0) {
   VAR_2->arbitration0 = 256;
   VAR_2->arbitration1 = 0x0480;
  } else if (((VAR_1->Chipset & 0xffff) == 0x01A0) ||
      ((VAR_1->Chipset & 0xffff) == 0x01f0)) {
   FUNC_3(VAR_10,
       VAR_9 * 8,
       &(VAR_2->arbitration0),
       &(VAR_2->arbitration1),
       VAR_1);
  } else if (VAR_1->Architecture < 129) {
   FUNC_4(VAR_10,
            VAR_9 * 8,
            &(VAR_2->arbitration0),
            &(VAR_2->arbitration1),
            VAR_1);
  } else {
   FUNC_5(VAR_1,
            &(VAR_2->arbitration0),
            &(VAR_2->arbitration1));
  }

  VAR_2->cursor0 = 0x80 | (VAR_1->CursorStart >> 17);
  VAR_2->cursor1 = (VAR_1->CursorStart >> 11) << 2;
  VAR_2->cursor2 = VAR_1->CursorStart >> 24;
  if (VAR_8 & VAR_0)
   VAR_2->cursor1 |= 2;
  VAR_2->pllsel = 0x10000700;
  VAR_2->config = FUNC_2(VAR_1->PFB, 0x00000200);
  VAR_2->general = VAR_3 == 16 ? 0x00101100 : 0x00100100;
  VAR_2->repaint1 = VAR_5 < 1280 ? 0x04 : 0x00;
  break;
 }

 if (VAR_3 != 8)
  VAR_2->general |= 0x00000030;

 VAR_2->repaint0 = (((VAR_4 / 8) * VAR_9) & 0x700) >> 3;
 VAR_2->pixel = (VAR_9 > 2) ? 3 : VAR_9;
}
