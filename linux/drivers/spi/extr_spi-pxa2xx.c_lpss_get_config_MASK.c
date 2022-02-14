
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpss_config {int dummy; } ;
struct driver_data {size_t ssp_type; } ;


 size_t VAR_0 ;
 struct lpss_config const* VAR_1 ;

__attribute__((used)) static inline const struct lpss_config
*FUNC_0(const struct driver_data *VAR_2)
{
 return &VAR_1[VAR_2->ssp_type - VAR_0];
}
