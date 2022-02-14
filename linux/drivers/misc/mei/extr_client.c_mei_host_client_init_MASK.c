
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev; int bus_rescan_work; scalar_t__ reset_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mei_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mei_device *VAR_1)
{
 FUNC_1(VAR_1, VAR_0);
 VAR_1->reset_count = 0;

 FUNC_4(&VAR_1->bus_rescan_work);

 FUNC_3(VAR_1->dev);
 FUNC_0(VAR_1->dev, "rpm: autosuspend\n");
 FUNC_2(VAR_1->dev);
}
