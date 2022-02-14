
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct coda_dev {int v4l2_dev; TYPE_3__* devtype; } ;
struct TYPE_5__ {int h264_profile_idc; } ;
struct coda_ctx {TYPE_2__ params; TYPE_1__* codec; struct coda_dev* dev; } ;
struct TYPE_6__ {scalar_t__ product; } ;
struct TYPE_4__ {scalar_t__ src_fourcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static bool FUNC_2(struct coda_ctx *VAR_6)
{
 struct coda_dev *VAR_7 = VAR_6->dev;
 int VAR_8;

 if (VAR_7->devtype->product != VAR_2 &&
     VAR_7->devtype->product != VAR_0 &&
     VAR_7->devtype->product != VAR_1)
  return 0;

 if (VAR_6->codec->src_fourcc == VAR_5)
  return 0;

 if (VAR_6->codec->src_fourcc != VAR_4)
  return 1;

 VAR_8 = FUNC_0(VAR_6->params.h264_profile_idc);
 if (VAR_8 < 0)
  FUNC_1(&VAR_7->v4l2_dev, "Unknown H264 Profile: %u\n",
     VAR_6->params.h264_profile_idc);


 return VAR_8 > VAR_3;
}
