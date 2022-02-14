
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int minor; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct mei_device*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_5)
{
 int VAR_6;

 FUNC_2(&VAR_4);
 VAR_6 = FUNC_1(&VAR_3, VAR_5, 0, VAR_2, VAR_1);
 if (VAR_6 >= 0)
  VAR_5->minor = VAR_6;
 else if (VAR_6 == -VAR_0)
  FUNC_0(VAR_5->dev, "too many mei devices\n");

 FUNC_3(&VAR_4);
 return VAR_6;
}
