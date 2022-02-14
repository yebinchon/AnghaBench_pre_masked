
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int pixelformat; int height; int width; int sizeimage; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct TYPE_6__ {int streamformat; int height; int width; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct hva_ctx {int flags; TYPE_2__ streaminfo; int max_stream_size; int name; TYPE_1__ fh; } ;
struct file {int private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 struct hva_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 struct vb2_queue* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct hva_ctx *VAR_5 = FUNC_2(VAR_2->private_data);
 struct device *VAR_6 = FUNC_0(VAR_5);
 struct vb2_queue *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_6, "%s V4L2 S_FMT (CAPTURE): unsupported format %.4s\n",
   VAR_5->name, (char *)&VAR_4->fmt.pix.pixelformat);
  return VAR_8;
 }

 VAR_7 = FUNC_4(VAR_5->fh.m2m_ctx, VAR_4->type);
 if (FUNC_5(VAR_7)) {
  FUNC_1(VAR_6, "%s V4L2 S_FMT (CAPTURE): queue busy\n",
   VAR_5->name);
  return -VAR_0;
 }

 VAR_5->max_stream_size = VAR_4->fmt.pix.sizeimage;
 VAR_5->streaminfo.width = VAR_4->fmt.pix.width;
 VAR_5->streaminfo.height = VAR_4->fmt.pix.height;
 VAR_5->streaminfo.streamformat = VAR_4->fmt.pix.pixelformat;
 VAR_5->flags |= VAR_1;

 return 0;
}
