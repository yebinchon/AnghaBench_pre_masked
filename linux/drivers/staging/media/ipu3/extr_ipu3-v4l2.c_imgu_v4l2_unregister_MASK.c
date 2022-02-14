
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_device {int media_dev; int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct imgu_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct imgu_device *VAR_1)
{
 FUNC_2(&VAR_1->media_dev);
 FUNC_0(VAR_1, VAR_0);
 FUNC_3(&VAR_1->v4l2_dev);
 FUNC_1(&VAR_1->media_dev);

 return 0;
}
