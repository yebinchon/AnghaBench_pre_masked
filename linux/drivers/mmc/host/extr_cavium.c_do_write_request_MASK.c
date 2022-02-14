
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct sg_mapping_iter {size_t consumed; size_t length; scalar_t__ addr; } ;
struct mmc_request {TYPE_1__* data; } ;
struct cvm_mmc_host {scalar_t__ base; struct sg_mapping_iter smi; } ;
struct TYPE_2__ {unsigned int blocks; unsigned int blksz; int sg_len; int sg; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int VAR_0 ;
 int FUNC_2 (struct sg_mapping_iter*) ;
 int FUNC_3 (struct sg_mapping_iter*,int ,int ,int ) ;
 int FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cvm_mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 unsigned int VAR_3 = VAR_2->data->blocks * VAR_2->data->blksz;
 struct sg_mapping_iter *VAR_4 = &VAR_1->smi;
 unsigned int VAR_5;
 int VAR_6 = 56;
 u64 VAR_7 = 0;


 FUNC_3(VAR_4, VAR_2->data->sg, VAR_2->data->sg_len, VAR_0);


 FUNC_5(0x10000ull, VAR_1->base + FUNC_1(VAR_1));

 for (VAR_5 = 0; VAR_5 < VAR_3;) {
  if (VAR_4->consumed >= VAR_4->length) {
   if (!FUNC_2(VAR_4))
    break;
   VAR_4->consumed = 0;
  }

  while (VAR_4->consumed < VAR_4->length && VAR_6 >= 0) {
   VAR_7 |= (u64)((u8 *)VAR_4->addr)[VAR_4->consumed] << VAR_6;
   VAR_5++;
   VAR_4->consumed++;
   VAR_6 -= 8;
  }

  if (VAR_6 < 0) {
   FUNC_5(VAR_7, VAR_1->base + FUNC_0(VAR_1));
   VAR_6 = 56;
   VAR_7 = 0;
  }
 }
 FUNC_4(VAR_4);
}
