
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct comedi_subdevice {scalar_t__ async_dma_dir; int spin_lock; struct comedi_async* async; } ;
struct comedi_device {int class_dev; } ;
struct comedi_buf_page {int virt_addr; } ;
struct comedi_buf_map {scalar_t__ dma_dir; struct comedi_buf_page* page_list; } ;
struct comedi_async {int prealloc_buf; struct comedi_buf_map* buf_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct comedi_buf_map* FUNC_1 (struct comedi_device*,scalar_t__,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct page**) ;
 struct page* FUNC_6 (int ) ;
 struct page** FUNC_7 (int) ;
 int FUNC_8 (struct page**,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          unsigned int VAR_6)
{
 struct comedi_async *VAR_7 = VAR_5->async;
 struct page **VAR_8 = ((void*)0);
 struct comedi_buf_map *VAR_9;
 struct comedi_buf_page *VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;

 if (!FUNC_0(VAR_1) && VAR_5->async_dma_dir != VAR_2) {
  FUNC_2(VAR_4->class_dev,
   "dma buffer allocation not supported\n");
  return;
 }

 VAR_9 = FUNC_1(VAR_4, VAR_5->async_dma_dir, VAR_6);
 if (!VAR_9)
  return;

 FUNC_3(&VAR_5->spin_lock, VAR_11);
 VAR_7->buf_map = VAR_9;
 FUNC_4(&VAR_5->spin_lock, VAR_11);

 if (VAR_9->dma_dir != VAR_2) {




  VAR_10 = &VAR_9->page_list[0];
  VAR_7->prealloc_buf = VAR_10->virt_addr;
 } else {
  VAR_8 = FUNC_7(sizeof(struct page *) * VAR_6);
  if (!VAR_8)
   return;

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_10 = &VAR_9->page_list[VAR_12];
   VAR_8[VAR_12] = FUNC_6(VAR_10->virt_addr);
  }


  VAR_7->prealloc_buf = FUNC_8(VAR_8, VAR_6, VAR_3,
        VAR_0);

  FUNC_5(VAR_8);
 }
}
