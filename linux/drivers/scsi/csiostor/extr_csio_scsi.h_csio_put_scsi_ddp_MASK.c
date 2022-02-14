
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_scsim {int ddp_freelist; } ;
struct csio_dma_buf {int list; } ;


 int FUNC_0 (struct csio_scsim*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(struct csio_scsim *VAR_1, struct csio_dma_buf *VAR_2)
{
 FUNC_1(&VAR_2->list, &VAR_1->ddp_freelist);
 FUNC_0(VAR_1, VAR_0);
}
