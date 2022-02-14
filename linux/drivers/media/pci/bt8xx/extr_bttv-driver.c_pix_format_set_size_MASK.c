
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {unsigned int width; unsigned int height; unsigned int bytesperline; unsigned int sizeimage; } ;
struct bttv_format {int flags; unsigned int depth; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct v4l2_pix_format * VAR_1,
    const struct bttv_format * VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 VAR_1->width = VAR_3;
 VAR_1->height = VAR_4;

 if (VAR_2->flags & VAR_0) {
  VAR_1->bytesperline = VAR_3;
  VAR_1->sizeimage = (VAR_3 * VAR_4 * VAR_2->depth) >> 3;
 } else {
  VAR_1->bytesperline = (VAR_3 * VAR_2->depth) >> 3;
  VAR_1->sizeimage = VAR_4 * VAR_1->bytesperline;
 }
}
