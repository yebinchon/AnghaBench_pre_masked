
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_queue {int tail; int free_cnt; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline void FUNC_1(struct snd_queue *VAR_0,
       int VAR_1, int VAR_2)
{
 VAR_0->tail = VAR_1;
 FUNC_0(VAR_2, &VAR_0->free_cnt);
}
