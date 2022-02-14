
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int q_len; } ;
struct snd_queue {TYPE_1__ dmem; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_queue *VAR_0, int VAR_1)
{
 VAR_1++;
 VAR_1 &= (VAR_0->dmem.q_len - 1);
 return VAR_1;
}
