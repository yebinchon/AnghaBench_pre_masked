
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slaves; } ;
struct cpsw_common {TYPE_3__* slaves; TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct TYPE_5__ {scalar_t__ speed; scalar_t__ link; } ;



__attribute__((used)) static int FUNC_0(struct cpsw_common *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < VAR_0->data.slaves; VAR_1++)
  if (VAR_0->slaves[VAR_1].phy && VAR_0->slaves[VAR_1].phy->link)
   VAR_2 += VAR_0->slaves[VAR_1].phy->speed;

 return VAR_2;
}
