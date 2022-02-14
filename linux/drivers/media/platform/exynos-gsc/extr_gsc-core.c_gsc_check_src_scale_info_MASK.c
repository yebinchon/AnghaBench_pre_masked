
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gsc_variant {int dummy; } ;
struct TYPE_4__ {int width; int height; } ;
struct gsc_frame {TYPE_2__ crop; TYPE_1__* fmt; } ;
struct TYPE_3__ {int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gsc_variant*,int,int,int*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;

void FUNC_4(struct gsc_variant *VAR_2,
    struct gsc_frame *VAR_3, u32 *VAR_4,
     u32 VAR_5, u32 VAR_6, u32 *VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10;

 if (FUNC_1(VAR_3->fmt->color)) {
  VAR_9 = VAR_1;
  VAR_10 = VAR_1;
 } else if (FUNC_2(VAR_3->fmt->color)) {
  VAR_9 = VAR_1;
  VAR_10 = VAR_0;
 } else {
  VAR_9 = VAR_0;
  VAR_10 = VAR_0;
 }

 VAR_8 = VAR_3->crop.width % (*VAR_4 * VAR_9);
 if (VAR_8) {
  VAR_3->crop.width -= VAR_8;
  FUNC_0(VAR_2, VAR_3->crop.width, VAR_5, VAR_4);
  FUNC_3("cropped src width size is recalculated from %d to %d",
   VAR_3->crop.width + VAR_8, VAR_3->crop.width);
 }

 VAR_8 = VAR_3->crop.height % (*VAR_7 * VAR_10);
 if (VAR_8) {
  VAR_3->crop.height -= VAR_8;
  FUNC_0(VAR_2, VAR_3->crop.height, VAR_6, VAR_7);
  FUNC_3("cropped src height size is recalculated from %d to %d",
   VAR_3->crop.height + VAR_8, VAR_3->crop.height);
 }
}
