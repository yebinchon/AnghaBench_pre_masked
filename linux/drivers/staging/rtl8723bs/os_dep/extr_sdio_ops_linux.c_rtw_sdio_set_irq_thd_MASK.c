
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_data {void* sys_sdio_irq_thd; } ;
struct dvobj_priv {struct sdio_data intf_data; } ;



inline void FUNC_0(struct dvobj_priv *VAR_0, void *VAR_1)
{
 struct sdio_data *VAR_2 = &VAR_0->intf_data;

 VAR_2->sys_sdio_irq_thd = VAR_1;
}
