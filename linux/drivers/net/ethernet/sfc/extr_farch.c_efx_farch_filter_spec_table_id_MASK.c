
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_farch_filter_spec {int type; int flags; } ;
typedef enum efx_farch_filter_table_id { ____Placeholder_efx_farch_filter_table_id } efx_farch_filter_table_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static enum efx_farch_filter_table_id
FUNC_1(const struct efx_farch_filter_spec *VAR_10)
{
 FUNC_0(VAR_2 !=
       (VAR_5 >> 2));
 FUNC_0(VAR_2 !=
       (VAR_6 >> 2));
 FUNC_0(VAR_2 !=
       (VAR_7 >> 2));
 FUNC_0(VAR_2 !=
       (VAR_8 >> 2));
 FUNC_0(VAR_3 !=
       (VAR_0 >> 2));
 FUNC_0(VAR_3 !=
       (VAR_1 >> 2));
 FUNC_0(VAR_4 !=
       VAR_3 + 2);
 return (VAR_10->type >> 2) + ((VAR_10->flags & VAR_9) ? 2 : 0);
}
