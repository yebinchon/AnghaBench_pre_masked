
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dev; scalar_t__ online; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ccw_device*,int) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_11(struct ccw_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0("ur_remove\n");

 FUNC_4(&VAR_0);

 if (VAR_1->online)
  FUNC_9(VAR_1, 1);
 FUNC_8(&VAR_1->dev);

 FUNC_6(FUNC_3(VAR_1), VAR_2);
 FUNC_10(FUNC_1(&VAR_1->dev));
 FUNC_2(&VAR_1->dev, ((void*)0));
 FUNC_7(FUNC_3(VAR_1), VAR_2);

 FUNC_5(&VAR_0);
}
