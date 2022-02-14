
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct camif_frame {int f_width; int f_height; TYPE_2__ rect; } ;
struct camif_vp {int payload; int * owner; struct camif_fmt const* out_fmt; int vb_queue; int id; struct camif_frame out_frame; } ;
struct camif_fmt {int depth; int fourcc; } ;


 int VAR_0 ;
 int FUNC_0 (struct camif_vp*,struct v4l2_pix_format*,struct camif_fmt const**) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ FUNC_2 (int *) ;
 struct camif_vp* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct v4l2_pix_format *VAR_4 = &VAR_3->fmt.pix;
 struct camif_vp *VAR_5 = FUNC_3(VAR_1);
 struct camif_frame *VAR_6 = &VAR_5->out_frame;
 const struct camif_fmt *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_1("[vp%d]\n", VAR_5->id);

 if (FUNC_2(&VAR_5->vb_queue))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5, &VAR_3->fmt.pix, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->out_fmt = VAR_7;
 VAR_5->payload = VAR_4->sizeimage;
 VAR_6->f_width = VAR_4->width;
 VAR_6->f_height = VAR_4->height;


 VAR_6->rect.width = VAR_4->width;
 VAR_6->rect.height = VAR_4->height;
 VAR_6->rect.left = 0;
 VAR_6->rect.top = 0;

 if (VAR_5->owner == ((void*)0))
  VAR_5->owner = VAR_2;

 FUNC_1("%ux%u. payload: %u. fmt: 0x%08x. %d %d. sizeimage: %d. bpl: %d\n",
   VAR_6->f_width, VAR_6->f_height, VAR_5->payload,
   VAR_7->fourcc, VAR_4->width * VAR_4->height * VAR_7->depth,
   VAR_7->depth, VAR_4->sizeimage, VAR_4->bytesperline);

 return 0;
}
