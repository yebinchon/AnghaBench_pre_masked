
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_dir; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 scalar_t__ VAR_0 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct poll_table_struct*) ;
 int FUNC_2 (struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_1, struct poll_table_struct *VAR_2)
{
 struct video_device *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->vfl_dir == VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 return FUNC_2(VAR_1, VAR_2);
}
