
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int sctx_mutex; int rsp_allocated_buf; int cmd_allocated_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cmd_priv *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->cmd_allocated_buf);

  FUNC_0(VAR_0->rsp_allocated_buf);

  FUNC_1(&VAR_0->sctx_mutex);
 }
}
