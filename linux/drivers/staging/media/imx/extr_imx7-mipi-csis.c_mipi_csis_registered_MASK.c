
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int entity; } ;
struct csi_state {TYPE_2__* pads; TYPE_1__ mipi_sd; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;
 struct csi_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5)
{
 struct csi_state *VAR_6 = FUNC_1(VAR_5);

 VAR_6->pads[VAR_1].flags = VAR_3;
 VAR_6->pads[VAR_2].flags = VAR_4;

 return FUNC_0(&VAR_6->mipi_sd.entity, VAR_0,
          VAR_6->pads);
}
