
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_buffer {int dummy; } ;
struct dma_buf {struct ion_buffer* priv; } ;


 int FUNC_0 (struct ion_buffer*) ;

__attribute__((used)) static void FUNC_1(struct dma_buf *VAR_0)
{
 struct ion_buffer *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);
}
