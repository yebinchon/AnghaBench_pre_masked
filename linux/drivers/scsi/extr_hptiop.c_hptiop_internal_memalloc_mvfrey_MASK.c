
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mvfrey_outlist_entry {int dummy; } ;
struct mvfrey_inlist_entry {int dummy; } ;
struct TYPE_8__ {char* req_virt; int req_shifted_phy; int * next; int * scp; } ;
struct TYPE_9__ {int list_count; int internal_mem_size; int inlist_phy; int outlist_phy; int outlist_cptr_phy; int * outlist_cptr; struct mvfrey_outlist_entry* outlist; struct mvfrey_inlist_entry* inlist; TYPE_3__ internal_req; TYPE_1__* mu; } ;
struct TYPE_10__ {TYPE_4__ mvfrey; } ;
struct hptiop_hba {scalar_t__ max_request_size; TYPE_5__ u; TYPE_2__* pcidev; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int inbound_conf_ctl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int,int*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hptiop_hba *VAR_1)
{
 u32 VAR_2 = FUNC_2(&VAR_1->u.mvfrey.mu->inbound_conf_ctl);
 char *VAR_3;
 dma_addr_t VAR_4;

 FUNC_0(VAR_1->max_request_size == 0);

 if (VAR_2 == 0) {
  FUNC_0(1);
  return -1;
 }

 VAR_2 >>= 16;

 VAR_1->u.mvfrey.list_count = VAR_2;
 VAR_1->u.mvfrey.internal_mem_size = 0x800 +
   VAR_2 * sizeof(struct mvfrey_inlist_entry) +
   VAR_2 * sizeof(struct mvfrey_outlist_entry) +
   sizeof(int);

 VAR_3 = FUNC_1(&VAR_1->pcidev->dev,
   VAR_1->u.mvfrey.internal_mem_size, &VAR_4, VAR_0);
 if (!VAR_3)
  return -1;

 VAR_1->u.mvfrey.internal_req.req_virt = VAR_3;
 VAR_1->u.mvfrey.internal_req.req_shifted_phy = VAR_4 >> 5;
 VAR_1->u.mvfrey.internal_req.scp = ((void*)0);
 VAR_1->u.mvfrey.internal_req.next = ((void*)0);

 VAR_3 += 0x800;
 VAR_4 += 0x800;

 VAR_1->u.mvfrey.inlist = (struct mvfrey_inlist_entry *)VAR_3;
 VAR_1->u.mvfrey.inlist_phy = VAR_4;

 VAR_3 += VAR_2 * sizeof(struct mvfrey_inlist_entry);
 VAR_4 += VAR_2 * sizeof(struct mvfrey_inlist_entry);

 VAR_1->u.mvfrey.outlist = (struct mvfrey_outlist_entry *)VAR_3;
 VAR_1->u.mvfrey.outlist_phy = VAR_4;

 VAR_3 += VAR_2 * sizeof(struct mvfrey_outlist_entry);
 VAR_4 += VAR_2 * sizeof(struct mvfrey_outlist_entry);

 VAR_1->u.mvfrey.outlist_cptr = (__le32 *)VAR_3;
 VAR_1->u.mvfrey.outlist_cptr_phy = VAR_4;

 return 0;
}
