
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct file {int dummy; } ;
struct cx23885_dev {scalar_t__ tuner_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;
 struct cx23885_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct cx23885_dev *VAR_7 = FUNC_3(VAR_4);

 if (VAR_7->tuner_type == VAR_1)
  return -VAR_0;
 if (0 != VAR_6->index)
  return -VAR_0;
 FUNC_2(VAR_6->name, "Television", sizeof(VAR_6->name));
 FUNC_0(VAR_7, VAR_3, VAR_2, VAR_6);

 FUNC_1(1, "VIDIOC_G_TUNER: tuner type %d\n", VAR_6->type);

 return 0;
}
