
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videobuf_dmabuf {int sglist; } ;
struct bttv_tvnorm {int swidth; int sheight; } ;
struct TYPE_6__ {size_t field; int width; int height; int size; } ;
struct bttv_buffer {TYPE_2__* fmt; int btswap; int btformat; TYPE_3__ vb; int bottom; int top; int crop; int geo; int tvnorm; } ;
struct TYPE_4__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;
struct TYPE_5__ {int flags; int depth; int hshift; int vshift; int btswap; int btformat; int fourcc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int) ;



 int FUNC_2 (struct bttv*,int *,int,int,int,struct bttv_tvnorm const*,int *) ;
 int FUNC_3 (struct bttv*,int *,int ,int,int,int,int ,int) ;
 int FUNC_4 (struct bttv*,int *,int ,int,int,int,int,int,int,int,int,int) ;
 struct bttv_tvnorm* VAR_6 ;
 int FUNC_5 (char*,int ,int ,int ,int,int) ;
 int * VAR_7 ;
 struct videobuf_dmabuf* FUNC_6 (TYPE_3__*) ;

int
FUNC_7(struct bttv *VAR_8, struct bttv_buffer *VAR_9)
{
 const struct bttv_tvnorm *VAR_10 = VAR_6 + VAR_9->tvnorm;
 struct videobuf_dmabuf *VAR_11=FUNC_6(&VAR_9->vb);

 FUNC_5("%d: buffer field: %s  format: 0x%08x  size: %dx%d\n",
  VAR_8->c.nr, VAR_7[VAR_9->vb.field],
  VAR_9->fmt->fourcc, VAR_9->vb.width, VAR_9->vb.height);


 if (VAR_9->fmt->flags & VAR_1) {
  int VAR_12 = (VAR_9->fmt->depth >> 3) * VAR_9->vb.width;
  int VAR_13 = VAR_12 * (VAR_9->vb.height >> 1);

  FUNC_2(VAR_8,&VAR_9->geo,VAR_9->vb.width,VAR_9->vb.height,
         FUNC_1(VAR_9->vb.field),
         VAR_10,&VAR_9->crop);

  switch (VAR_9->vb.field) {
  case 128:
   FUNC_3(VAR_8,&VAR_9->top,VAR_11->sglist,
                   0,VAR_12,
                    0, 0,
      VAR_9->vb.height);
   break;
  case 131:
   FUNC_3(VAR_8,&VAR_9->bottom,VAR_11->sglist,
      0,VAR_12,0,0,VAR_9->vb.height);
   break;
  case 130:
   FUNC_3(VAR_8,&VAR_9->top,VAR_11->sglist,
      0,VAR_12,VAR_12,0,VAR_9->vb.height >> 1);
   FUNC_3(VAR_8,&VAR_9->bottom,VAR_11->sglist,
      VAR_12,VAR_12,VAR_12,0,VAR_9->vb.height >> 1);
   break;
  case 129:
   FUNC_3(VAR_8,&VAR_9->top,VAR_11->sglist,
      0,VAR_12,0,0,VAR_9->vb.height >> 1);
   FUNC_3(VAR_8,&VAR_9->bottom,VAR_11->sglist,
      VAR_13,VAR_12,0,0,VAR_9->vb.height >> 1);
   break;
  default:
   FUNC_0();
  }
 }


 if (VAR_9->fmt->flags & VAR_2) {
  int VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18;


  VAR_14 = VAR_9->vb.width * VAR_9->vb.height;
  VAR_15 = VAR_9->vb.width * VAR_9->vb.height;
  if (VAR_9->fmt->flags & VAR_0) {

   VAR_14 >>= VAR_9->fmt->hshift;
   VAR_14 >>= VAR_9->fmt->vshift;
   VAR_14 += VAR_15;
  } else {

   VAR_15 >>= VAR_9->fmt->hshift;
   VAR_15 >>= VAR_9->fmt->vshift;
   VAR_15 += VAR_14;
  }

  switch (VAR_9->vb.field) {
  case 128:
   FUNC_2(VAR_8,&VAR_9->geo,VAR_9->vb.width,
          VAR_9->vb.height, 0,
          VAR_10,&VAR_9->crop);
   FUNC_4(VAR_8, &VAR_9->top, VAR_11->sglist,
      0,VAR_9->vb.width,0,VAR_9->vb.height,
      VAR_14,VAR_15,VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,0);
   break;
  case 131:
   FUNC_2(VAR_8,&VAR_9->geo,VAR_9->vb.width,
          VAR_9->vb.height,0,
          VAR_10,&VAR_9->crop);
   FUNC_4(VAR_8, &VAR_9->bottom, VAR_11->sglist,
      0,VAR_9->vb.width,0,VAR_9->vb.height,
      VAR_14,VAR_15,VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,0);
   break;
  case 130:
   FUNC_2(VAR_8,&VAR_9->geo,VAR_9->vb.width,
          VAR_9->vb.height,1,
          VAR_10,&VAR_9->crop);
   VAR_18 = VAR_9->vb.height >> 1;
   VAR_16 = VAR_9->vb.width;
   VAR_17 = VAR_9->vb.width >> VAR_9->fmt->hshift;
   FUNC_4(VAR_8,&VAR_9->top,
      VAR_11->sglist,
      0,VAR_9->vb.width,VAR_16,VAR_18,
      VAR_14,VAR_15,
      VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,
      VAR_17);
   FUNC_4(VAR_8,&VAR_9->bottom,
      VAR_11->sglist,
      VAR_16,VAR_9->vb.width,VAR_16,VAR_18,
      VAR_14+VAR_17,
      VAR_15+VAR_17,
      VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,
      VAR_17);
   break;
  case 129:
   FUNC_2(VAR_8,&VAR_9->geo,VAR_9->vb.width,
          VAR_9->vb.height,1,
          VAR_10,&VAR_9->crop);
   VAR_18 = VAR_9->vb.height >> 1;
   VAR_16 = VAR_9->vb.width;
   VAR_17 = VAR_9->vb.width >> VAR_9->fmt->hshift;
   FUNC_4(VAR_8,&VAR_9->top,
      VAR_11->sglist,
      0,VAR_9->vb.width,0,VAR_18,
      VAR_14 >> 1,
      VAR_15 >> 1,
      VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,
      0);
   FUNC_4(VAR_8,&VAR_9->bottom,
      VAR_11->sglist,
      VAR_18 * VAR_16,VAR_9->vb.width,0,VAR_18,
      VAR_18 * VAR_16 + (VAR_14 >> 1),
      VAR_18 * VAR_16 + (VAR_15 >> 1),
      VAR_9->fmt->hshift,
      VAR_9->fmt->vshift,
      0);
   break;
  default:
   FUNC_0();
  }
 }


 if (VAR_9->fmt->flags & VAR_3) {

  VAR_9->vb.field = 129;
  FUNC_2(VAR_8,&VAR_9->geo,VAR_10->swidth,VAR_10->sheight,
         1,VAR_10,&VAR_9->crop);
  FUNC_3(VAR_8, &VAR_9->top, VAR_11->sglist,
                  0, VAR_4, 0,
                      0, VAR_5);
  FUNC_3(VAR_8, &VAR_9->bottom, VAR_11->sglist,
     VAR_9->vb.size/2 , VAR_4, 0, 0, VAR_5);
 }


 VAR_9->btformat = VAR_9->fmt->btformat;
 VAR_9->btswap = VAR_9->fmt->btswap;
 return 0;
}
