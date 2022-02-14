
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_bt_timings {int height; int width; } ;
struct tvp7002 {int hdl; scalar_t__ streaming; TYPE_2__* current_timings; } ;
struct TYPE_7__ {struct v4l2_bt_timings bt; } ;
struct TYPE_8__ {TYPE_3__ timings; } ;
struct TYPE_5__ {struct v4l2_bt_timings bt; } ;
struct TYPE_6__ {TYPE_1__ timings; } ;


 int VAR_0 ;
 struct tvp7002* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2)
{
 struct tvp7002 *VAR_3 = FUNC_0(VAR_2);
 const struct v4l2_bt_timings *VAR_4;
 int VAR_5;


 FUNC_1(VAR_2, &VAR_5);

 VAR_4 = &VAR_3->current_timings->timings.bt;
 FUNC_3(VAR_2, "Selected DV Timings: %ux%u\n", VAR_4->width, VAR_4->height);
 if (VAR_5 == VAR_0) {
  FUNC_3(VAR_2, "Detected DV Timings: None\n");
 } else {
  VAR_4 = &VAR_1[VAR_5].timings.bt;
  FUNC_3(VAR_2, "Detected DV Timings: %ux%u\n",
    VAR_4->width, VAR_4->height);
 }
 FUNC_3(VAR_2, "Streaming enabled: %s\n",
     VAR_3->streaming ? "yes" : "no");


 FUNC_2(&VAR_3->hdl, VAR_2->name);

 return 0;
}
