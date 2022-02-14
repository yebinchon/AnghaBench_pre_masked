
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q_len; } ;
struct snd_queue {int xdp_free_cnt; int head; TYPE_1__ dmem; int free_cnt; int is_xdp; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct snd_queue *VAR_0, int VAR_1)
{
 if (!VAR_0->is_xdp)
  FUNC_0(VAR_1, &VAR_0->free_cnt);
 else
  VAR_0->xdp_free_cnt += VAR_1;
 VAR_0->head += VAR_1;
 VAR_0->head &= (VAR_0->dmem.q_len - 1);
}
