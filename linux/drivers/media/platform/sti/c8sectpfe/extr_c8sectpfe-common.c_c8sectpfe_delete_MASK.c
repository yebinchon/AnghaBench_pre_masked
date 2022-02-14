
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c8sectpfe {int num_feeds; int adapter; int * demux; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct c8sectpfe*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct c8sectpfe *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_feeds; VAR_1++)
  FUNC_2(&VAR_0->demux[VAR_1]);

 FUNC_0(&VAR_0->adapter);

 FUNC_1(VAR_0);
}
