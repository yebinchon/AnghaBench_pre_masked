
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bfa_ioim_s {scalar_t__ iotag; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bfa_boolean_t
FUNC_0(struct bfa_ioim_s *VAR_4)
{
 uint16_t VAR_5 = VAR_4->iotag >> VAR_2;
 if (VAR_5 < VAR_1)
  return VAR_0;
 return VAR_3;
}
