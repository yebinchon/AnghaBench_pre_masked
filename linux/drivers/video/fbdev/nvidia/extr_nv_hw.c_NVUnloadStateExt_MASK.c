
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvidia_par {scalar_t__ Architecture; int Chipset; int PCIO; scalar_t__ FlatPanel; int PRAMDAC; scalar_t__ twoHeads; int PCRTC; int PCRTC0; int PRAMDAC0; int PFB; scalar_t__ twoStagePLL; } ;
struct TYPE_3__ {int repaint0; int repaint1; int screen; int pixel; int horiz; int fifo; int arbitration0; int arbitration1; int cursor0; int cursor1; int cursor2; int interlace; int crtcOwner; int extra; int timingH; int timingV; void* dither; void* cursorConfig; void* head2; void* head; void* control; void* config; void* scale; void* general; void* pllsel; void* vpll2B; void* vpllB; void* vpll2; void* vpll; } ;
typedef TYPE_1__ RIVA_HW_STATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(struct nvidia_par *VAR_3, RIVA_HW_STATE * VAR_4) {
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x19);
 VAR_4->repaint0 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x1A);
 VAR_4->repaint1 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x25);
 VAR_4->screen = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x28);
 VAR_4->pixel = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x2D);
 VAR_4->horiz = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x1C);
 VAR_4->fifo = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x1B);
 VAR_4->arbitration0 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x20);
 VAR_4->arbitration1 = FUNC_1(VAR_3->PCIO, 0x03D5);

 if(VAR_3->Architecture >= VAR_1) {
  FUNC_2(VAR_3->PCIO, 0x03D4, 0x47);
  VAR_4->arbitration1 |= (FUNC_1(VAR_3->PCIO, 0x03D5) & 1) << 8;
 }

 FUNC_2(VAR_3->PCIO, 0x03D4, 0x30);
 VAR_4->cursor0 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x31);
 VAR_4->cursor1 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x2F);
 VAR_4->cursor2 = FUNC_1(VAR_3->PCIO, 0x03D5);
 FUNC_2(VAR_3->PCIO, 0x03D4, 0x39);
 VAR_4->interlace = FUNC_1(VAR_3->PCIO, 0x03D5);
 VAR_4->vpll = FUNC_0(VAR_3->PRAMDAC0, 0x0508);
 if (VAR_3->twoHeads)
  VAR_4->vpll2 = FUNC_0(VAR_3->PRAMDAC0, 0x0520);
 if (VAR_3->twoStagePLL) {
  VAR_4->vpllB = FUNC_0(VAR_3->PRAMDAC0, 0x0578);
  VAR_4->vpll2B = FUNC_0(VAR_3->PRAMDAC0, 0x057C);
 }
 VAR_4->pllsel = FUNC_0(VAR_3->PRAMDAC0, 0x050C);
 VAR_4->general = FUNC_0(VAR_3->PRAMDAC, 0x0600);
 VAR_4->scale = FUNC_0(VAR_3->PRAMDAC, 0x0848);
 VAR_4->config = FUNC_0(VAR_3->PFB, 0x0200);

 if (VAR_3->Architecture >= VAR_2 && !VAR_3->FlatPanel)
  VAR_4->control = FUNC_0(VAR_3->PRAMDAC0, 0x0580);

 if (VAR_3->Architecture >= VAR_0) {
  if (VAR_3->twoHeads) {
   VAR_4->head = FUNC_0(VAR_3->PCRTC0, 0x0860);
   VAR_4->head2 = FUNC_0(VAR_3->PCRTC0, 0x2860);
   FUNC_2(VAR_3->PCIO, 0x03D4, 0x44);
   VAR_4->crtcOwner = FUNC_1(VAR_3->PCIO, 0x03D5);
  }
  FUNC_2(VAR_3->PCIO, 0x03D4, 0x41);
  VAR_4->extra = FUNC_1(VAR_3->PCIO, 0x03D5);
  VAR_4->cursorConfig = FUNC_0(VAR_3->PCRTC, 0x0810);

  if ((VAR_3->Chipset & 0x0ff0) == 0x0110) {
   VAR_4->dither = FUNC_0(VAR_3->PRAMDAC, 0x0528);
  } else if (VAR_3->twoHeads) {
   VAR_4->dither = FUNC_0(VAR_3->PRAMDAC, 0x083C);
  }

  if (VAR_3->FlatPanel) {
   FUNC_2(VAR_3->PCIO, 0x03D4, 0x53);
   VAR_4->timingH = FUNC_1(VAR_3->PCIO, 0x03D5);
   FUNC_2(VAR_3->PCIO, 0x03D4, 0x54);
   VAR_4->timingV = FUNC_1(VAR_3->PCIO, 0x03D5);
  }
 }
}
