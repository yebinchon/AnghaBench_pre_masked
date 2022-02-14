
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;
struct TYPE_6__ {int powergates_lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (TYPE_1__*,unsigned long,int,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,unsigned long*,unsigned long*,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,unsigned long) ;

int FUNC_7(enum tegra_io_pad VAR_2)
{
 unsigned long VAR_3, VAR_4;
 u32 VAR_5;
 int VAR_6;

 FUNC_1(&VAR_1->powergates_lock);

 VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_3, &VAR_4, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev, "failed to prepare I/O pad: %d\n", VAR_6);
  goto unlock;
 }

 FUNC_6(VAR_1, VAR_0 | VAR_5, VAR_3);

 VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_5, 0, 250);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1->dev, "failed to enable I/O pad: %d\n", VAR_6);
  goto unlock;
 }

 FUNC_5(VAR_1);

unlock:
 FUNC_2(&VAR_1->powergates_lock);
 return VAR_6;
}
