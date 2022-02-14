
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int speed_hz; } ;
struct meson_spicc_device {int bytes_per_word; scalar_t__ base; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct meson_spicc_device*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_spicc_device *VAR_2,
       struct spi_transfer *VAR_3)
{
 u32 VAR_4, VAR_5;


 VAR_4 = VAR_5 = FUNC_2(VAR_2->base + VAR_1);


 VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_3->speed_hz);


 VAR_4 &= ~VAR_0;
 VAR_4 |= FUNC_0(VAR_0,
      (VAR_2->bytes_per_word << 3) - 1);


 if (VAR_4 != VAR_5)
  FUNC_3(VAR_4, VAR_2->base + VAR_1);
}
