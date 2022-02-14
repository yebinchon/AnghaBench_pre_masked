
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_spicc_device {scalar_t__ base; scalar_t__ tx_remain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct meson_spicc_device*) ;
 int FUNC_1 (struct meson_spicc_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct meson_spicc_device *VAR_1)
{

 while (VAR_1->tx_remain &&
        !FUNC_1(VAR_1))
  FUNC_2(FUNC_0(VAR_1),
          VAR_1->base + VAR_0);
}
