
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct video_device*) ;
 int VAR_1 ;

void FUNC_5(struct video_device *VAR_2)
{

 if (!VAR_2 || !FUNC_4(VAR_2))
  return;

 FUNC_2(&VAR_1);



 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_3(&VAR_1);
 FUNC_1(&VAR_2->dev);
}
