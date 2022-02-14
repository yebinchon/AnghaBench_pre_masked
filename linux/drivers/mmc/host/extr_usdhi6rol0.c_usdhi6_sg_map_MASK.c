
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mapped; int page; } ;
struct usdhi6_host {size_t offset; size_t head_len; void* blk_page; TYPE_3__* mrq; TYPE_1__ pg; int mmc; struct scatterlist* sg; } ;
struct scatterlist {size_t offset; } ;
struct mmc_data {int sg_len; size_t blksz; struct scatterlist* sg; } ;
struct TYPE_6__ {TYPE_2__* cmd; struct mmc_data* data; } ;
struct TYPE_5__ {int opcode; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int ,char*,int ,int ,void*,size_t,int ,TYPE_3__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct usdhi6_host*,struct scatterlist*) ;

__attribute__((used)) static void *FUNC_8(struct usdhi6_host *VAR_1)
{
 struct mmc_data *VAR_2 = VAR_1->mrq->data;
 struct scatterlist *VAR_3 = VAR_2->sg_len > 1 ? VAR_1->sg : VAR_2->sg;
 size_t VAR_4 = VAR_0 - VAR_3->offset;
 size_t VAR_5 = VAR_4 % VAR_2->blksz;

 FUNC_0(VAR_1->pg.page, "%p not properly unmapped!\n", VAR_1->pg.page);
 if (FUNC_0(FUNC_5(VAR_3) % VAR_2->blksz,
   "SG size %u isn't a multiple of block size %u\n",
   FUNC_5(VAR_3), VAR_2->blksz))
  return ((void*)0);

 VAR_1->pg.page = FUNC_6(VAR_3);
 VAR_1->pg.mapped = FUNC_2(VAR_1->pg.page);
 VAR_1->offset = VAR_3->offset;





 VAR_1->head_len = VAR_5;

 if (VAR_4 < VAR_2->blksz)




  FUNC_7(VAR_1, VAR_3);
 else
  VAR_1->blk_page = VAR_1->pg.mapped;

 FUNC_1(FUNC_3(VAR_1->mmc), "Mapped %p (%lx) at %p + %u for CMD%u @ 0x%p\n",
  VAR_1->pg.page, FUNC_4(VAR_1->pg.page), VAR_1->pg.mapped,
  VAR_3->offset, VAR_1->mrq->cmd->opcode, VAR_1->mrq);

 return VAR_1->blk_page + VAR_1->offset;
}
