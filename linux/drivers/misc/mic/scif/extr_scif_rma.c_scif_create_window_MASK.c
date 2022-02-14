
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scif_window {int temp; struct scif_window* dma_addr; int type; int list; int unregwq; void* unreg_state; int regwq; void* reg_state; int magic; scalar_t__ ep; int offset; void* num_pages; } ;
struct scif_endpt {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct scif_window*,int) ;
 void* FUNC_4 (int) ;

struct scif_window *FUNC_5(struct scif_endpt *VAR_3, int VAR_4,
           s64 VAR_5, bool VAR_6)
{
 struct scif_window *VAR_7;

 FUNC_2();
 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (!VAR_7)
  goto error;

 VAR_7->dma_addr = FUNC_4(VAR_4 * sizeof(*VAR_7->dma_addr));
 if (!VAR_7->dma_addr)
  goto error_free_window;

 VAR_7->num_pages = FUNC_4(VAR_4 * sizeof(*VAR_7->num_pages));
 if (!VAR_7->num_pages)
  goto error_free_window;

 VAR_7->offset = VAR_5;
 VAR_7->ep = (u64)VAR_3;
 VAR_7->magic = VAR_1;
 VAR_7->reg_state = VAR_0;
 FUNC_1(&VAR_7->regwq);
 VAR_7->unreg_state = VAR_0;
 FUNC_1(&VAR_7->unregwq);
 FUNC_0(&VAR_7->list);
 VAR_7->type = VAR_2;
 VAR_7->temp = VAR_6;
 return VAR_7;

error_free_window:
 FUNC_3(VAR_7->dma_addr,
    VAR_4 * sizeof(*VAR_7->dma_addr));
 FUNC_3(VAR_7, sizeof(*VAR_7));
error:
 return ((void*)0);
}
