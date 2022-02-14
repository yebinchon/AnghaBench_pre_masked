
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sg_entry {void* flags; void* len; void* target_addr; } ;
struct genwqe_sgl {size_t user_size; unsigned long fpage_offs; int nr_pages; scalar_t__ sgl_dma_addr; scalar_t__ fpage_dma_addr; scalar_t__ lpage_dma_addr; int * lpage; int * fpage; struct sg_entry* sgl; } ;
struct genwqe_dev {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned int) ;
 void* FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (size_t,scalar_t__) ;

int FUNC_4(struct genwqe_dev *VAR_4, struct genwqe_sgl *VAR_5,
       dma_addr_t *VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9;
 unsigned long VAR_10, VAR_11;
 dma_addr_t VAR_12 = 0;
 struct sg_entry *VAR_13, *VAR_14 = ((void*)0);
 size_t VAR_15 = VAR_5->user_size;

 VAR_10 = 128;
 VAR_11 = VAR_5->fpage_offs;

 VAR_13 = &VAR_5->sgl[0];
 VAR_9 = 0;
 while (VAR_9 < VAR_5->nr_pages) {
  dma_addr_t VAR_16;
  unsigned int VAR_17;


  VAR_8 = 0;
  VAR_13[VAR_8].target_addr = FUNC_2(VAR_5->sgl_dma_addr + VAR_10);
  VAR_13[VAR_8].len = FUNC_1(128);
  VAR_13[VAR_8].flags = FUNC_1(VAR_1);
  VAR_8++;

  while (VAR_8 < 8) {

   VAR_17 = FUNC_3(VAR_15, VAR_0 - VAR_11);

   if ((VAR_9 == 0) && (VAR_5->fpage != ((void*)0))) {
    VAR_16 = VAR_5->fpage_dma_addr + VAR_11;

   } else if ((VAR_9 == VAR_5->nr_pages - 1) &&
       (VAR_5->lpage != ((void*)0))) {
    VAR_16 = VAR_5->lpage_dma_addr;
   } else {
    VAR_16 = VAR_6[VAR_9] + VAR_11;
   }

   VAR_15 -= VAR_17;
   VAR_11 = 0;

   if (VAR_12 == VAR_16) {
    u32 VAR_18 = FUNC_0(VAR_14->len);





    VAR_14->len = FUNC_1(VAR_18 +
         VAR_17);

    VAR_9++;
    if (VAR_9 == VAR_5->nr_pages)
     goto fixup;

    VAR_12 = VAR_16 + VAR_17;
    continue;
   }


   VAR_13[VAR_8].target_addr = FUNC_2(VAR_16);
   VAR_13[VAR_8].len = FUNC_1(VAR_17);
   VAR_13[VAR_8].flags = FUNC_1(VAR_2);
   VAR_12 = VAR_16 + VAR_17;
   VAR_14 = &VAR_13[VAR_8];
   VAR_8++;

   VAR_9++;
   if (VAR_9 == VAR_5->nr_pages)
    goto fixup;
  }
  VAR_10 += 128;
  VAR_13 += 8;
 }
 fixup:
 if (VAR_8 == 1) {
  VAR_13 -= 8;
  VAR_8 = 7;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_13[VAR_7] = VAR_13[VAR_7 + 1];

 VAR_13[VAR_7].target_addr = FUNC_2(0);
 VAR_13[VAR_7].len = FUNC_1(0);
 VAR_13[VAR_7].flags = FUNC_1(VAR_3);
 return 0;
}
