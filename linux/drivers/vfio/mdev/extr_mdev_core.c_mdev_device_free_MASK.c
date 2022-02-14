
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_device {int dev; int next; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mdev_device *VAR_1)
{
 FUNC_3(&VAR_0);
 FUNC_2(&VAR_1->next);
 FUNC_4(&VAR_0);

 FUNC_0(&VAR_1->dev, "MDEV: destroying\n");
 FUNC_1(VAR_1);
}
