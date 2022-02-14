
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; } ;
struct rpmsg_ctrldev {int dev; } ;


 struct rpmsg_ctrldev* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct rpmsg_device *VAR_1)
{
 struct rpmsg_ctrldev *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3;


 VAR_3 = FUNC_3(&VAR_2->dev, ((void*)0), VAR_0);
 if (VAR_3)
  FUNC_1(&VAR_1->dev, "failed to nuke endpoints: %d\n", VAR_3);

 FUNC_2(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);
}
