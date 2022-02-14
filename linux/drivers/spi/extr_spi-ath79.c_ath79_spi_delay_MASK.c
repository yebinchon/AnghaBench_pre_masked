
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath79_spi {unsigned int rrw_delay; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct ath79_spi *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 > VAR_0->rrw_delay)
  FUNC_0(VAR_1 - VAR_0->rrw_delay);
}
