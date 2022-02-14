
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venc_state {scalar_t__ venc_base; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct venc_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static inline u32 FUNC_2(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 struct venc_state *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->venc_base + VAR_1);
}
