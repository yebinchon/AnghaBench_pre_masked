
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct v4l2_fwnode_endpoint {int dummy; } ;
struct imx_media_pixfmt {scalar_t__ bayer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct v4l2_fwnode_endpoint*) ;
 scalar_t__ FUNC_1 (struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static inline bool FUNC_2(struct v4l2_fwnode_endpoint *VAR_2,
     struct v4l2_mbus_framefmt *VAR_3,
     const struct imx_media_pixfmt *VAR_4)
{
 return VAR_4->bayer || FUNC_0(VAR_2) ||
  (FUNC_1(VAR_2) &&
   VAR_3->code != VAR_0 &&
   VAR_3->code != VAR_1);
}
