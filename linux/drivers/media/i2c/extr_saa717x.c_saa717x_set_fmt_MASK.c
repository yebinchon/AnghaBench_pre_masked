
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; int colorspace; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8,
  struct v4l2_subdev_pad_config *VAR_9,
  struct v4l2_subdev_format *VAR_10)
{
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_10->format;
 int VAR_12, VAR_13, VAR_14;

 FUNC_3(1, VAR_7, VAR_8, "decoder set size\n");

 if (VAR_10->pad || VAR_11->code != VAR_1)
  return -VAR_0;


 if (VAR_11->width < 1 || VAR_11->width > 1440)
  return -VAR_0;
 if (VAR_11->height < 1 || VAR_11->height > 960)
  return -VAR_0;

 VAR_11->field = VAR_5;
 VAR_11->colorspace = VAR_4;

 if (VAR_10->which == VAR_6)
  return 0;



 VAR_12 = VAR_3 / VAR_11->width;
 if (VAR_12 == 0)
  VAR_12 = 1;
 VAR_13 = 1024 * VAR_3 / VAR_12 / VAR_11->width;

 VAR_14 = 512 * 2 * VAR_2 / VAR_11->height;


 FUNC_1(VAR_8, 0, VAR_12);
 FUNC_1(VAR_8, 1, VAR_12);



 FUNC_0(VAR_8, 0x6C, (u8)(VAR_13 & 0xFF));
 FUNC_0(VAR_8, 0x6D, (u8)((VAR_13 >> 8) & 0xFF));

 FUNC_0(VAR_8, 0xAC, (u8)(VAR_13 & 0xFF));
 FUNC_0(VAR_8, 0xAD, (u8)((VAR_13 >> 8) & 0xFF));


 FUNC_2(VAR_8, 0, VAR_14);
 FUNC_2(VAR_8, 1, VAR_14);




 FUNC_0(VAR_8, 0x5C, (u8)(VAR_11->width & 0xFF));
 FUNC_0(VAR_8, 0x5D, (u8)((VAR_11->width >> 8) & 0xFF));

 FUNC_0(VAR_8, 0x9C, (u8)(VAR_11->width & 0xFF));
 FUNC_0(VAR_8, 0x9D, (u8)((VAR_11->width >> 8) & 0xFF));



 FUNC_0(VAR_8, 0x5E, (u8)(VAR_11->height & 0xFF));
 FUNC_0(VAR_8, 0x5F, (u8)((VAR_11->height >> 8) & 0xFF));

 FUNC_0(VAR_8, 0x9E, (u8)(VAR_11->height & 0xFF));
 FUNC_0(VAR_8, 0x9F, (u8)((VAR_11->height >> 8) & 0xFF));
 return 0;
}
