
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int offset; } ;
struct cxgbi_task_tag_info {int hdr; } ;
struct cxgbi_pagepod_hdr {int dummy; } ;
struct cxgbi_pagepod {unsigned long long* addr; } ;
typedef unsigned long dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct cxgbi_pagepod*,int *,int) ;
 unsigned long FUNC_2 (struct scatterlist*) ;
 unsigned int FUNC_3 (struct scatterlist*) ;
 struct scatterlist* FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void
FUNC_5(struct cxgbi_pagepod *VAR_2,
      struct cxgbi_task_tag_info *VAR_3,
      struct scatterlist **VAR_4, unsigned int *VAR_5)
{
 struct scatterlist *VAR_6 = VAR_4 ? *VAR_4 : ((void*)0);
 unsigned int VAR_7 = VAR_5 ? *VAR_5 : 0;
 dma_addr_t VAR_8 = 0UL;
 unsigned int VAR_9 = 0;
 int VAR_10;

 FUNC_1(VAR_2, &VAR_3->hdr, sizeof(struct cxgbi_pagepod_hdr));

 if (VAR_6) {
  VAR_8 = FUNC_2(VAR_6);
  VAR_9 = FUNC_3(VAR_6);
 }

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_6) {
   VAR_2->addr[VAR_10] = FUNC_0(VAR_8 + VAR_7);
   VAR_7 += VAR_0;
   if (VAR_7 == (VAR_9 + VAR_6->offset)) {
    VAR_7 = 0;
    VAR_6 = FUNC_4(VAR_6);
    if (VAR_6) {
     VAR_8 = FUNC_2(VAR_6);
     VAR_9 = FUNC_3(VAR_6);
    }
   }
  } else {
   VAR_2->addr[VAR_10] = 0ULL;
  }
 }





 if (VAR_4) {
  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
 }

 if (VAR_7 == VAR_9) {
  VAR_7 = 0;
  if (VAR_6) {
   VAR_6 = FUNC_4(VAR_6);
   if (VAR_6)
    VAR_8 = FUNC_2(VAR_6);
  }
 }
 VAR_2->addr[VAR_10] = VAR_6 ? FUNC_0(VAR_8 + VAR_7) : 0ULL;
}
