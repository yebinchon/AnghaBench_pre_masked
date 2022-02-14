
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ colorspace; int pixelformat; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct coda_q_data {int fourcc; } ;
struct coda_dev {int dummy; } ;
struct coda_ctx {struct coda_dev* dev; } ;
struct coda_codec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct coda_codec* FUNC_0 (struct coda_dev*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct coda_ctx*,struct coda_codec const*,struct v4l2_format*) ;
 int FUNC_3 (struct coda_ctx*,struct v4l2_format*) ;
 struct coda_ctx* FUNC_4 (void*) ;
 struct coda_q_data* FUNC_5 (struct coda_ctx*,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct coda_ctx *VAR_5 = FUNC_4(VAR_3);
 struct coda_dev *VAR_6 = VAR_5->dev;
 const struct coda_q_data *VAR_7;
 const struct coda_codec *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_4->fmt.pix.colorspace == VAR_1)
  FUNC_1(&VAR_4->fmt.pix);

 VAR_7 = FUNC_5(VAR_5, VAR_0);
 VAR_8 = FUNC_0(VAR_6, VAR_4->fmt.pix.pixelformat, VAR_7->fourcc);

 return FUNC_2(VAR_5, VAR_8, VAR_4);
}
