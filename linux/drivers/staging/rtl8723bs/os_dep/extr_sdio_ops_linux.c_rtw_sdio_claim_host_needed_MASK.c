
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct sdio_data {scalar_t__ sys_sdio_irq_thd; } ;
struct dvobj_priv {struct sdio_data intf_data; } ;


 scalar_t__ VAR_0 ;
 struct dvobj_priv* FUNC_0 (struct sdio_func*) ;

__attribute__((used)) static bool FUNC_1(struct sdio_func *VAR_1)
{
 struct dvobj_priv *VAR_2 = FUNC_0(VAR_1);
 struct sdio_data *VAR_3 = &VAR_2->intf_data;

 if (VAR_3->sys_sdio_irq_thd && VAR_3->sys_sdio_irq_thd == VAR_0)
  return 0;
 return 1;
}
