
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct peak_canfd_priv {int dummy; } ;
struct pciefd_tx_link {void* laddr_hi; void* laddr_lo; void* type; void* size; } ;
struct pciefd_page {int offset; int size; int lbase; struct pciefd_tx_link* vbase; } ;
struct pciefd_can {int tx_page_index; int tx_pages_free; int tx_lock; struct pciefd_page* tx_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_4(struct peak_canfd_priv *VAR_2, u16 VAR_3,
     int *VAR_4)
{
 struct pciefd_can *VAR_5 = (struct pciefd_can *)VAR_2;
 struct pciefd_page *VAR_6 = VAR_5->tx_pages + VAR_5->tx_page_index;
 unsigned long VAR_7;
 void *VAR_8;

 FUNC_2(&VAR_5->tx_lock, VAR_7);

 if (VAR_6->offset + VAR_3 > VAR_6->size) {
  struct pciefd_tx_link *VAR_9;


  if (!VAR_5->tx_pages_free) {
   FUNC_3(&VAR_5->tx_lock, VAR_7);


   return ((void*)0);
  }

  VAR_5->tx_pages_free--;


  VAR_9 = VAR_6->vbase + VAR_6->offset;


  VAR_5->tx_page_index = (VAR_5->tx_page_index + 1) %
          VAR_1;
  VAR_6 = VAR_5->tx_pages + VAR_5->tx_page_index;


  VAR_9->size = FUNC_0(sizeof(*VAR_9));
  VAR_9->type = FUNC_0(VAR_0);
  VAR_9->laddr_lo = FUNC_1(VAR_6->lbase);




  VAR_9->laddr_hi = 0;


  VAR_6->offset = 0;
 }

 *VAR_4 = VAR_5->tx_pages_free * VAR_6->size;

 FUNC_3(&VAR_5->tx_lock, VAR_7);

 VAR_8 = VAR_6->vbase + VAR_6->offset;


 *VAR_4 += VAR_6->size - (VAR_6->offset + VAR_3);

 return VAR_8;
}
