
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct video_i2c_data {scalar_t__ kthread_vid_cap; TYPE_2__ v4l2_dev; scalar_t__ sequence; TYPE_1__* chip; int regmap; } ;
struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* setup ) (struct video_i2c_data*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct video_i2c_data*,char*,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (struct video_i2c_data*) ;
 struct video_i2c_data* FUNC_8 (struct vb2_queue*) ;
 int FUNC_9 (struct vb2_queue*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct video_i2c_data *VAR_4 = FUNC_8(VAR_2);
 struct device *VAR_5 = FUNC_6(VAR_4->regmap);
 int VAR_6;

 if (VAR_4->kthread_vid_cap)
  return 0;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0) {
  FUNC_5(VAR_5);
  goto error_del_list;
 }

 VAR_6 = VAR_4->chip->setup(VAR_4);
 if (VAR_6)
  goto error_rpm_put;

 VAR_4->sequence = 0;
 VAR_4->kthread_vid_cap = FUNC_1(VAR_1, VAR_4,
         "%s-vid-cap", VAR_4->v4l2_dev.name);
 VAR_6 = FUNC_0(VAR_4->kthread_vid_cap);
 if (!VAR_6)
  return 0;

error_rpm_put:
 FUNC_3(VAR_5);
 FUNC_4(VAR_5);
error_del_list:
 FUNC_9(VAR_2, VAR_0);

 return VAR_6;
}
