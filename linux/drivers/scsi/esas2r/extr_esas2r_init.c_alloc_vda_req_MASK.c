
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ handle; } ;
union atto_vda_req {TYPE_1__ scsi; } ;
struct esas2r_request {union atto_vda_req* vrq; struct esas2r_mem_desc* vrq_md; } ;
struct esas2r_mem_desc {scalar_t__ virt_addr; int next_desc; scalar_t__ size; } ;
struct esas2r_adapter {scalar_t__ num_vrqs; int vrq_mds_head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_mem_desc*,int) ;
 int FUNC_2 (struct esas2r_mem_desc*) ;
 struct esas2r_mem_desc* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool FUNC_5(struct esas2r_adapter *VAR_2,
     struct esas2r_request *VAR_3)
{
 struct esas2r_mem_desc *VAR_4 = FUNC_3(
  sizeof(struct esas2r_mem_desc), VAR_1);

 if (VAR_4 == ((void*)0)) {
  FUNC_0("could not alloc mem for vda request memdesc\n");
  return 0;
 }

 VAR_4->size = sizeof(union atto_vda_req) +
   VAR_0;

 if (!FUNC_1(VAR_2, VAR_4, 256)) {
  FUNC_0("could not alloc mem for vda request\n");
  FUNC_2(VAR_4);
  return 0;
 }

 VAR_2->num_vrqs++;
 FUNC_4(&VAR_4->next_desc, &VAR_2->vrq_mds_head);

 VAR_3->vrq_md = VAR_4;
 VAR_3->vrq = (union atto_vda_req *)VAR_4->virt_addr;
 VAR_3->vrq->scsi.handle = VAR_2->num_vrqs;

 return 1;
}
