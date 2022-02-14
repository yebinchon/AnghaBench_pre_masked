
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_lp8841_rtc {int iomem; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct spi_lp8841_rtc *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->state |= VAR_0;
 else
  VAR_1->state &= ~VAR_0;
 FUNC_0(VAR_1->state, VAR_1->iomem);
}
