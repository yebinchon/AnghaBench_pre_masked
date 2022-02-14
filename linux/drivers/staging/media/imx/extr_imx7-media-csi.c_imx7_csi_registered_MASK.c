
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct imx7_csi {int vdev; TYPE_2__* pad; TYPE_1__* frame_interval; int * cc; int * format_mbus; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int numerator; int denominator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int ,int ,int *) ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 struct imx7_csi* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5)
{
 struct imx7_csi *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6->pad[VAR_8].flags = (VAR_8 == VAR_1) ?
   VAR_2 : VAR_3;


  VAR_7 = FUNC_1(&VAR_6->format_mbus[VAR_8],
           800, 600, 0, VAR_4,
           &VAR_6->cc[VAR_8]);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_6->frame_interval[VAR_8].numerator = 1;
  VAR_6->frame_interval[VAR_8].denominator = 30;
 }

 VAR_7 = FUNC_2(&VAR_5->entity, VAR_0, VAR_6->pad);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_6->vdev);
}
