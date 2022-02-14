
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Architecture; int Chipset; int PRAMDAC; int PCRTC; int PCIO; int PCRTC0; int twoHeads; int PGRAPH; int PFB; int PRAMDAC0; } ;
struct TYPE_5__ {void* dither; void* cursorConfig; void* extra; void* crtcOwner; void* head2; void* head; void* pitch3; void* pitch2; void* pitch1; void* pitch0; void* offset3; void* offset2; void* offset1; void* offset0; void* config; void* scale; void* general; void* pllsel; void* vpll2; void* vpll; void* interlace; void* cursor2; void* cursor1; void* cursor0; void* arbitration1; void* arbitration0; void* horiz; void* pixel; void* screen; void* repaint1; void* repaint0; } ;
typedef TYPE_1__ RIVA_HW_STATE ;
typedef TYPE_2__ RIVA_HW_INST ;







 void* FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3
(
    RIVA_HW_INST *VAR_0,
    RIVA_HW_STATE *VAR_1
)
{



    FUNC_2(VAR_0->PCIO, 0x03D4, 0x19);
    VAR_1->repaint0 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x1A);
    VAR_1->repaint1 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x25);
    VAR_1->screen = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x28);
    VAR_1->pixel = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x2D);
    VAR_1->horiz = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x1B);
    VAR_1->arbitration0 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x20);
    VAR_1->arbitration1 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x30);
    VAR_1->cursor0 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x31);
    VAR_1->cursor1 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x2F);
    VAR_1->cursor2 = FUNC_1(VAR_0->PCIO, 0x03D5);
    FUNC_2(VAR_0->PCIO, 0x03D4, 0x39);
    VAR_1->interlace = FUNC_1(VAR_0->PCIO, 0x03D5);
    VAR_1->vpll = FUNC_0(VAR_0->PRAMDAC0, 0x00000508);
    VAR_1->vpll2 = FUNC_0(VAR_0->PRAMDAC0, 0x00000520);
    VAR_1->pllsel = FUNC_0(VAR_0->PRAMDAC0, 0x0000050C);
    VAR_1->general = FUNC_0(VAR_0->PRAMDAC, 0x00000600);
    VAR_1->scale = FUNC_0(VAR_0->PRAMDAC, 0x00000848);
    VAR_1->config = FUNC_0(VAR_0->PFB, 0x00000200);
    switch (VAR_0->Architecture)
    {
        case 132:
            VAR_1->offset0 = FUNC_0(VAR_0->PGRAPH, 0x00000630);
            VAR_1->offset1 = FUNC_0(VAR_0->PGRAPH, 0x00000634);
            VAR_1->offset2 = FUNC_0(VAR_0->PGRAPH, 0x00000638);
            VAR_1->offset3 = FUNC_0(VAR_0->PGRAPH, 0x0000063C);
            VAR_1->pitch0 = FUNC_0(VAR_0->PGRAPH, 0x00000650);
            VAR_1->pitch1 = FUNC_0(VAR_0->PGRAPH, 0x00000654);
            VAR_1->pitch2 = FUNC_0(VAR_0->PGRAPH, 0x00000658);
            VAR_1->pitch3 = FUNC_0(VAR_0->PGRAPH, 0x0000065C);
            break;
        case 131:
            VAR_1->offset0 = FUNC_0(VAR_0->PGRAPH, 0x00000640);
            VAR_1->offset1 = FUNC_0(VAR_0->PGRAPH, 0x00000644);
            VAR_1->offset2 = FUNC_0(VAR_0->PGRAPH, 0x00000648);
            VAR_1->offset3 = FUNC_0(VAR_0->PGRAPH, 0x0000064C);
            VAR_1->pitch0 = FUNC_0(VAR_0->PGRAPH, 0x00000670);
            VAR_1->pitch1 = FUNC_0(VAR_0->PGRAPH, 0x00000674);
            VAR_1->pitch2 = FUNC_0(VAR_0->PGRAPH, 0x00000678);
            VAR_1->pitch3 = FUNC_0(VAR_0->PGRAPH, 0x0000067C);
            break;
        case 130:
        case 129:
        case 128:
            VAR_1->offset0 = FUNC_0(VAR_0->PGRAPH, 0x00000640);
            VAR_1->offset1 = FUNC_0(VAR_0->PGRAPH, 0x00000644);
            VAR_1->offset2 = FUNC_0(VAR_0->PGRAPH, 0x00000648);
            VAR_1->offset3 = FUNC_0(VAR_0->PGRAPH, 0x0000064C);
            VAR_1->pitch0 = FUNC_0(VAR_0->PGRAPH, 0x00000670);
            VAR_1->pitch1 = FUNC_0(VAR_0->PGRAPH, 0x00000674);
            VAR_1->pitch2 = FUNC_0(VAR_0->PGRAPH, 0x00000678);
            VAR_1->pitch3 = FUNC_0(VAR_0->PGRAPH, 0x0000067C);
            if(VAR_0->twoHeads) {
               VAR_1->head = FUNC_0(VAR_0->PCRTC0, 0x00000860);
               VAR_1->head2 = FUNC_0(VAR_0->PCRTC0, 0x00002860);
               FUNC_2(VAR_0->PCIO, 0x03D4, 0x44);
               VAR_1->crtcOwner = FUNC_1(VAR_0->PCIO, 0x03D5);
            }
            FUNC_2(VAR_0->PCIO, 0x03D4, 0x41);
            VAR_1->extra = FUNC_1(VAR_0->PCIO, 0x03D5);
            VAR_1->cursorConfig = FUNC_0(VAR_0->PCRTC, 0x00000810);

            if((VAR_0->Chipset & 0x0ff0) == 0x0110) {
                VAR_1->dither = FUNC_0(VAR_0->PRAMDAC, 0x0528);
            } else
            if((VAR_0->Chipset & 0x0ff0) >= 0x0170) {
                VAR_1->dither = FUNC_0(VAR_0->PRAMDAC, 0x083C);
            }
            break;
    }
}
