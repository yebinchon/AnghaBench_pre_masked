
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int width; scalar_t__ left; int height; int top; } ;
struct v4l2_mbus_framefmt {int width; int height; scalar_t__ field; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; } ;
struct csi_priv {scalar_t__ active_output_pad; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct csi_priv *VAR_4,
    struct v4l2_rect *VAR_5,
    struct v4l2_subdev_pad_config *VAR_6,
    struct v4l2_mbus_framefmt *VAR_7,
    struct v4l2_fwnode_endpoint *VAR_8)
{
 u32 VAR_9;

 VAR_5->width = FUNC_1(VAR_3, VAR_7->width, VAR_5->width);
 if (VAR_5->left + VAR_5->width > VAR_7->width)
  VAR_5->left = VAR_7->width - VAR_5->width;

 VAR_5->left &= ~0x3;
 if (VAR_4->active_output_pad == VAR_0)
  VAR_5->width &= ~0x7;
 else
  VAR_5->width &= ~0x1;

 VAR_9 = VAR_7->height;
 if (VAR_7->field == VAR_1)
  VAR_9 *= 2;







 if (VAR_8->bus_type == VAR_2 &&
     (FUNC_0(VAR_7->field) ||
      VAR_7->field == VAR_1)) {
  VAR_5->height = VAR_9;
  VAR_5->top = (VAR_9 == 480) ? 2 : 0;
 } else {
  VAR_5->height = FUNC_1(VAR_3, VAR_9, VAR_5->height);
  if (VAR_5->top + VAR_5->height > VAR_9)
   VAR_5->top = VAR_9 - VAR_5->height;
 }
}
