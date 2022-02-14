
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_controller {int dev; int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct spmi_controller*) ;

int FUNC_5(struct spmi_controller *VAR_3)
{
 int VAR_4;


 if (FUNC_1(!VAR_2))
  return -VAR_1;

 VAR_4 = FUNC_3(&VAR_3->dev);
 if (VAR_4)
  return VAR_4;

 if (FUNC_0(VAR_0))
  FUNC_4(VAR_3);

 FUNC_2(&VAR_3->dev, "spmi-%d registered: dev:%p\n",
  VAR_3->nr, &VAR_3->dev);

 return 0;
}
