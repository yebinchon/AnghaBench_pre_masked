
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct cx23885_dev {scalar_t__ tuner_type; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct cx23885_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
    struct v4l2_frequency *VAR_7)
{
 struct cx23885_dev *VAR_8 = FUNC_1(VAR_5);

 if (VAR_8->tuner_type == VAR_1)
  return -VAR_0;
 VAR_7->type = VAR_2;
 VAR_7->frequency = VAR_8->freq;

 FUNC_0(VAR_8, VAR_4, VAR_3, VAR_7);

 return 0;
}
