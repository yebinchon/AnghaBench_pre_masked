
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {scalar_t__ remote_rp_pa; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,unsigned long,int ) ;
 int VAR_1 ;
 struct xpc_partition* VAR_2 ;

enum xp_retval
FUNC_4(short VAR_3, void *VAR_4)
{
 struct xpc_partition *VAR_5;
 unsigned long VAR_6;

 VAR_5 = &VAR_2[VAR_3];
 if (VAR_5->remote_rp_pa == 0)
  return VAR_0;

 FUNC_1(VAR_4, 0, VAR_1);

 VAR_6 = (unsigned long)FUNC_0(VAR_5->remote_rp_pa);

 return FUNC_3(FUNC_2(VAR_4), VAR_6,
    VAR_1);
}
