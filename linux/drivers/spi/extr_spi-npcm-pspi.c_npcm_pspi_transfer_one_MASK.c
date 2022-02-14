
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct npcm_pspi {int xfer_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct npcm_pspi*) ;
 int FUNC_2 (struct npcm_pspi*) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_4 (int *) ;
 struct npcm_pspi* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct spi_master *VAR_2,
      struct spi_device *VAR_3,
      struct spi_transfer *VAR_4)
{
 struct npcm_pspi *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;

 FUNC_3(VAR_3, VAR_4);
 FUNC_4(&VAR_5->xfer_done);
 FUNC_2(VAR_5);
 VAR_6 = FUNC_6(&VAR_5->xfer_done,
          FUNC_0
          (VAR_1));
 if (VAR_6 == 0) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 return 0;
}
