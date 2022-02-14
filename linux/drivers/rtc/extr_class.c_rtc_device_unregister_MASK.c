
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dev; int ops_lock; int * ops; int char_dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtc_device*) ;

__attribute__((used)) static void FUNC_5(struct rtc_device *VAR_0)
{
 FUNC_1(&VAR_0->ops_lock);




 FUNC_4(VAR_0);
 FUNC_0(&VAR_0->char_dev, &VAR_0->dev);
 VAR_0->ops = ((void*)0);
 FUNC_2(&VAR_0->ops_lock);
 FUNC_3(&VAR_0->dev);
}
