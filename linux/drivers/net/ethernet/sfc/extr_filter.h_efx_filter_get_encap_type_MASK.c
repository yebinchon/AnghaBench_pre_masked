
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_filter_spec {int match_flags; int encap_type; } ;
typedef enum efx_encap_type { ____Placeholder_efx_encap_type } efx_encap_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum efx_encap_type FUNC_0(
  const struct efx_filter_spec *VAR_2)
{
 if (VAR_2->match_flags & VAR_1)
  return VAR_2->encap_type;
 return VAR_0;
}
