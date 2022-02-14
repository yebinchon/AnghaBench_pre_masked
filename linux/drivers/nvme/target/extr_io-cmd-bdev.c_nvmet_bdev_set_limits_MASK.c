
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct queue_limits {int physical_block_size; int logical_block_size; int const discard_granularity; int const io_opt; } ;
struct nvme_id_ns {int nsfeat; void* nows; void* npdg; void* npda; void* npwg; void* npwa; void* nacwu; void* nawupf; void* nawun; } ;
struct block_device {int dummy; } ;
typedef void* __le16 ;
struct TYPE_2__ {struct queue_limits limits; } ;


 TYPE_1__* FUNC_0 (struct block_device*) ;
 void* FUNC_1 (int const) ;

void FUNC_2(struct block_device *VAR_0, struct nvme_id_ns *VAR_1)
{
 const struct queue_limits *VAR_2 = &FUNC_0(VAR_0)->limits;

 const u32 VAR_3 = VAR_2->physical_block_size / VAR_2->logical_block_size;

 const __le16 VAR_4 = FUNC_1(VAR_3);
 VAR_1->nsfeat |= 1 << 1;
 VAR_1->nawun = VAR_4;
 VAR_1->nawupf = VAR_4;
 VAR_1->nacwu = VAR_4;






 VAR_1->nsfeat |= 1 << 4;

 VAR_1->npwg = VAR_4;

 VAR_1->npwa = VAR_1->npwg;

 VAR_1->npdg = FUNC_1(VAR_2->discard_granularity / VAR_2->logical_block_size);

 VAR_1->npda = VAR_1->npdg;

 VAR_1->nows = FUNC_1(VAR_2->io_opt / VAR_2->logical_block_size);
}
