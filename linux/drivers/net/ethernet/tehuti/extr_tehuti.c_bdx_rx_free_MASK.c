
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m; } ;
struct TYPE_4__ {int m; } ;
struct bdx_priv {TYPE_1__ rxd_fifo0; TYPE_2__ rxf_fifo0; int * rxdb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bdx_priv*,int *) ;
 int FUNC_2 (struct bdx_priv*,TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bdx_priv *VAR_1)
{
 VAR_0;
 if (VAR_1->rxdb) {
  FUNC_2(VAR_1, &VAR_1->rxf_fifo0);
  FUNC_3(VAR_1->rxdb);
  VAR_1->rxdb = ((void*)0);
 }
 FUNC_1(VAR_1, &VAR_1->rxf_fifo0.m);
 FUNC_1(VAR_1, &VAR_1->rxd_fifo0.m);

 FUNC_0();
}
