
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct ov5695_mode {scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct ov5695_mode *VAR_0,
    struct v4l2_mbus_framefmt *VAR_1)
{
 return FUNC_0(VAR_0->width - VAR_1->width) +
        FUNC_0(VAR_0->height - VAR_1->height);
}
