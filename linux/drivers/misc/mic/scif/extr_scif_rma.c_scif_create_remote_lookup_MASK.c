
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lookup; int offset; } ;
struct TYPE_3__ {int * lookup; int offset; } ;
struct scif_window {int nr_pages; int nr_lookup; int * num_pages; TYPE_2__ num_pages_lookup; int * dma_addr; TYPE_1__ dma_addr_lookup; int mapped_offset; } ;
struct scif_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *,struct scif_dev*,int,int) ;
 int FUNC_4 (int *,int ,struct scif_dev*) ;
 int FUNC_5 (int *,struct scif_window*,struct scif_dev*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct scif_dev *VAR_5,
         struct scif_window *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10 = VAR_6->nr_pages;
 bool VAR_11, VAR_12;

 FUNC_2();

 VAR_9 = FUNC_5(&VAR_6->mapped_offset,
         VAR_6, VAR_5, sizeof(*VAR_6));
 if (VAR_9)
  goto error_window;


 VAR_6->nr_lookup = FUNC_0(VAR_10 * VAR_2,
     ((2) * 1024 * 1024)) >> 21;

 VAR_6->dma_addr_lookup.lookup =
  FUNC_3(&VAR_6->dma_addr_lookup.offset,
        VAR_5, VAR_6->nr_lookup *
        sizeof(*VAR_6->dma_addr_lookup.lookup),
        VAR_1 | VAR_4);
 if (!VAR_6->dma_addr_lookup.lookup) {
  VAR_9 = -VAR_0;
  goto error_window;
 }

 VAR_6->num_pages_lookup.lookup =
  FUNC_3(&VAR_6->num_pages_lookup.offset,
        VAR_5, VAR_6->nr_lookup *
        sizeof(*VAR_6->num_pages_lookup.lookup),
        VAR_1 | VAR_4);
 if (!VAR_6->num_pages_lookup.lookup) {
  VAR_9 = -VAR_0;
  goto error_window;
 }

 VAR_11 = FUNC_1(&VAR_6->dma_addr[0]);
 VAR_12 = FUNC_1(&VAR_6->num_pages[0]);


 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_10; VAR_7 += VAR_3, VAR_8++) {
  VAR_9 = FUNC_4(&VAR_6->dma_addr_lookup.lookup[VAR_8],
        VAR_11 ?
        FUNC_7(&VAR_6->dma_addr[VAR_7]) :
        FUNC_6(&VAR_6->dma_addr[VAR_7]),
        VAR_5);
  if (VAR_9)
   goto error_window;
  VAR_9 = FUNC_4(&VAR_6->num_pages_lookup.lookup[VAR_8],
        VAR_12 ?
        FUNC_7(&VAR_6->num_pages[VAR_7]) :
        FUNC_6(&VAR_6->num_pages[VAR_7]),
        VAR_5);
  if (VAR_9)
   goto error_window;
 }
 return 0;
error_window:
 return VAR_9;
}
