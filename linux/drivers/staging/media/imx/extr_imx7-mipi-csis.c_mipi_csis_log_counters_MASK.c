
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct csi_state {int slock; TYPE_1__* events; scalar_t__ debug; TYPE_2__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {scalar_t__ counter; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct csi_state *VAR_1, bool VAR_2)
{
 int VAR_3 = VAR_2 ? VAR_0 : VAR_0 - 4;
 struct device *VAR_4 = &VAR_1->pdev->dev;
 unsigned long VAR_5;

 FUNC_1(&VAR_1->slock, VAR_5);

 for (VAR_3--; VAR_3 >= 0; VAR_3--) {
  if (VAR_1->events[VAR_3].counter > 0 || VAR_1->debug)
   FUNC_0(VAR_4, "%s events: %d\n", VAR_1->events[VAR_3].name,
     VAR_1->events[VAR_3].counter);
 }
 FUNC_2(&VAR_1->slock, VAR_5);
}
