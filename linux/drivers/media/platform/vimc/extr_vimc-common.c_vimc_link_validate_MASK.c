
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; scalar_t__ colorspace; scalar_t__ quantization; scalar_t__ xfer_func; scalar_t__ ycbcr_enc; scalar_t__ field; } ;
struct v4l2_subdev_format {TYPE_2__ format; } ;
struct media_link {TYPE_3__* sink; TYPE_3__* source; } ;
struct TYPE_6__ {TYPE_1__* entity; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,struct v4l2_subdev_format*) ;

int FUNC_2(struct media_link *VAR_6)
{
 struct v4l2_subdev_format VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6->source, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6->sink, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_0("vimc link validate: "
  "%s:src:%dx%d (0x%x, %d, %d, %d, %d) "
  "%s:snk:%dx%d (0x%x, %d, %d, %d, %d)\n",

  VAR_6->source->entity->name,
  VAR_7.format.width, VAR_7.format.height,
  VAR_7.format.code, VAR_7.format.colorspace,
  VAR_7.format.quantization, VAR_7.format.xfer_func,
  VAR_7.format.ycbcr_enc,

  VAR_6->sink->entity->name,
  VAR_8.format.width, VAR_8.format.height,
  VAR_8.format.code, VAR_8.format.colorspace,
  VAR_8.format.quantization, VAR_8.format.xfer_func,
  VAR_8.format.ycbcr_enc);


 if (VAR_7.format.width != VAR_8.format.width
     || VAR_7.format.height != VAR_8.format.height
     || VAR_7.format.code != VAR_8.format.code)
  return -VAR_0;






 if (VAR_7.format.field != VAR_8.format.field &&
     VAR_8.format.field != VAR_2)
  return -VAR_0;





 if (VAR_7.format.colorspace == VAR_1
     || VAR_8.format.colorspace == VAR_1)
  return 0;


 if (VAR_7.format.colorspace != VAR_8.format.colorspace)
  return -VAR_0;


 if (VAR_7.format.ycbcr_enc != VAR_5
     && VAR_8.format.ycbcr_enc != VAR_5
     && VAR_7.format.ycbcr_enc != VAR_8.format.ycbcr_enc)
  return -VAR_0;

 if (VAR_7.format.quantization != VAR_3
     && VAR_8.format.quantization != VAR_3
     && VAR_7.format.quantization != VAR_8.format.quantization)
  return -VAR_0;

 if (VAR_7.format.xfer_func != VAR_4
     && VAR_8.format.xfer_func != VAR_4
     && VAR_7.format.xfer_func != VAR_8.format.xfer_func)
  return -VAR_0;

 return 0;
}
