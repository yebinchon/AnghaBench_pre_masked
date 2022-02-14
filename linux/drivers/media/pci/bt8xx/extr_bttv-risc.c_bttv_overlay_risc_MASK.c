
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; } ;
struct bttv_overlay {int field; size_t tvnorm; TYPE_2__ w; } ;
struct bttv_format {int btswap; int btformat; int fourcc; } ;
struct TYPE_6__ {size_t field; } ;
struct bttv_buffer {TYPE_3__ vb; int btswap; int btformat; int bottom; int top; int crop; int geo; } ;
struct TYPE_4__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;


 int FUNC_0 () ;

 int FUNC_1 (int) ;


 int FUNC_2 (struct bttv*,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (struct bttv*,int *,struct bttv_format const*,struct bttv_overlay*,int,int) ;
 int * VAR_0 ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ) ;
 int * VAR_1 ;

int
FUNC_5(struct bttv *VAR_2,
    struct bttv_overlay *VAR_3,
    const struct bttv_format *VAR_4,
    struct bttv_buffer *VAR_5)
{

 FUNC_4("%d: overlay fields: %s format: 0x%08x  size: %dx%d\n",
  VAR_2->c.nr, VAR_1[VAR_5->vb.field],
  VAR_4->fourcc, VAR_3->w.width, VAR_3->w.height);


 FUNC_2(VAR_2,&VAR_5->geo,VAR_3->w.width,VAR_3->w.height,
        FUNC_1(VAR_3->field),
        &VAR_0[VAR_3->tvnorm],&VAR_5->crop);


 switch (VAR_3->field) {
 case 128:
  FUNC_3(VAR_2, &VAR_5->top, VAR_4, VAR_3, 0, 0);
  break;
 case 130:
  FUNC_3(VAR_2, &VAR_5->bottom, VAR_4, VAR_3, 0, 0);
  break;
 case 129:
  FUNC_3(VAR_2, &VAR_5->top, VAR_4, VAR_3, 0, 1);
  FUNC_3(VAR_2, &VAR_5->bottom, VAR_4, VAR_3, 1, 0);
  break;
 default:
  FUNC_0();
 }


 VAR_5->btformat = VAR_4->btformat;
 VAR_5->btswap = VAR_4->btswap;
 VAR_5->vb.field = VAR_3->field;
 return 0;
}
