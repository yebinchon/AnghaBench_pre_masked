
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {int dummy; } ;
struct xpc_channel {size_t partid; int lock; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct xpc_partition*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 struct xpc_partition* VAR_1 ;
 int FUNC_4 (struct xpc_partition*,void*,size_t,int) ;

__attribute__((used)) static void
FUNC_5(struct xpc_channel *VAR_2, unsigned long *VAR_3,
    void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct xpc_partition *VAR_7 = &VAR_1[VAR_2->partid];
 enum xp_retval VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5, VAR_6);
 if (FUNC_3(VAR_8 != VAR_0)) {
  if (VAR_3 != ((void*)0))
   FUNC_2(&VAR_2->lock, *VAR_3);

  FUNC_0(VAR_7, VAR_8);

  if (VAR_3 != ((void*)0))
   FUNC_1(&VAR_2->lock, *VAR_3);
 }
}
