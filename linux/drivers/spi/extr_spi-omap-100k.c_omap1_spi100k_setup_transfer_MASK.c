
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int bits_per_word; } ;
struct spi_device {int bits_per_word; struct omap1_spi100k_cs* controller_state; int master; } ;
struct omap1_spi100k_cs {int word_len; } ;
struct omap1_spi100k {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct omap1_spi100k* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_4,
  struct spi_transfer *VAR_5)
{
 struct omap1_spi100k *VAR_6 = FUNC_0(VAR_4->master);
 struct omap1_spi100k_cs *VAR_7 = VAR_4->controller_state;
 u8 VAR_8;

 if (VAR_5 != ((void*)0))
  VAR_8 = VAR_5->bits_per_word;
 else
  VAR_8 = VAR_4->bits_per_word;

 if (VAR_4->bits_per_word > 32)
  return -VAR_0;
 VAR_7->word_len = VAR_8;


 FUNC_1(0x3e , VAR_6->base + VAR_2);
 FUNC_1(0x00 , VAR_6->base + VAR_3);
 FUNC_1(0x3e , VAR_6->base + VAR_1);

 return 0;
}
