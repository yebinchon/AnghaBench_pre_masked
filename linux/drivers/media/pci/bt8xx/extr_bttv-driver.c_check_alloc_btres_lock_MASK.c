
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ end; } ;
struct bttv_fh {int resources; TYPE_3__ vbi_fmt; int do_crop; } ;
struct bttv {int resources; scalar_t__ vbi_end; scalar_t__ crop_start; TYPE_2__* crop; } ;
typedef scalar_t__ __s32 ;
struct TYPE_4__ {scalar_t__ top; } ;
struct TYPE_5__ {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
int FUNC_0(struct bttv *VAR_4, struct bttv_fh *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->resources & VAR_6)

  return 1;

 VAR_7 = VAR_6;
 if (VAR_6 & (VAR_0 | VAR_1))
  VAR_7 |= VAR_0 | VAR_1;


 if (VAR_4->resources & VAR_7) {

  goto fail;
 }

 if ((VAR_6 & VAR_3)
     && 0 == (VAR_4->resources & VAR_3)) {

  __s32 VAR_8 = VAR_4->crop[!!VAR_5->do_crop].rect.top;

  if (VAR_4->vbi_end > VAR_8)
   goto fail;



  VAR_4->crop_start = VAR_8;
 } else if (VAR_6 & VAR_2) {
  __s32 VAR_9 = VAR_5->vbi_fmt.end;

  if (VAR_9 > VAR_4->crop_start)
   goto fail;


  VAR_4->vbi_end = VAR_9;
 }


 VAR_5->resources |= VAR_6;
 VAR_4->resources |= VAR_6;
 return 1;

 fail:
 return 0;
}
