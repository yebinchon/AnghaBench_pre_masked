
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ef4_nic {TYPE_1__* type; } ;
typedef enum ef4_filter_priority { ____Placeholder_ef4_filter_priority } ef4_filter_priority ;
struct TYPE_2__ {int (* filter_remove_safe ) (struct ef4_nic*,int,int ) ;} ;


 int FUNC_0 (struct ef4_nic*,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ef4_nic *VAR_0,
         enum ef4_filter_priority VAR_1,
         u32 VAR_2)
{
 return VAR_0->type->filter_remove_safe(VAR_0, VAR_1, VAR_2);
}
