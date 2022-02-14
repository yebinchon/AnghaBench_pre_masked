
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_4__ {int code; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_2__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {unsigned long* valid_link_freqs; size_t compressed_min_bpp; int link_freq; struct smiapp_csi_data_format const* csi_format; int * test_data; TYPE_1__* src; } ;
typedef struct smiapp_csi_data_format {int width; scalar_t__ compressed; int code; } const smiapp_csi_data_format ;
struct TYPE_3__ {struct v4l2_subdev sd; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_4 (int ,int ,int,unsigned long,int ) ;
 int FUNC_5 (struct smiapp_sensor*) ;
 struct smiapp_csi_data_format const* FUNC_6 (struct smiapp_sensor*,int ) ;
 struct smiapp_sensor* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2,
        struct v4l2_subdev_format *VAR_3)
{
 struct smiapp_sensor *VAR_4 = FUNC_7(VAR_1);
 const struct smiapp_csi_data_format *VAR_5,
  *VAR_6 = VAR_4->csi_format;
 unsigned long *VAR_7;
 u32 VAR_8 = VAR_3->format.code;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_10)
  return VAR_10;





 if (VAR_1 != &VAR_4->src->sd)
  return 0;

 VAR_5 = FUNC_6(VAR_4, VAR_8);

 VAR_3->format.code = VAR_5->code;

 if (VAR_3->which != VAR_0)
  return 0;

 VAR_4->csi_format = VAR_5;

 if (VAR_5->width != VAR_6->width)
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->test_data); VAR_9++)
   FUNC_4(
    VAR_4->test_data[VAR_9], 0,
    (1 << VAR_5->width) - 1, 1, 0);

 if (VAR_5->compressed == VAR_6->compressed)
  return 0;

 VAR_7 =
  &VAR_4->valid_link_freqs[VAR_4->csi_format->compressed
       - VAR_4->compressed_min_bpp];

 FUNC_4(
  VAR_4->link_freq, 0,
  FUNC_2(*VAR_7), ~*VAR_7,
  FUNC_1(*VAR_7));

 return FUNC_5(VAR_4);
}
