
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ispif_line {size_t vfe_id; struct ispif_device* ispif; } ;
struct ispif_device {int power_count; int power_lock; int clock; int nclocks; TYPE_1__* intf_cmd; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* cmd_1; void* cmd_0; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct ispif_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 struct device* FUNC_8 (struct ispif_device*) ;
 struct ispif_line* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct ispif_line *VAR_3 = FUNC_9(VAR_1);
 struct ispif_device *VAR_4 = VAR_3->ispif;
 struct device *VAR_5 = FUNC_8(VAR_4);
 int VAR_6 = 0;

 FUNC_4(&VAR_4->power_lock);

 if (VAR_2) {
  if (VAR_4->power_count) {

   VAR_4->power_count++;
   goto exit;
  }

  VAR_6 = FUNC_6(VAR_5);
  if (VAR_6 < 0)
   goto exit;

  VAR_6 = FUNC_1(VAR_4->nclocks, VAR_4->clock, VAR_5);
  if (VAR_6 < 0) {
   FUNC_7(VAR_5);
   goto exit;
  }

  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 < 0) {
   FUNC_7(VAR_5);
   FUNC_0(VAR_4->nclocks, VAR_4->clock);
   goto exit;
  }

  VAR_4->intf_cmd[VAR_3->vfe_id].cmd_0 = VAR_0;
  VAR_4->intf_cmd[VAR_3->vfe_id].cmd_1 = VAR_0;

  VAR_4->power_count++;
 } else {
  if (VAR_4->power_count == 0) {
   FUNC_2(VAR_5, "ispif power off on power_count == 0\n");
   goto exit;
  } else if (VAR_4->power_count == 1) {
   FUNC_0(VAR_4->nclocks, VAR_4->clock);
   FUNC_7(VAR_5);
  }

  VAR_4->power_count--;
 }

exit:
 FUNC_5(&VAR_4->power_lock);

 return VAR_6;
}
