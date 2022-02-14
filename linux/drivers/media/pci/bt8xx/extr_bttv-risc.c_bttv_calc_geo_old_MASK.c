
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv_tvnorm {int swidth; int totalwidth; int scaledtwidth; int vdelay; int hdelayx1; int sheight; int vtotal; } ;
struct bttv_geometry {int hscale; int hdelay; int vscale; int crop; int vdelay; int width; int sheight; int vtc; int comb; int vtotal; } ;
struct bttv {scalar_t__ input; scalar_t__ dig; scalar_t__ opt_combfilter; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct bttv *VAR_1, struct bttv_geometry *VAR_2,
    int VAR_3, int VAR_4, int VAR_5,
    const struct bttv_tvnorm *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;

 int VAR_10 = VAR_6->swidth;
 int VAR_11 = VAR_6->totalwidth;
 int VAR_12 = VAR_6->scaledtwidth;

 if (VAR_1->input == VAR_1->dig) {
  VAR_10 = 720;
  VAR_11 = 858;
  VAR_12 = 858;
 }

 VAR_9 = VAR_6->vdelay;

 VAR_7 = (VAR_3*VAR_12)/VAR_10;
 VAR_2->hscale = ((VAR_11*4096UL)/VAR_7-4096);
 VAR_2->hdelay = VAR_6->hdelayx1;
 VAR_2->hdelay = (VAR_2->hdelay*VAR_3)/VAR_10;
 VAR_2->hdelay &= 0x3fe;
 VAR_8 = ((VAR_6->sheight >> (VAR_5?0:1))*512)/VAR_4 - 512;
 VAR_2->vscale = (0x10000UL-VAR_8) & 0x1fff;
 VAR_2->crop = ((VAR_3>>8)&0x03) | ((VAR_2->hdelay>>6)&0x0c) |
  ((VAR_6->sheight>>4)&0x30) | ((VAR_9>>2)&0xc0);
 VAR_2->vscale |= VAR_5 ? (VAR_0<<8) : 0;
 VAR_2->vdelay = VAR_9;
 VAR_2->width = VAR_3;
 VAR_2->sheight = VAR_6->sheight;
 VAR_2->vtotal = VAR_6->vtotal;

 if (VAR_1->opt_combfilter) {
  VAR_2->vtc = (VAR_3 < 193) ? 2 : ((VAR_3 < 385) ? 1 : 0);
  VAR_2->comb = (VAR_3 < 769) ? 1 : 0;
 } else {
  VAR_2->vtc = 0;
  VAR_2->comb = 0;
 }
}
