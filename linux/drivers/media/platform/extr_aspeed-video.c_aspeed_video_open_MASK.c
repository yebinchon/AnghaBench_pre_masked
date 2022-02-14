
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct aspeed_video {int video_lock; } ;


 int FUNC_0 (struct aspeed_video*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 struct aspeed_video* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 int VAR_1;
 struct aspeed_video *VAR_2 = FUNC_5(VAR_0);

 FUNC_1(&VAR_2->video_lock);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_2(&VAR_2->video_lock);
  return VAR_1;
 }

 if (FUNC_3(VAR_0))
  FUNC_0(VAR_2);

 FUNC_2(&VAR_2->video_lock);

 return 0;
}
