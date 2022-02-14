
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct ibmvfc_host {TYPE_1__* host; int tasklet; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int host_lock; } ;


 struct ibmvfc_host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;
 struct vio_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 unsigned long VAR_1;
 struct ibmvfc_host *VAR_2 = FUNC_0(VAR_0);
 struct vio_dev *VAR_3 = FUNC_4(VAR_0);

 FUNC_1(VAR_2->host->host_lock, VAR_1);
 FUNC_5(VAR_3);
 FUNC_3(&VAR_2->tasklet);
 FUNC_2(VAR_2->host->host_lock, VAR_1);
 return 0;
}
