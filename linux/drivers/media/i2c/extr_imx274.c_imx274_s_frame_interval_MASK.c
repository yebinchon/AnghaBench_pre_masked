
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {TYPE_3__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; } ;
struct TYPE_4__ {struct v4l2_ctrl* exposure; } ;
struct stimx274 {int lock; TYPE_2__* client; TYPE_1__ ctrls; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl*,int,int,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct stimx274*,int ) ;
 int FUNC_4 (struct stimx274*,TYPE_3__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct stimx274* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_frame_interval *VAR_2)
{
 struct stimx274 *VAR_3 = FUNC_7(VAR_1);
 struct v4l2_ctrl *VAR_4 = VAR_3->ctrls.exposure;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_5(&VAR_3->lock);
 VAR_8 = FUNC_4(VAR_3, VAR_2->interval);

 if (!VAR_8) {




  VAR_5 = VAR_0;
  VAR_6 = VAR_2->interval.numerator * 1000000
   / VAR_2->interval.denominator;
  VAR_7 = VAR_6;
  if (FUNC_0(VAR_4, VAR_5, VAR_6, 1, VAR_7)) {
   FUNC_2(&VAR_3->client->dev,
    "Exposure ctrl range update failed\n");
   goto unlock;
  }


  FUNC_3(VAR_3, VAR_4->val);

  FUNC_1(&VAR_3->client->dev, "set frame interval to %uus\n",
   VAR_2->interval.numerator * 1000000
   / VAR_2->interval.denominator);
 }

unlock:
 FUNC_6(&VAR_3->lock);

 return VAR_8;
}
