
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct v4l2_ctrl {int dummy; } ;
struct cx23885_dev {scalar_t__ tuner_type; int ctrl_handler; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 struct v4l2_ctrl* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (struct v4l2_ctrl*,int) ;

__attribute__((used)) static int FUNC_6(struct cx23885_dev *VAR_5, const struct v4l2_frequency *VAR_6)
{
 struct v4l2_ctrl *VAR_7;
 int VAR_8 = 1;

 if (VAR_5->tuner_type == VAR_1)
  return -VAR_0;
 if (FUNC_2(VAR_6->tuner != 0))
  return -VAR_0;

 VAR_5->freq = VAR_6->frequency;


 VAR_7 = FUNC_3(&VAR_5->ctrl_handler, VAR_2);
 if (VAR_7) {
  VAR_8 = FUNC_4(VAR_7);
  if (!VAR_8)
   FUNC_5(VAR_7, 1);
 }

 FUNC_0(VAR_5, VAR_4, VAR_3, VAR_6);


 FUNC_1(100);


 if (VAR_8 == 0)
  FUNC_5(VAR_7, VAR_8);

 return 0;
}
