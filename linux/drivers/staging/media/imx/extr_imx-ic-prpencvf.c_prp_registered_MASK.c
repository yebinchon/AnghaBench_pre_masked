
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int entity; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct prp_priv {int vdev; TYPE_2__* pad; TYPE_1__ frame_interval; int * cc; int * format_mbus; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int,int,int ,int ,int *) ;
 int FUNC_4 (int *,int,TYPE_2__*) ;
 int FUNC_5 (struct prp_priv*) ;
 struct prp_priv* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_6)
{
 struct prp_priv *VAR_7 = FUNC_6(VAR_6);
 int VAR_8, VAR_9;
 u32 VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7->pad[VAR_8].flags = (VAR_8 == VAR_4) ?
   VAR_1 : VAR_2;


  FUNC_2(&VAR_10, 0, VAR_0);
  VAR_9 = FUNC_3(&VAR_7->format_mbus[VAR_8],
           640, 480, VAR_10, VAR_5,
           &VAR_7->cc[VAR_8]);
  if (VAR_9)
   return VAR_9;
 }


 VAR_7->frame_interval.numerator = 1;
 VAR_7->frame_interval.denominator = 30;

 VAR_9 = FUNC_4(&VAR_6->entity, VAR_3,
         VAR_7->pad);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7->vdev);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  goto unreg;

 return 0;
unreg:
 FUNC_1(VAR_7->vdev);
 return VAR_9;
}
