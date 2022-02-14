
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _riva_hw_state {int* attr; int* crtc; int* gra; int* seq; int misc_output; } ;
struct nvidia_par {struct _riva_hw_state ModeReg; } ;
struct fb_info {struct nvidia_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2)
{
 struct nvidia_par *VAR_3 = VAR_2->par;
 struct _riva_hw_state *VAR_4 = &VAR_3->ModeReg;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 0x10; VAR_5++)
  VAR_4->attr[VAR_5] = VAR_5;
 VAR_4->attr[0x10] = 0x41;
 VAR_4->attr[0x11] = 0xff;
 VAR_4->attr[0x12] = 0x0f;
 VAR_4->attr[0x13] = 0x00;
 VAR_4->attr[0x14] = 0x00;

 FUNC_0(VAR_4->crtc, 0x00, VAR_0);
 VAR_4->crtc[0x0a] = 0x20;
 VAR_4->crtc[0x17] = 0xe3;
 VAR_4->crtc[0x18] = 0xff;
 VAR_4->crtc[0x28] = 0x40;

 FUNC_0(VAR_4->gra, 0x00, VAR_1);
 VAR_4->gra[0x05] = 0x40;
 VAR_4->gra[0x06] = 0x05;
 VAR_4->gra[0x07] = 0x0f;
 VAR_4->gra[0x08] = 0xff;

 VAR_4->seq[0x00] = 0x03;
 VAR_4->seq[0x01] = 0x01;
 VAR_4->seq[0x02] = 0x0f;
 VAR_4->seq[0x03] = 0x00;
 VAR_4->seq[0x04] = 0x0e;

 VAR_4->misc_output = 0xeb;
}
