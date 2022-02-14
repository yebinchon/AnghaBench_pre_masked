
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct myri10ge_rx_buf {int watchdog_needed; int fill_cnt; int cnt; int mask; int page_offset; TYPE_1__* shadow; int * lanai; int bus; TYPE_2__* info; struct page* page; } ;
struct myri10ge_priv {int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int page_offset; struct page* page; } ;
struct TYPE_3__ {void* addr_high; void* addr_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct page*,int ) ;
 struct page* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (struct page*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct myri10ge_priv *VAR_5, struct myri10ge_rx_buf *VAR_6,
   int VAR_7, int VAR_8)
{
 struct page *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;




 if (FUNC_11(VAR_6->watchdog_needed && !VAR_8))
  return;


 while (VAR_6->fill_cnt != (VAR_6->cnt + VAR_6->mask + 1)) {
  VAR_11 = VAR_6->fill_cnt & VAR_6->mask;
  if (VAR_6->page_offset + VAR_7 <= VAR_2) {

   FUNC_6(VAR_6->page);
  } else {

   VAR_9 =
       FUNC_4(VAR_0 | VAR_4,
     VAR_1);
   if (FUNC_11(VAR_9 == ((void*)0))) {
    if (VAR_6->fill_cnt - VAR_6->cnt < 16)
     VAR_6->watchdog_needed = 1;
    return;
   }

   VAR_10 = FUNC_10(VAR_5->pdev, VAR_9, 0,
        VAR_2,
        VAR_3);
   if (FUNC_11(FUNC_9(VAR_5->pdev, VAR_10))) {
    FUNC_3(VAR_9, VAR_1);
    if (VAR_6->fill_cnt - VAR_6->cnt < 16)
     VAR_6->watchdog_needed = 1;
    return;
   }

   VAR_6->page = VAR_9;
   VAR_6->page_offset = 0;
   VAR_6->bus = VAR_10;

  }
  VAR_6->info[VAR_11].page = VAR_6->page;
  VAR_6->info[VAR_11].page_offset = VAR_6->page_offset;


  FUNC_5(&VAR_6->info[VAR_11], VAR_10, VAR_6->bus);
  VAR_6->shadow[VAR_11].addr_low =
      FUNC_7(FUNC_1(VAR_6->bus) + VAR_6->page_offset);
  VAR_6->shadow[VAR_11].addr_high =
      FUNC_7(FUNC_0(VAR_6->bus));


  VAR_6->page_offset += FUNC_2(VAR_7);







  VAR_6->fill_cnt++;


  if ((VAR_11 & 7) == 7) {
   FUNC_8(&VAR_6->lanai[VAR_11 - 7],
         &VAR_6->shadow[VAR_11 - 7]);
  }
 }
}
