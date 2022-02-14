
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bman_pool {int bpid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bman_pool*) ;
 struct bman_pool* FUNC_3 (int,int ) ;

struct bman_pool *FUNC_4(void)
{
 struct bman_pool *VAR_1 = ((void*)0);
 u32 VAR_2;

 if (FUNC_0(&VAR_2, 1))
  return ((void*)0);

 VAR_1 = FUNC_3(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  goto err;

 VAR_1->bpid = VAR_2;

 return VAR_1;
err:
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
 return ((void*)0);
}
