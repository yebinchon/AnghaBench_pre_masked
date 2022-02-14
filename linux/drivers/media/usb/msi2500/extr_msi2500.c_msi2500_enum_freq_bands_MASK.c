
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {int tuner; size_t index; int type; } ;
struct msi2500_dev {int v4l2_subdev; int dev; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 struct v4l2_frequency_band* VAR_1 ;
 int FUNC_1 (int ,char*,int,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,struct v4l2_frequency_band*) ;
 struct msi2500_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
       struct v4l2_frequency_band *VAR_6)
{
 struct msi2500_dev *VAR_7 = FUNC_3(VAR_4);
 int VAR_8;

 FUNC_1(VAR_7->dev, "tuner=%d type=%d index=%d\n",
  VAR_6->tuner, VAR_6->type, VAR_6->index);

 if (VAR_6->tuner == 0) {
  if (VAR_6->index >= FUNC_0(VAR_1)) {
   VAR_8 = -VAR_0;
  } else {
   *VAR_6 = VAR_1[VAR_6->index];
   VAR_8 = 0;
  }
 } else if (VAR_6->tuner == 1) {
  VAR_8 = FUNC_2(VAR_7->v4l2_subdev, VAR_3,
           VAR_2, VAR_6);
 } else {
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
