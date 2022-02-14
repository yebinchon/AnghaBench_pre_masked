
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct xpc_partition*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct xpc_partition*,void*,size_t,int) ;

__attribute__((used)) static void
FUNC_3(struct xpc_partition *VAR_1, void *VAR_2,
         size_t VAR_3, int VAR_4)
{
 enum xp_retval VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_5 != VAR_0))
  FUNC_0(VAR_1, VAR_5);
}
