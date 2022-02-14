
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int cdev; int flags; int port; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 struct raw3215_info* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raw3215_info*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ccw_device *VAR_1)
{
 struct raw3215_info *VAR_2;
 unsigned long VAR_3;


 VAR_2 = FUNC_0(&VAR_1->dev);
 FUNC_3(FUNC_1(VAR_2->cdev), VAR_3);
 FUNC_5(&VAR_2->port, 0);
 VAR_2->flags |= VAR_0;
 FUNC_2(VAR_2);
 VAR_2->flags &= ~VAR_0;
 FUNC_4(FUNC_1(VAR_2->cdev), VAR_3);
 return 0;
}
