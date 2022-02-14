
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_device {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xvip_device*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct xvip_device *VAR_3,
           const struct v4l2_mbus_framefmt *VAR_4)
{
 FUNC_0(VAR_3, VAR_1,
     (VAR_4->height << VAR_2) |
     (VAR_4->width << VAR_0));
}
