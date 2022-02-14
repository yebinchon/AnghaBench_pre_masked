
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int entity; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct prp_priv {TYPE_2__* pad; int format_mbus; TYPE_1__ frame_interval; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int,int,int ,int ,int *) ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 struct prp_priv* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_6)
{
 struct prp_priv *VAR_7 = FUNC_3(VAR_6);
 int VAR_8, VAR_9;
 u32 VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7->pad[VAR_8].flags = (VAR_8 == VAR_4) ?
   VAR_1 : VAR_2;
 }


 VAR_7->frame_interval.numerator = 1;
 VAR_7->frame_interval.denominator = 30;


 FUNC_0(&VAR_10, 0, VAR_0);
 VAR_9 = FUNC_1(&VAR_7->format_mbus, 640, 480, VAR_10,
          VAR_5, ((void*)0));
 if (VAR_9)
  return VAR_9;

 return FUNC_2(&VAR_6->entity, VAR_3, VAR_7->pad);
}
