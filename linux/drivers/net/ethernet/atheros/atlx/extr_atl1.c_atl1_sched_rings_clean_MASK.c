
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl1_adapter {int int_enabled; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct atl1_adapter*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct atl1_adapter* VAR_1)
{
 if (!FUNC_2(&VAR_1->napi))





  return 0;

 FUNC_0(&VAR_1->napi);






 if (!VAR_1->int_enabled)
  return 1;

 FUNC_1(VAR_1, VAR_0);
 return 1;
}
