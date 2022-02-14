
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sg_mapping_iter {size_t consumed; size_t length; scalar_t__ addr; } ;
struct mmc_request {TYPE_1__* data; } ;
struct cvm_mmc_host {scalar_t__ base; struct sg_mapping_iter smi; } ;
struct TYPE_2__ {int blocks; int blksz; int bytes_xfered; scalar_t__ error; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sg_mapping_iter*) ;
 int FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cvm_mmc_host *VAR_0, struct mmc_request *VAR_1,
      u64 VAR_2)
{
 struct sg_mapping_iter *VAR_3 = &VAR_0->smi;
 int VAR_4 = VAR_1->data->blocks * VAR_1->data->blksz;
 int VAR_5, VAR_6 = -1;
 u64 VAR_7 = 0;


 FUNC_5((0x10000 | (VAR_2 << 6)), VAR_0->base + FUNC_1(VAR_0));

 for (VAR_5 = 0; VAR_5 < VAR_4;) {
  if (VAR_3->consumed >= VAR_3->length) {
   if (!FUNC_3(VAR_3))
    break;
   VAR_3->consumed = 0;
  }

  if (VAR_6 < 0) {
   VAR_7 = FUNC_2(VAR_0->base + FUNC_0(VAR_0));
   VAR_6 = 56;
  }

  while (VAR_3->consumed < VAR_3->length && VAR_6 >= 0) {
   ((u8 *)VAR_3->addr)[VAR_3->consumed] = (VAR_7 >> VAR_6) & 0xff;
   VAR_5++;
   VAR_3->consumed++;
   VAR_6 -= 8;
  }
 }

 FUNC_4(VAR_3);
 VAR_1->data->bytes_xfered = VAR_5;
 VAR_1->data->error = 0;
}
