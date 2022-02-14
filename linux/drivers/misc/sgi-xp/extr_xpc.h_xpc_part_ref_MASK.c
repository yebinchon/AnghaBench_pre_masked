
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {scalar_t__ setup_state; int references; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xpc_partition*) ;

__attribute__((used)) static inline int
FUNC_2(struct xpc_partition *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->references);
 VAR_2 = (VAR_1->setup_state == VAR_0);
 if (!VAR_2)
  FUNC_1(VAR_1);

 return VAR_2;
}
