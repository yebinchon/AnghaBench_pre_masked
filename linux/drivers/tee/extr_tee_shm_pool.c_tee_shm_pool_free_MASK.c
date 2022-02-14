
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm_pool {scalar_t__ dma_buf_mgr; scalar_t__ private_mgr; } ;


 int FUNC_0 (struct tee_shm_pool*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct tee_shm_pool *VAR_0)
{
 if (VAR_0->private_mgr)
  FUNC_1(VAR_0->private_mgr);
 if (VAR_0->dma_buf_mgr)
  FUNC_1(VAR_0->dma_buf_mgr);
 FUNC_0(VAR_0);
}
