
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_trb {int control; int length; int buffer; } ;
struct cdns3_endpoint {int trb_pool_dma; size_t dequeue; char* name; size_t enqueue; int free_trbs; int ccs; int pcs; struct cdns3_trb* trb_pool; int type; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cdns3_endpoint*,struct cdns3_trb*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;

__attribute__((used)) static inline char *FUNC_4(struct cdns3_endpoint *VAR_1,
       struct cdns3_trb *VAR_2, char *VAR_3)
{
 dma_addr_t VAR_4 = VAR_1->trb_pool_dma;
 struct cdns3_trb *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_1->type);

 VAR_5 = &VAR_1->trb_pool[VAR_1->dequeue];
 VAR_7 += FUNC_3(VAR_3 + VAR_7, "\n\t\tRing contents for %s:", VAR_1->name);

 VAR_7 += FUNC_3(VAR_3 + VAR_7,
         "\n\t\tRing deq index: %d, trb: %p (virt), 0x%llx (dma)\n",
         VAR_1->dequeue, VAR_5,
         (unsigned long long)FUNC_1(VAR_1, VAR_5));

 VAR_5 = &VAR_1->trb_pool[VAR_1->enqueue];
 VAR_7 += FUNC_3(VAR_3 + VAR_7,
         "\t\tRing enq index: %d, trb: %p (virt), 0x%llx (dma)\n",
         VAR_1->enqueue, VAR_5,
         (unsigned long long)FUNC_1(VAR_1, VAR_5));

 VAR_7 += FUNC_3(VAR_3 + VAR_7,
         "\t\tfree trbs: %d, CCS=%d, PCS=%d\n",
         VAR_1->free_trbs, VAR_1->ccs, VAR_1->pcs);

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;

 if (VAR_6 > VAR_0) {
  FUNC_3(VAR_3 + VAR_7, "\t\tTo big transfer ring %d\n",
   VAR_6);
  return VAR_3;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  VAR_5 = &VAR_2[VAR_8];
  VAR_7 += FUNC_3(VAR_3 + VAR_7,
   "\t\t@%pad %08x %08x %08x\n", &VAR_4,
   FUNC_2(VAR_5->buffer),
   FUNC_2(VAR_5->length),
   FUNC_2(VAR_5->control));
  VAR_4 += sizeof(*VAR_5);
 }

 return VAR_3;
}
