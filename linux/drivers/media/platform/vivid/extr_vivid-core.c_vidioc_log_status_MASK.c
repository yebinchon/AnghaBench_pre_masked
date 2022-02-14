
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int tpg; } ;
struct video_device {scalar_t__ vfl_dir; scalar_t__ vfl_type; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct vivid_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_3(VAR_2);
 struct video_device *VAR_5 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_3);
 if (VAR_5->vfl_dir == VAR_0 && VAR_5->vfl_type == VAR_1)
  FUNC_0(&VAR_4->tpg);
 return 0;
}
