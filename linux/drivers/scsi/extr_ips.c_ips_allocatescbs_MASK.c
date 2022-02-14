
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ std_list; scalar_t__ enh_list; } ;
struct TYPE_13__ {struct TYPE_13__* q_next; void* sg_busaddr; TYPE_2__ sg_list; void* scb_busaddr; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_14__ {int max_cmds; TYPE_3__* scb_freelist; TYPE_3__* scbs; TYPE_1__* pcidev; } ;
typedef TYPE_4__ ips_ha_t ;
typedef void* dma_addr_t ;
struct TYPE_15__ {scalar_t__ std_list; scalar_t__ enh_list; int * list; } ;
struct TYPE_11__ {int dev; } ;
typedef TYPE_5__ IPS_SG_LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,int) ;
 void* FUNC_3 (int *,int,void**,int ) ;
 int FUNC_4 (int *,int,TYPE_3__*,void*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_2)
{
 ips_scb_t *VAR_3;
 IPS_SG_LIST VAR_4;
 int VAR_5;
 dma_addr_t VAR_6, VAR_7;

 FUNC_2("ips_allocatescbs", 1);


 VAR_2->scbs = FUNC_3(&VAR_2->pcidev->dev,
   VAR_2->max_cmds * sizeof (ips_scb_t),
   &VAR_6, VAR_0);
 if (VAR_2->scbs == ((void*)0))
  return 0;
 VAR_4.list = FUNC_3(&VAR_2->pcidev->dev,
   FUNC_0(VAR_2) * VAR_1 * VAR_2->max_cmds,
   &VAR_7, VAR_0);
 if (VAR_4.list == ((void*)0)) {
  FUNC_4(&VAR_2->pcidev->dev,
        VAR_2->max_cmds * sizeof (ips_scb_t), VAR_2->scbs,
        VAR_6);
  return 0;
 }

 FUNC_5(VAR_2->scbs, 0, VAR_2->max_cmds * sizeof (ips_scb_t));

 for (VAR_5 = 0; VAR_5 < VAR_2->max_cmds; VAR_5++) {
  VAR_3 = &VAR_2->scbs[VAR_5];
  VAR_3->scb_busaddr = VAR_6 + sizeof (ips_scb_t) * VAR_5;

  if (FUNC_1(VAR_2)) {
   VAR_3->sg_list.enh_list =
       VAR_4.enh_list + VAR_5 * VAR_1;
   VAR_3->sg_busaddr =
       VAR_7 + FUNC_0(VAR_2) * VAR_1 * VAR_5;
  } else {
   VAR_3->sg_list.std_list =
       VAR_4.std_list + VAR_5 * VAR_1;
   VAR_3->sg_busaddr =
       VAR_7 + FUNC_0(VAR_2) * VAR_1 * VAR_5;
  }


  if (VAR_5 < VAR_2->max_cmds - 1) {
   VAR_3->q_next = VAR_2->scb_freelist;
   VAR_2->scb_freelist = VAR_3;
  }
 }


 return (1);
}
