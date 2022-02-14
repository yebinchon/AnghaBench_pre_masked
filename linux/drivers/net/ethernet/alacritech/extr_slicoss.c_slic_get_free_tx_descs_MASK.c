
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_tx_queue {int len; int done_idx; int put_idx; } ;


 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned int FUNC_2(struct slic_tx_queue *VAR_0)
{

 FUNC_1();
 return FUNC_0(VAR_0->put_idx, VAR_0->done_idx, VAR_0->len);
}
