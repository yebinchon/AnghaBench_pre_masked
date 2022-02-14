
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_spi {int word_delay; int src_clk; int hw_speed_hz; } ;
struct spi_transfer {int bits_per_word; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct sprd_spi *VAR_2,
      struct spi_transfer *VAR_3)
{




 u32 VAR_4 = VAR_3->bits_per_word * VAR_0;
 u32 VAR_5 = FUNC_0(VAR_1, VAR_2->hw_speed_hz);
 u32 VAR_6 = VAR_4 * VAR_5;




 u32 VAR_7 = VAR_0 * VAR_2->word_delay;
 u32 VAR_8 = FUNC_0(VAR_7 * VAR_1,
         VAR_2->src_clk);

 return VAR_6 + VAR_8;
}
