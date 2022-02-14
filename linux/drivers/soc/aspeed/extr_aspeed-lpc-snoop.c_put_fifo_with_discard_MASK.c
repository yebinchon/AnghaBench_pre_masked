
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aspeed_lpc_snoop_channel {int wq; int fifo; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct aspeed_lpc_snoop_channel *VAR_0, u8 VAR_1)
{
 if (!FUNC_0(&VAR_0->fifo))
  return;
 if (FUNC_1(&VAR_0->fifo))
  FUNC_3(&VAR_0->fifo);
 FUNC_2(&VAR_0->fifo, VAR_1);
 FUNC_4(&VAR_0->wq);
}
