
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vdic_priv {int ctrl_hdlr; TYPE_2__* pad; int active_input_pad; TYPE_1__* frame_interval; int * cc; int * format_mbus; } ;
struct v4l2_subdev {int entity; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int numerator; int denominator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (int *,int,int,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,int,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 struct vdic_priv* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct vdic_priv*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_8)
{
 struct vdic_priv *VAR_9 = FUNC_4(VAR_8);
 int VAR_10, VAR_11;
 u32 VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9->pad[VAR_10].flags = (VAR_10 == VAR_7) ?
   VAR_2 : VAR_1;

  VAR_12 = 0;
  if (VAR_10 != VAR_6)
   FUNC_0(&VAR_12, 0, VAR_0);


  VAR_11 = FUNC_1(&VAR_9->format_mbus[VAR_10],
           640, 480, VAR_12, VAR_3,
           &VAR_9->cc[VAR_10]);
  if (VAR_11)
   return VAR_11;


  VAR_9->frame_interval[VAR_10].numerator = 1;
  VAR_9->frame_interval[VAR_10].denominator = 30;
  if (VAR_10 == VAR_7)
   VAR_9->frame_interval[VAR_10].denominator *= 2;
 }

 VAR_9->active_input_pad = VAR_5;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(&VAR_8->entity, VAR_4, VAR_9->pad);
 if (VAR_11)
  FUNC_3(&VAR_9->ctrl_hdlr);

 return VAR_11;
}
