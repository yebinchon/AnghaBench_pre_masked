
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ips_scb_t ;
struct TYPE_9__ {TYPE_5__* scbs; TYPE_1__* pcidev; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_8__ {TYPE_5__* list; } ;
struct TYPE_10__ {int scb_busaddr; int sg_busaddr; TYPE_2__ sg_list; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int,TYPE_5__*,int ) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_1, int VAR_2)
{
 if (VAR_1->scbs) {
  FUNC_1(&VAR_1->pcidev->dev,
        FUNC_0(VAR_1) * VAR_0 * VAR_2,
        VAR_1->scbs->sg_list.list,
        VAR_1->scbs->sg_busaddr);
  FUNC_1(&VAR_1->pcidev->dev, sizeof (ips_scb_t) * VAR_2,
        VAR_1->scbs, VAR_1->scbs->scb_busaddr);
  VAR_1->scbs = ((void*)0);
 }
 return 1;
}
