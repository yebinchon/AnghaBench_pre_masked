
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venc_state {scalar_t__ venc_base; } ;
struct v4l2_subdev {int dummy; } ;


 struct venc_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct v4l2_subdev *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct venc_state *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, (VAR_3->venc_base + VAR_1));

 return VAR_2;
}
