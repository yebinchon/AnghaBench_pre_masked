
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {unsigned int len; int bits_per_word; int rx_buf; int tx_buf; } ;
struct spi_device {int bits_per_word; int master; } ;
struct mpc8xxx_spi {int flags; int count; int done; int rx; int tx; struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpc8xxx_spi*,struct spi_transfer*,int) ;
 int FUNC_1 (struct mpc8xxx_spi*) ;
 int FUNC_2 (struct mpc8xxx_spi*,struct spi_transfer*,unsigned int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct mpc8xxx_spi* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_2, struct spi_transfer *VAR_3,
       bool VAR_4)
{
 struct mpc8xxx_spi *VAR_5 = FUNC_5(VAR_2->master);
 struct fsl_spi_reg *VAR_6;
 unsigned int VAR_7 = VAR_3->len;
 u8 VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->reg_base;
 VAR_8 = VAR_2->bits_per_word;
 if (VAR_3->bits_per_word)
  VAR_8 = VAR_3->bits_per_word;

 if (VAR_8 > 8) {

  if (VAR_7 & 1)
   return -VAR_0;
  VAR_7 /= 2;
 }
 if (VAR_8 > 16) {

  if (VAR_7 & 1)
   return -VAR_0;
  VAR_7 /= 2;
 }

 VAR_5->tx = VAR_3->tx_buf;
 VAR_5->rx = VAR_3->rx_buf;

 FUNC_4(&VAR_5->done);

 if (VAR_5->flags & VAR_1)
  VAR_9 = FUNC_0(VAR_5, VAR_3, VAR_4);
 else
  VAR_9 = FUNC_2(VAR_5, VAR_3, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_5->done);


 FUNC_3(&VAR_6->mask, 0);

 if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_5);

 return VAR_5->count;
}
