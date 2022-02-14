
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_video_dev {unsigned int ctrl_input; } ;
struct file {int dummy; } ;
struct comp_fh {struct most_video_dev* mdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct comp_fh *VAR_5 = VAR_3;
 struct most_video_dev *VAR_6 = VAR_5->mdev;

 if (VAR_4 >= VAR_1)
  return -VAR_0;
 VAR_6->ctrl_input = VAR_4;
 return 0;
}
