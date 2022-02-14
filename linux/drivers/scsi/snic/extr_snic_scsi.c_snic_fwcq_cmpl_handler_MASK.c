
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic_misc_stats {int max_cq_ents; } ;
struct TYPE_2__ {struct snic_misc_stats misc; } ;
struct snic {unsigned int wq_count; unsigned int cq_count; int * cq; TYPE_1__ s_stats; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int *,int ,int) ;

int
FUNC_3(struct snic *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4;
 unsigned int VAR_5;
 struct snic_misc_stats *VAR_6 = &VAR_1->s_stats.misc;

 for (VAR_4 = VAR_1->wq_count; VAR_4 < VAR_1->cq_count; VAR_4++) {
  VAR_5 = FUNC_2(&VAR_1->cq[VAR_4],
       VAR_0,
       VAR_2);
  VAR_3 += VAR_5;

  if (VAR_5 > FUNC_0(&VAR_6->max_cq_ents))
   FUNC_1(&VAR_6->max_cq_ents, VAR_5);
 }

 return VAR_3;
}
