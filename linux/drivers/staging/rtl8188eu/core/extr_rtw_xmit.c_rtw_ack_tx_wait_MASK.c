
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct submit_ctx {int status; int timeout_ms; int submit_time; } ;
struct xmit_priv {struct submit_ctx ack_tx_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct submit_ctx*) ;

int FUNC_1(struct xmit_priv *VAR_2, u32 VAR_3)
{
 struct submit_ctx *VAR_4 = &VAR_2->ack_tx_ops;

 VAR_4->submit_time = VAR_1;
 VAR_4->timeout_ms = VAR_3;
 VAR_4->status = VAR_0;

 return FUNC_0(VAR_4);
}
