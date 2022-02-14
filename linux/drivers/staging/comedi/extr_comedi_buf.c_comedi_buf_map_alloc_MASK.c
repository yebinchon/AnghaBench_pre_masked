
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int hw_dev; } ;
struct comedi_buf_page {void* virt_addr; scalar_t__ dma_addr; } ;
struct comedi_buf_map {int dma_dir; unsigned int n_pages; struct comedi_buf_page* page_list; int dma_hw_dev; int refcount; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_buf_map*) ;
 void* FUNC_2 (int ,unsigned int,scalar_t__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct comedi_buf_map* FUNC_6 (int,int ) ;
 int FUNC_7 (void*) ;
 struct comedi_buf_page* FUNC_8 (int) ;

__attribute__((used)) static struct comedi_buf_map *
FUNC_9(struct comedi_device *VAR_4, enum dma_data_direction VAR_5,
       unsigned int VAR_6)
{
 struct comedi_buf_map *VAR_7;
 struct comedi_buf_page *VAR_8;
 unsigned int VAR_9;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 FUNC_5(&VAR_7->refcount);
 VAR_7->dma_dir = VAR_5;
 if (VAR_7->dma_dir != VAR_0) {

  VAR_7->dma_hw_dev = FUNC_3(VAR_4->hw_dev);
 }

 VAR_7->page_list = FUNC_8(sizeof(*VAR_8) * VAR_6);
 if (!VAR_7->page_list)
  goto err;

 if (VAR_7->dma_dir != VAR_0) {
  void *VAR_10;
  dma_addr_t VAR_11;





  VAR_10 = FUNC_2(VAR_7->dma_hw_dev,
            VAR_3 * VAR_6, &VAR_11,
            VAR_1);
  if (!VAR_10)
   goto err;

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   VAR_8 = &VAR_7->page_list[VAR_9];
   VAR_8->virt_addr = VAR_10 + (VAR_9 << VAR_2);
   VAR_8->dma_addr = VAR_11 + (VAR_9 << VAR_2);
  }

  VAR_7->n_pages = VAR_9;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   VAR_8 = &VAR_7->page_list[VAR_9];
   VAR_8->virt_addr = (void *)FUNC_4(VAR_1);
   if (!VAR_8->virt_addr)
    break;

   FUNC_0(FUNC_7(VAR_8->virt_addr));
  }

  VAR_7->n_pages = VAR_9;
  if (VAR_9 < VAR_6)
   goto err;
 }

 return VAR_7;

err:
 FUNC_1(VAR_7);
 return ((void*)0);
}
