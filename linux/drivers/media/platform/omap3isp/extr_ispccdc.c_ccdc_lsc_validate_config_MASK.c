
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; } ;
struct omap3isp_ccdc_lsc_config {unsigned int gain_mode_m; unsigned int gain_mode_n; int offset; int initial_x; int initial_y; unsigned int size; } ;
struct isp_device {int dev; } ;
struct isp_ccdc_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct isp_ccdc_device*,int *,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct isp_device* FUNC_2 (struct isp_ccdc_device*) ;

__attribute__((used)) static int FUNC_3(struct isp_ccdc_device *VAR_3,
        struct omap3isp_ccdc_lsc_config *VAR_4)
{
 struct isp_device *VAR_5 = FUNC_2(VAR_3);
 struct v4l2_mbus_framefmt *VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;

 VAR_9 = VAR_4->gain_mode_m;
 VAR_10 = VAR_4->gain_mode_n;

 if ((VAR_9 < 2) || (VAR_9 > 6) ||
     (VAR_10 < 2) || (VAR_10 > 6)) {
  FUNC_1(VAR_5->dev, "CCDC: LSC: Invalid paxel size\n");
  return -VAR_1;
 }

 if (VAR_4->offset & 3) {
  FUNC_1(VAR_5->dev,
   "CCDC: LSC: Offset must be a multiple of 4\n");
  return -VAR_1;
 }

 if ((VAR_4->initial_x & 1) || (VAR_4->initial_y & 1)) {
  FUNC_1(VAR_5->dev, "CCDC: LSC: initial_x and y must be even\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_0(VAR_3, ((void*)0), VAR_0,
       VAR_2);
 VAR_14 = VAR_6->width;
 VAR_15 = VAR_6->height;


 VAR_7 = 1 << VAR_9;
 VAR_11 = ((VAR_14 + VAR_4->initial_x + VAR_7 - 1)
       >> VAR_9) + 1;

 VAR_8 = 1 << VAR_10;
 VAR_12 = ((VAR_15 + VAR_4->initial_y + VAR_8 - 1)
       >> VAR_10) + 1;

 VAR_13 = 4 * VAR_11 * VAR_12;
 if (VAR_13 > VAR_4->size) {
  FUNC_1(VAR_5->dev, "CCDC: LSC: too small table\n");
  return -VAR_1;
 }
 if (VAR_4->offset < (VAR_11 * 4)) {
  FUNC_1(VAR_5->dev, "CCDC: LSC: Offset is too small\n");
  return -VAR_1;
 }
 if ((VAR_4->size / VAR_4->offset) < VAR_12) {
  FUNC_1(VAR_5->dev, "CCDC: LSC: Wrong size/offset combination\n");
  return -VAR_1;
 }
 return 0;
}
