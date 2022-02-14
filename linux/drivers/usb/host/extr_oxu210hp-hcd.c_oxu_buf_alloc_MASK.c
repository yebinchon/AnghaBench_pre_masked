
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int* db_used; int mem_lock; TYPE_1__* mem; } ;
struct ehci_qtd {int qtd_buffer_len; void* buffer; int buffer_dma; } ;
struct TYPE_2__ {int * db_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct oxu_hcd*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct oxu_hcd *VAR_3, struct ehci_qtd *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;


 if (VAR_5 > VAR_1 * VAR_0) {
  FUNC_1(VAR_3, "buffer too big (%d)\n", VAR_5);
  return -VAR_2;
 }

 FUNC_2(&VAR_3->mem_lock);


 VAR_6 = (VAR_5 + VAR_1 - 1) / VAR_1;


 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7 <<= 1)
  ;


 for (VAR_8 = 0; VAR_8 < VAR_0;
   VAR_8 += FUNC_0(VAR_7, (int)VAR_3->db_used[VAR_8])) {


  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   if (VAR_3->db_used[VAR_8 + VAR_9])
    break;

  if (VAR_9 != VAR_7)
   continue;


  VAR_4->buffer = (void *) &VAR_3->mem->db_pool[VAR_8];
  VAR_4->buffer_dma = FUNC_4(VAR_4->buffer);

  VAR_4->qtd_buffer_len = VAR_1 * VAR_7;
  VAR_3->db_used[VAR_8] = VAR_7;

  FUNC_3(&VAR_3->mem_lock);

  return 0;
 }



 FUNC_3(&VAR_3->mem_lock);

 return -VAR_2;
}
