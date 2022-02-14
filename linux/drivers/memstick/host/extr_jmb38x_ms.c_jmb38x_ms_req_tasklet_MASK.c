
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memstick_host {int dummy; } ;
struct jmb38x_ms_host {int lock; TYPE_2__* chip; int req; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct memstick_host*) ;
 int FUNC_2 (struct memstick_host*,int *) ;
 struct jmb38x_ms_host* FUNC_3 (struct memstick_host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 struct memstick_host *VAR_1 = (struct memstick_host *)VAR_0;
 struct jmb38x_ms_host *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_4(&VAR_2->lock, VAR_3);
 if (!VAR_2->req) {
  do {
   VAR_4 = FUNC_2(VAR_1, &VAR_2->req);
   FUNC_0(&VAR_2->chip->pdev->dev, "tasklet req %d\n", VAR_4);
  } while (!VAR_4 && FUNC_1(VAR_1));
 }
 FUNC_5(&VAR_2->lock, VAR_3);
}
