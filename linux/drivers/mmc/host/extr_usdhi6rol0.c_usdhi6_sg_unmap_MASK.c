
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct page* page; scalar_t__ mapped; } ;
struct TYPE_5__ {struct page* page; scalar_t__ mapped; } ;
struct usdhi6_host {size_t head_len; size_t page_idx; TYPE_3__ pg; TYPE_2__ head_pg; int bounce_buf; struct scatterlist* sg; TYPE_1__* mrq; } ;
struct scatterlist {size_t offset; } ;
struct page {int dummy; } ;
struct mmc_data {int sg_len; int flags; size_t blksz; int error; struct scatterlist* sg; } ;
struct TYPE_4__ {struct mmc_data* data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__,int ,size_t) ;
 size_t FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct usdhi6_host *VAR_3, bool VAR_4)
{
 struct mmc_data *VAR_5 = VAR_3->mrq->data;
 struct page *VAR_6 = VAR_3->head_pg.page;

 if (VAR_6) {

  struct scatterlist *VAR_7 = VAR_5->sg_len > 1 ?
   VAR_3->sg : VAR_5->sg;
  size_t VAR_8 = VAR_3->head_len;

  if (!VAR_5->error && VAR_5->flags & VAR_0) {
   FUNC_2(VAR_3->head_pg.mapped + VAR_2 - VAR_8,
          VAR_3->bounce_buf, VAR_8);
   FUNC_2(VAR_3->pg.mapped, VAR_3->bounce_buf + VAR_8,
          VAR_5->blksz - VAR_8);
  }

  FUNC_0(VAR_6);
  FUNC_1(VAR_6);

  VAR_3->head_pg.page = ((void*)0);

  if (!VAR_4 && FUNC_3(VAR_7) + VAR_7->offset >
      (VAR_3->page_idx << VAR_1) + VAR_5->blksz - VAR_8)

   return;
 }

 VAR_6 = VAR_3->pg.page;
 if (!VAR_6)
  return;

 FUNC_0(VAR_6);
 FUNC_1(VAR_6);

 VAR_3->pg.page = ((void*)0);
}
