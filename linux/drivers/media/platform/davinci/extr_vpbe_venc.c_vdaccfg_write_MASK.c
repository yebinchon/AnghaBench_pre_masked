
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venc_state {int vdaccfg_reg; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct venc_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 struct venc_state *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_1, VAR_2->vdaccfg_reg);

 VAR_1 = FUNC_0(VAR_2->vdaccfg_reg);

 return VAR_1;
}
