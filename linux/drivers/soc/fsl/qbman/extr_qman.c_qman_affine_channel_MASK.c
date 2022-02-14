
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qman_portal {TYPE_1__* config; } ;
struct TYPE_2__ {int cpu; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 struct qman_portal* FUNC_2 () ;
 int FUNC_3 () ;

u16 FUNC_4(int VAR_2)
{
 if (VAR_2 < 0) {
  struct qman_portal *VAR_3 = FUNC_2();

  VAR_2 = VAR_3->config->cpu;
  FUNC_3();
 }
 FUNC_0(!FUNC_1(VAR_2, &VAR_1));
 return VAR_0[VAR_2];
}
