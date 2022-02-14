
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {scalar_t__ actual_len; int status; struct cppi41_dma_channel* private_data; } ;
struct cppi41_dma_channel {scalar_t__ is_allocated; } ;


 int VAR_0 ;
 int FUNC_0 (struct cppi41_dma_channel*) ;

__attribute__((used)) static void FUNC_1(struct dma_channel *VAR_1)
{
 struct cppi41_dma_channel *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 if (VAR_2->is_allocated) {
  VAR_2->is_allocated = 0;
  VAR_1->status = VAR_0;
  VAR_1->actual_len = 0;
 }
}
