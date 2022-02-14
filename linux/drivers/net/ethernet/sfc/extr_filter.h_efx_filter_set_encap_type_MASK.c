
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int encap_type; int match_flags; } ;
typedef enum efx_encap_type { ____Placeholder_efx_encap_type } efx_encap_type ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct efx_filter_spec *VAR_1,
          enum efx_encap_type VAR_2)
{
 VAR_1->match_flags |= VAR_0;
 VAR_1->encap_type = VAR_2;
}
