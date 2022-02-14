
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_rect {unsigned int left; scalar_t__ top; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {scalar_t__ top; } ;
struct TYPE_4__ {unsigned int left; scalar_t__ top; scalar_t__ width; scalar_t__ height; } ;
struct TYPE_6__ {TYPE_2__ bounds; TYPE_1__ defrect; } ;
struct bttv_tvnorm {unsigned int swidth; int vtotal; TYPE_3__ cropcap; } ;
struct bttv_geometry {unsigned int width; unsigned int hscale; unsigned int hdelay; unsigned int sheight; scalar_t__ vdelay; int vscale; int crop; int vtc; int comb; int vtotal; } ;
struct bttv {scalar_t__ input; scalar_t__ dig; scalar_t__ opt_combfilter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bttv*,struct bttv_geometry*,unsigned int,unsigned int,int,struct bttv_tvnorm const*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2 (struct bttv * VAR_2,
    struct bttv_geometry * VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5,
    int VAR_6,
    const struct bttv_tvnorm * VAR_7,
    const struct v4l2_rect * VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;

 if ((VAR_8->left == VAR_7->cropcap.defrect.left
      && VAR_8->top == VAR_7->cropcap.defrect.top
      && VAR_8->width == VAR_7->cropcap.defrect.width
      && VAR_8->height == VAR_7->cropcap.defrect.height
      && VAR_4 <= VAR_7->swidth )
     || VAR_2->input == VAR_2->dig) {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
  return;
 }



 VAR_9 = FUNC_1((unsigned int) VAR_8->width, VAR_4 * 16);
 VAR_10 = FUNC_1((unsigned int) VAR_8->height, VAR_5 * 16);

 VAR_3->width = VAR_4;
 VAR_3->hscale = (VAR_9 * 4096U + (VAR_4 >> 1)) / VAR_4 - 4096;

 VAR_3->hdelay = ((VAR_8->left * VAR_4 + VAR_9) / VAR_9) & ~1;

 VAR_3->sheight = VAR_10;
 VAR_3->vdelay = VAR_8->top - VAR_7->cropcap.bounds.top + VAR_1;
 VAR_11 = VAR_10 >> !VAR_6;
 VAR_11 = (VAR_11 * 512U + (VAR_5 >> 1)) / VAR_5 - 512;
 VAR_3->vscale = (0x10000UL - VAR_11) & 0x1fff;
 VAR_3->vscale |= VAR_6 ? (VAR_0 << 8) : 0;
 VAR_3->vtotal = VAR_7->vtotal;

 VAR_3->crop = (((VAR_3->width >> 8) & 0x03) |
       ((VAR_3->hdelay >> 6) & 0x0c) |
       ((VAR_3->sheight >> 4) & 0x30) |
       ((VAR_3->vdelay >> 2) & 0xc0));

 if (VAR_2->opt_combfilter) {
  VAR_3->vtc = (VAR_4 < 193) ? 2 : ((VAR_4 < 385) ? 1 : 0);
  VAR_3->comb = (VAR_4 < 769) ? 1 : 0;
 } else {
  VAR_3->vtc = 0;
  VAR_3->comb = 0;
 }
}
