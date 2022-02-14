
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_fh {struct vpfe_device* vpfe_dev; } ;
struct TYPE_4__ {int sizeimage; int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {TYPE_3__ fmt; int v4l2_dev; } ;
struct videobuf_queue {struct vpfe_fh* priv_data; } ;
struct videobuf_buffer {scalar_t__ state; int field; int size; int height; int width; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int *,char*) ;
 int FUNC_2 (struct videobuf_queue*,struct videobuf_buffer*,int *) ;
 unsigned long FUNC_3 (struct videobuf_buffer*) ;

__attribute__((used)) static int FUNC_4(struct videobuf_queue *VAR_4,
    struct videobuf_buffer *VAR_5,
    enum v4l2_field VAR_6)
{
 struct vpfe_fh *VAR_7 = VAR_4->priv_data;
 struct vpfe_device *VAR_8 = VAR_7->vpfe_dev;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_1(1, VAR_3, &VAR_8->v4l2_dev, "vpfe_buffer_prepare\n");


 if (VAR_1 == VAR_5->state) {
  VAR_5->width = VAR_8->fmt.fmt.pix.width;
  VAR_5->height = VAR_8->fmt.fmt.pix.height;
  VAR_5->size = VAR_8->fmt.fmt.pix.sizeimage;
  VAR_5->field = VAR_6;

  VAR_10 = FUNC_2(VAR_4, VAR_5, ((void*)0));
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = FUNC_3(VAR_5);

  if (!FUNC_0(VAR_9, 32))
   return -VAR_0;

  VAR_5->state = VAR_2;
 }
 return 0;
}
