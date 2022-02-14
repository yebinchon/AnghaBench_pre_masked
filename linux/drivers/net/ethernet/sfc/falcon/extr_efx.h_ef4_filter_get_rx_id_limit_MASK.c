
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* filter_get_rx_id_limit ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*) ;

__attribute__((used)) static inline u32 FUNC_1(struct ef4_nic *VAR_0)
{
 return VAR_0->type->filter_get_rx_id_limit(VAR_0);
}
