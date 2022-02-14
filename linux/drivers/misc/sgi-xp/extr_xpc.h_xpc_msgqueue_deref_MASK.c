
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {size_t partid; int references; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct xpc_channel *VAR_1)
{
 s32 VAR_2 = FUNC_1(&VAR_1->references);

 FUNC_0(VAR_2 < 0);
 if (VAR_2 == 0)
  FUNC_2(&VAR_0[VAR_1->partid]);
}
