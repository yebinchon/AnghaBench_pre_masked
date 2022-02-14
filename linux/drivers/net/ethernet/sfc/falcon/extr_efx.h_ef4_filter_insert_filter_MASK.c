
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* type; } ;
struct ef4_filter_spec {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int (* filter_insert ) (struct ef4_nic*,struct ef4_filter_spec*,int) ;} ;


 int FUNC_0 (struct ef4_nic*,struct ef4_filter_spec*,int) ;

__attribute__((used)) static inline s32 FUNC_1(struct ef4_nic *VAR_0,
        struct ef4_filter_spec *VAR_1,
        bool VAR_2)
{
 return VAR_0->type->filter_insert(VAR_0, VAR_1, VAR_2);
}
