
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_buf {int dummy; } ;
struct dma_buf {struct fastrpc_buf* priv; } ;


 int FUNC_0 (struct fastrpc_buf*) ;

__attribute__((used)) static void FUNC_1(struct dma_buf *VAR_0)
{
 struct fastrpc_buf *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);
}
