
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {int tuner; size_t index; int type; } ;
struct hackrf_dev {int dev; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct v4l2_frequency_band*) ;
 int VAR_0 ;
 struct v4l2_frequency_band* VAR_1 ;
 struct v4l2_frequency_band* VAR_2 ;
 int FUNC_1 (int ,char*,int,int ,size_t) ;
 struct hackrf_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
  struct v4l2_frequency_band *VAR_5)
{
 struct hackrf_dev *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 FUNC_1(VAR_6->dev, "tuner=%d type=%d index=%d\n",
   VAR_5->tuner, VAR_5->type, VAR_5->index);

 if (VAR_5->tuner == 0) {
  if (VAR_5->index >= FUNC_0(VAR_1)) {
   VAR_7 = -VAR_0;
  } else {
   *VAR_5 = VAR_1[VAR_5->index];
   VAR_7 = 0;
  }
 } else if (VAR_5->tuner == 1) {
  if (VAR_5->index >= FUNC_0(VAR_2)) {
   VAR_7 = -VAR_0;
  } else {
   *VAR_5 = VAR_2[VAR_5->index];
   VAR_7 = 0;
  }
 } else {
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
