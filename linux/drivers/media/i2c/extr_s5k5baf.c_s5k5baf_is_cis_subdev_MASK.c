
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct v4l2_subdev *VAR_1)
{
 return VAR_1->entity.function == VAR_0;
}
