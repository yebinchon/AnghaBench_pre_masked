
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_config {unsigned long flags; } ;
struct soc_camera_subdev_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

unsigned long FUNC_0(struct soc_camera_subdev_desc *VAR_9,
        const struct v4l2_mbus_config *VAR_10)
{
 unsigned long VAR_11, VAR_12 = VAR_10->flags;


 if (VAR_9->flags & VAR_0) {
  VAR_11 = VAR_12 & (VAR_3 | VAR_4);
  if (VAR_11 == VAR_3 || VAR_11 == VAR_4)
   VAR_12 ^= VAR_3 | VAR_4;
 }

 if (VAR_9->flags & VAR_2) {
  VAR_11 = VAR_12 & (VAR_7 | VAR_8);
  if (VAR_11 == VAR_7 || VAR_11 == VAR_8)
   VAR_12 ^= VAR_7 | VAR_8;
 }

 if (VAR_9->flags & VAR_1) {
  VAR_11 = VAR_12 & (VAR_6 | VAR_5);
  if (VAR_11 == VAR_6 || VAR_11 == VAR_5)
   VAR_12 ^= VAR_6 | VAR_5;
 }

 return VAR_12;
}
