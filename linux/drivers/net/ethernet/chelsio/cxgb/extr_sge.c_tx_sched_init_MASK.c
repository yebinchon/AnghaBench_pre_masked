
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {struct sched* tx_sched; } ;
struct sched {TYPE_1__* p; int sched_tsk; } ;
struct TYPE_2__ {int skbq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sched* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sge*,int,int,int) ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct sge *VAR_4)
{
 struct sched *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(sizeof (struct sched), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1("tx_sched_init\n");
 FUNC_4(&VAR_5->sched_tsk, VAR_3, (unsigned long) VAR_4);
 VAR_4->tx_sched = VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_2(&VAR_5->p[VAR_6].skbq);
  FUNC_3(VAR_4, VAR_6, 1500, 1000);
 }

 return 0;
}
