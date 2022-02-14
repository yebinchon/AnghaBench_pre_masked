
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int width; int height; scalar_t__ bytesperline; int pixelformat; } ;
struct v4l2_framebuffer {int flags; TYPE_7__ fmt; int base; } ;
struct file {int dummy; } ;
struct bttv_format {int flags; int depth; } ;
struct TYPE_12__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_18__ {scalar_t__ nclips; int * clips; TYPE_3__ w; } ;
struct bttv_fh {struct bttv_format const* ovfmt; TYPE_9__ ov; int do_crop; struct bttv* btv; } ;
struct bttv_buffer {int crop; } ;
struct TYPE_13__ {int width; int height; } ;
struct TYPE_14__ {TYPE_4__ w; } ;
struct TYPE_15__ {TYPE_5__ ov; struct bttv_format const* ovfmt; } ;
struct TYPE_10__ {int width; int height; scalar_t__ bytesperline; } ;
struct TYPE_11__ {TYPE_1__ fmt; int base; } ;
struct bttv {TYPE_8__* crop; TYPE_6__ init; TYPE_2__ fbuf; } ;
typedef int __s32 ;
struct TYPE_17__ {int rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bttv*,TYPE_9__*,struct bttv_format const*,struct bttv_buffer*) ;
 int FUNC_1 (struct bttv*,struct bttv_fh*,struct bttv_buffer*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct bttv_fh*,int ) ;
 struct bttv_format* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct bttv_fh*,int*,int*,int ,int,int,int ,int ) ;
 struct bttv_buffer* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_8, void *VAR_9,
    const struct v4l2_framebuffer *VAR_10)
{
 struct bttv_fh *VAR_11 = VAR_9;
 struct bttv *VAR_12 = VAR_11->btv;
 const struct bttv_format *VAR_13;
 int VAR_14;

 if (!FUNC_2(VAR_0) &&
  !FUNC_2(VAR_1))
  return -VAR_3;


 VAR_13 = FUNC_4(VAR_10->fmt.pixelformat);
 if (((void*)0) == VAR_13)
  return -VAR_2;
 if (0 == (VAR_13->flags & VAR_4))
  return -VAR_2;

 VAR_14 = -VAR_2;
 if (VAR_10->flags & VAR_6) {
  __s32 VAR_15 = VAR_10->fmt.width;
  __s32 VAR_16 = VAR_10->fmt.height;

  VAR_14 = FUNC_6(VAR_11, &VAR_15, &VAR_16,
        VAR_7,
                         ~3,
                         2,
                          0,
                          0);
  if (0 != VAR_14)
   return VAR_14;
 }


 VAR_12->fbuf.base = VAR_10->base;
 VAR_12->fbuf.fmt.width = VAR_10->fmt.width;
 VAR_12->fbuf.fmt.height = VAR_10->fmt.height;
 if (0 != VAR_10->fmt.bytesperline)
  VAR_12->fbuf.fmt.bytesperline = VAR_10->fmt.bytesperline;
 else
  VAR_12->fbuf.fmt.bytesperline = VAR_12->fbuf.fmt.width*VAR_13->depth/8;

 VAR_14 = 0;
 VAR_11->ovfmt = VAR_13;
 VAR_12->init.ovfmt = VAR_13;
 if (VAR_10->flags & VAR_6) {
  VAR_11->ov.w.left = 0;
  VAR_11->ov.w.top = 0;
  VAR_11->ov.w.width = VAR_10->fmt.width;
  VAR_11->ov.w.height = VAR_10->fmt.height;
  VAR_12->init.ov.w.width = VAR_10->fmt.width;
  VAR_12->init.ov.w.height = VAR_10->fmt.height;

  FUNC_5(VAR_11->ov.clips);
  VAR_11->ov.clips = ((void*)0);
  VAR_11->ov.nclips = 0;

  if (FUNC_3(VAR_11, VAR_5)) {
   struct bttv_buffer *VAR_17;

   VAR_17 = FUNC_7(sizeof(*VAR_17));
   VAR_17->crop = VAR_12->crop[!!VAR_11->do_crop].rect;
   FUNC_0(VAR_12, &VAR_11->ov, VAR_11->ovfmt, VAR_17);
   VAR_14 = FUNC_1(VAR_12, VAR_11, VAR_17);
  }
 }
 return VAR_14;
}
