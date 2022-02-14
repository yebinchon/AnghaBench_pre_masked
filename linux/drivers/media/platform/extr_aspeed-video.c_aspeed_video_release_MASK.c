
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct aspeed_video {int video_lock; } ;


 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (struct aspeed_video*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct file*) ;
 struct aspeed_video* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 int VAR_1;
 struct aspeed_video *VAR_2 = FUNC_5(VAR_0);

 FUNC_2(&VAR_2->video_lock);

 if (FUNC_4(VAR_0))
  FUNC_1(VAR_2);

 VAR_1 = FUNC_0(VAR_0, ((void*)0));

 FUNC_3(&VAR_2->video_lock);

 return VAR_1;
}
