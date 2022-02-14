
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arche_platform_drvdata {scalar_t__ wake_detect_state; int wake_lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arche_platform_drvdata*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct arche_platform_drvdata *VAR_8 = VAR_7;
 unsigned long VAR_9;

 FUNC_3(&VAR_8->wake_lock, VAR_9);
 if (VAR_8->wake_detect_state != VAR_2) {

  FUNC_4(&VAR_8->wake_lock, VAR_9);
  return VAR_0;
 }

 FUNC_0(VAR_8,
          VAR_1);
 FUNC_4(&VAR_8->wake_lock, VAR_9);


 FUNC_2(VAR_8->dev, ((void*)0), VAR_5);


 FUNC_2(VAR_8->dev, ((void*)0), VAR_4);


 if (FUNC_5(1))
  FUNC_1(VAR_8->dev, "failed to control hub device\n");

 FUNC_3(&VAR_8->wake_lock, VAR_9);
 FUNC_0(VAR_8, VAR_3);
 FUNC_4(&VAR_8->wake_lock, VAR_9);

 return VAR_0;
}
