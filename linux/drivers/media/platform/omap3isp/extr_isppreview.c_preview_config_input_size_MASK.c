
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct TYPE_6__ {TYPE_2__* params; } ;
struct TYPE_4__ {unsigned int left; int width; unsigned int top; int height; } ;
struct isp_prev_device {TYPE_3__ params; TYPE_1__ crop; struct v4l2_mbus_framefmt* formats; } ;
struct isp_device {int dummy; } ;
struct TYPE_5__ {int features; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct isp_device*,unsigned int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_prev_device *VAR_13, u32 VAR_14)
{
 const struct v4l2_mbus_framefmt *VAR_15 = &VAR_13->formats[VAR_12];
 struct isp_device *VAR_16 = FUNC_1(VAR_13);
 unsigned int VAR_17 = VAR_13->crop.left;
 unsigned int VAR_18 = VAR_13->crop.left + VAR_13->crop.width - 1;
 unsigned int VAR_19 = VAR_13->crop.top;
 unsigned int VAR_20 = VAR_13->crop.top + VAR_13->crop.height - 1;
 u32 VAR_21;

 if (VAR_15->code != VAR_5 &&
     VAR_15->code != VAR_4) {
  VAR_17 -= 2;
  VAR_18 += 2;
  VAR_19 -= 2;
  VAR_20 += 2;
 }

 VAR_21 = (VAR_13->params.params[0].features & VAR_14)
   | (VAR_13->params.params[1].features & ~VAR_14);

 if (VAR_21 & (VAR_7 | VAR_10)) {
  VAR_17 -= 2;
  VAR_18 += 2;
  VAR_19 -= 2;
  VAR_20 += 2;
 }
 if (VAR_21 & VAR_8) {
  VAR_17 -= 2;
  VAR_18 += 2;
 }
 if (VAR_21 & (VAR_6 | VAR_9))
  VAR_17 -= 2;

 FUNC_0(VAR_16, (VAR_17 << VAR_1) | VAR_18,
         VAR_11, VAR_0);
 FUNC_0(VAR_16, (VAR_19 << VAR_3) | VAR_20,
         VAR_11, VAR_2);
}
