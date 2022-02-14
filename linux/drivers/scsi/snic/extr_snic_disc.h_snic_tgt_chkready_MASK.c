
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_tgt {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(struct snic_tgt *VAR_2)
{
 if (VAR_2->state == VAR_1)
  return 0;
 else
  return VAR_0 << 16;
}
