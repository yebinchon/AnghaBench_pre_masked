
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int mode; int max_speed_hz; } ;
struct bcm_qspi_parms {int bits_per_word; int mode; int speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bcm_qspi_parms* FUNC_0 (int,int ) ;
 struct bcm_qspi_parms* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,struct bcm_qspi_parms*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3)
{
 struct bcm_qspi_parms *VAR_4;

 if (VAR_3->bits_per_word > 16)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_2);
  if (!VAR_4)
   return -VAR_1;
  FUNC_2(VAR_3, VAR_4);
 }
 VAR_4->speed_hz = VAR_3->max_speed_hz;
 VAR_4->mode = VAR_3->mode;

 if (VAR_3->bits_per_word)
  VAR_4->bits_per_word = VAR_3->bits_per_word;
 else
  VAR_4->bits_per_word = 8;

 return 0;
}
