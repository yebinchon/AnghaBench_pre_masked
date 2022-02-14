
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {scalar_t__ rx_scatter; } ;
struct ef4_farch_filter_spec {int flags; scalar_t__ dmaq_id; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ef4_nic*) ;

__attribute__((used)) static void
FUNC_1(struct ef4_nic *VAR_4,
         struct ef4_farch_filter_spec *VAR_5)
{



 VAR_5->priority = VAR_3;
 VAR_5->flags = (VAR_0 |
         (FUNC_0(VAR_4) ? VAR_1 : 0) |
         (VAR_4->rx_scatter ? VAR_2 : 0));
 VAR_5->dmaq_id = 0;
}
