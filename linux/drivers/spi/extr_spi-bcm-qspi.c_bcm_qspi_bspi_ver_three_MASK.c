
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_qspi {int bspi_maj_rev; } ;



__attribute__((used)) static inline bool FUNC_0(struct bcm_qspi *VAR_0)
{
 if (VAR_0->bspi_maj_rev < 4)
  return 1;
 return 0;
}
