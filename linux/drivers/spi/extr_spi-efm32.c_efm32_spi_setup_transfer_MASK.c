
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spi_transfer {scalar_t__ speed_hz; scalar_t__ bits_per_word; } ;
struct spi_device {unsigned int bits_per_word; unsigned int max_speed_hz; int mode; int master; } ;
struct efm32_spi_ddata {int clk; } ;


 int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct efm32_spi_ddata*,unsigned int,int ) ;
 struct efm32_spi_ddata* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_14,
  struct spi_transfer *VAR_15)
{
 struct efm32_spi_ddata *VAR_16 = FUNC_4(VAR_14->master);

 unsigned VAR_17 = VAR_15->bits_per_word ?: VAR_14->bits_per_word;
 unsigned VAR_18 = VAR_15->speed_hz ?: VAR_14->max_speed_hz;
 unsigned long VAR_19 = FUNC_2(VAR_16->clk);
 u32 VAR_20;

 FUNC_3(VAR_16, VAR_10 | VAR_9 |
   (VAR_14->mode & VAR_12 ? VAR_7 : 0) |
   (VAR_14->mode & VAR_13 ? VAR_8 : 0), VAR_6);

 FUNC_3(VAR_16,
   FUNC_1(VAR_17), VAR_11);

 if (2 * VAR_18 >= VAR_19)
  VAR_20 = 0;
 else
  VAR_20 = 64 * (FUNC_0(2 * VAR_19, VAR_18) - 4);

 if (VAR_20 > (1U << 21))
  return -VAR_0;

 FUNC_3(VAR_16, VAR_20, VAR_1);
 FUNC_3(VAR_16, VAR_3, VAR_2);
 FUNC_3(VAR_16, VAR_4 | VAR_5, VAR_2);

 return 0;
}
