
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int syncp; } ;
struct TYPE_4__ {int lock; int list; } ;
struct slic_device {TYPE_3__* pdev; TYPE_2__ stats; TYPE_1__ upr_list; int link_lock; int upper_lock; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct slic_device*) ;
 int FUNC_3 (struct slic_device*) ;
 int FUNC_4 (struct slic_device*) ;
 int FUNC_5 (struct slic_device*) ;
 int FUNC_6 (struct slic_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct slic_device *VAR_0)
{
 int VAR_1;

 FUNC_7(&VAR_0->upper_lock);
 FUNC_7(&VAR_0->link_lock);
 FUNC_0(&VAR_0->upr_list.list);
 FUNC_7(&VAR_0->upr_list.lock);
 FUNC_8(&VAR_0->stats.syncp);

 FUNC_2(VAR_0);

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  FUNC_1(&VAR_0->pdev->dev, "failed to load firmware\n");
  return VAR_1;
 }


 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_1(&VAR_0->pdev->dev, "failed to init shared memory\n");
  return VAR_1;
 }

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1) {
  FUNC_1(&VAR_0->pdev->dev, "failed to read eeprom\n");
  goto free_sm;
 }

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);

 return 0;
free_sm:
 FUNC_3(VAR_0);

 return VAR_1;
}
