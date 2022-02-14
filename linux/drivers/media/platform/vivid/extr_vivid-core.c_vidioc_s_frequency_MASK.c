
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int radio_tx_freq; int radio_rx_freq; } ;
struct video_device {scalar_t__ vfl_type; scalar_t__ vfl_dir; } ;
struct v4l2_frequency {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *,struct v4l2_frequency const*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_frequency const*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_frequency const*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4, const struct v4l2_frequency *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_1(VAR_3);
 struct video_device *VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->vfl_type == VAR_1)
  return FUNC_2(VAR_3,
   VAR_7->vfl_dir == VAR_0 ?
   &VAR_6->radio_rx_freq : &VAR_6->radio_tx_freq, VAR_5);
 if (VAR_7->vfl_type == VAR_2)
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 return FUNC_4(VAR_3, VAR_4, VAR_5);
}
