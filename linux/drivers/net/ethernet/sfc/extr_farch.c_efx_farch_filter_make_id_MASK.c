
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct efx_farch_filter_spec {size_t type; int flags; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static inline u32
FUNC_0(const struct efx_farch_filter_spec *VAR_4,
    unsigned int VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_3[VAR_4->type];
 if (!(VAR_4->flags & VAR_2))
  VAR_6 += VAR_1;

 return VAR_6 << VAR_0 | VAR_5;
}
