
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cftype {int node; int ss; } ;


 int VAR_0 ;
 int FUNC_0 (struct cftype*,int) ;
 int FUNC_1 (struct cftype*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cftype *VAR_2)
{
 FUNC_3(&VAR_1);

 if (!VAR_2 || !VAR_2[0].ss)
  return -VAR_0;

 FUNC_2(&VAR_2->node);
 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_2);
 return 0;
}
