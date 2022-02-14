
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_lite {int slock; int events; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fimc_lite *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->slock, VAR_1);
 FUNC_0(&VAR_0->events, 0, sizeof(VAR_0->events));
 FUNC_2(&VAR_0->slock, VAR_1);
}
