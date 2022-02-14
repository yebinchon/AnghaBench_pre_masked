
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_hdmi_colorimetry {scalar_t__ ycbcr_enc; size_t quantization; int colorspace; } ;
struct TYPE_6__ {int content_type; int colorimetry; int colorspace; } ;
struct TYPE_4__ {int height; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;
struct tda1997x_state {int rgb_quantization_range; TYPE_3__ avi_infoframe; int client; TYPE_2__ timings; struct v4l2_hdmi_colorimetry colorimetry; } ;




 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct v4l2_hdmi_colorimetry FUNC_0 (TYPE_3__*,int *,int ) ;
 int * VAR_4 ;
 int FUNC_1 (int,int ,int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tda1997x_state *VAR_5)
{
 struct v4l2_hdmi_colorimetry *VAR_6 = &VAR_5->colorimetry;

 VAR_5->colorimetry = FUNC_0(&VAR_5->avi_infoframe,
            ((void*)0),
            VAR_5->timings.bt.height);

 if (VAR_6->ycbcr_enc == VAR_2) {
  switch (VAR_5->rgb_quantization_range) {
  case 128:
   VAR_6->quantization = VAR_0;
   break;
  case 129:
   VAR_6->quantization = VAR_1;
   break;
  }
 }
 FUNC_1(1, VAR_3, VAR_5->client,
  "colorspace=%d/%d colorimetry=%d range=%s content=%d\n",
  VAR_5->avi_infoframe.colorspace, VAR_6->colorspace,
  VAR_5->avi_infoframe.colorimetry,
  VAR_4[VAR_6->quantization],
  VAR_5->avi_infoframe.content_type);
}
