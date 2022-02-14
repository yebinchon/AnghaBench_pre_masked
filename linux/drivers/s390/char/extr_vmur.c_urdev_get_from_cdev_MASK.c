
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urdev {int dummy; } ;
struct ccw_device {int dev; } ;


 struct urdev* FUNC_0 (int *) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct urdev*) ;

__attribute__((used)) static struct urdev *FUNC_5(struct ccw_device *VAR_0)
{
 struct urdev *VAR_1;
 unsigned long VAR_2;

 FUNC_2(FUNC_1(VAR_0), VAR_2);
 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  FUNC_4(VAR_1);
 FUNC_3(FUNC_1(VAR_0), VAR_2);
 return VAR_1;
}
