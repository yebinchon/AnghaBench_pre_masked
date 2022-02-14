
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_queue {scalar_t__ xdp_desc_cnt; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,int ,int,scalar_t__) ;
 int FUNC_1 () ;

void FUNC_2(struct nicvf *VAR_1,
      struct snd_queue *VAR_2, int VAR_3)
{
 if (!VAR_2->xdp_desc_cnt)
  return;


 FUNC_1();


 FUNC_0(VAR_1, VAR_0,
         VAR_3, VAR_2->xdp_desc_cnt);
 VAR_2->xdp_desc_cnt = 0;
}
