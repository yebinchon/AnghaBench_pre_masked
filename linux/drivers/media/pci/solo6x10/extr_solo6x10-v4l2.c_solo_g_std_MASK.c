
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct solo_dev {scalar_t__ video_type; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct solo_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct solo_dev *VAR_6 = FUNC_0(VAR_3);

 if (VAR_6->video_type == VAR_0)
  *VAR_5 = VAR_1;
 else
  *VAR_5 = VAR_2;
 return 0;
}
