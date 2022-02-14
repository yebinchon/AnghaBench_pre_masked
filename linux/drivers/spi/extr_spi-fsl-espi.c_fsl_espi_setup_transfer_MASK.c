
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_device {int bits_per_word; int max_speed_hz; int chip_select; int master; } ;
struct fsl_espi_cs {int hw_mode; } ;
struct fsl_espi {int spibrg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fsl_espi*,int ,int) ;
 struct fsl_espi_cs* FUNC_5 (struct spi_device*) ;
 struct fsl_espi* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct spi_device *VAR_1,
     struct spi_transfer *VAR_2)
{
 struct fsl_espi *VAR_3 = FUNC_6(VAR_1->master);
 int VAR_4 = VAR_2 ? VAR_2->bits_per_word : VAR_1->bits_per_word;
 u32 VAR_5, VAR_6 = VAR_2 ? VAR_2->speed_hz : VAR_1->max_speed_hz;
 struct fsl_espi_cs *VAR_7 = FUNC_5(VAR_1);
 u32 VAR_8 = VAR_7->hw_mode;


 VAR_7->hw_mode &= ~(FUNC_0(0xF) | VAR_0 | FUNC_1(0xF));

 VAR_7->hw_mode |= FUNC_0(VAR_4 - 1);

 VAR_5 = FUNC_2(VAR_3->spibrg, VAR_6 * 4) - 1;

 if (VAR_5 > 15) {
  VAR_7->hw_mode |= VAR_0;
  VAR_5 = FUNC_2(VAR_3->spibrg, VAR_6 * 16 * 4) - 1;
 }

 VAR_7->hw_mode |= FUNC_1(VAR_5);


 if (VAR_7->hw_mode != VAR_8)
  FUNC_4(VAR_3, FUNC_3(VAR_1->chip_select),
       VAR_7->hw_mode);
}
