
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_host {TYPE_1__* host; int tasklet; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct ibmvfc_host *VAR_3 = (struct ibmvfc_host *)VAR_2;
 unsigned long VAR_4;

 FUNC_0(VAR_3->host->host_lock, VAR_4);
 FUNC_4(FUNC_3(VAR_3->dev));
 FUNC_2(&VAR_3->tasklet);
 FUNC_1(VAR_3->host->host_lock, VAR_4);
 return VAR_0;
}
