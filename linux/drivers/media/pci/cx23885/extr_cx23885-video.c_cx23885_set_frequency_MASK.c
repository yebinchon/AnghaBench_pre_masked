
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int dummy; } ;
struct file {int dummy; } ;
struct cx23885_dev {int board; } ;






 int FUNC_0 (struct cx23885_dev*,struct v4l2_frequency const*) ;
 int FUNC_1 (struct cx23885_dev*,struct v4l2_frequency const*) ;
 struct cx23885_dev* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_0, void *VAR_1,
 const struct v4l2_frequency *VAR_2)
{
 struct cx23885_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 switch (VAR_3->board) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 default:
  VAR_4 = FUNC_0(VAR_3, VAR_2);
 }

 return VAR_4;
}
