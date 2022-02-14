
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_window {int nr_pages; int list; int unreg_state; int type; void* num_pages; void* dma_addr; int magic; } ;
struct scif_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct scif_dev*,struct scif_window*) ;
 int FUNC_3 (struct scif_window*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static struct scif_window *
FUNC_5(struct scif_dev *VAR_3, int VAR_4)
{
 struct scif_window *VAR_5;

 FUNC_1();
 VAR_5 = FUNC_4(sizeof(*VAR_5));
 if (!VAR_5)
  goto error_ret;

 VAR_5->magic = VAR_1;
 VAR_5->nr_pages = VAR_4;

 VAR_5->dma_addr = FUNC_4(VAR_4 * sizeof(*VAR_5->dma_addr));
 if (!VAR_5->dma_addr)
  goto error_window;

 VAR_5->num_pages = FUNC_4(VAR_4 *
     sizeof(*VAR_5->num_pages));
 if (!VAR_5->num_pages)
  goto error_window;

 if (FUNC_2(VAR_3, VAR_5))
  goto error_window;

 VAR_5->type = VAR_2;
 VAR_5->unreg_state = VAR_0;
 FUNC_0(&VAR_5->list);
 return VAR_5;
error_window:
 FUNC_3(VAR_5);
error_ret:
 return ((void*)0);
}
