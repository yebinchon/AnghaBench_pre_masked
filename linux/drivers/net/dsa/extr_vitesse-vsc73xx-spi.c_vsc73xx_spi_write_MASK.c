
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int t ;
struct vsc73xx_spi {int lock; int spi; } ;
struct vsc73xx {struct vsc73xx_spi* priv; } ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
typedef int cmd ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct vsc73xx *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
        u32 VAR_6)
{
 struct vsc73xx_spi *VAR_7 = VAR_2->priv;
 struct spi_transfer VAR_8[2];
 struct spi_message VAR_9;
 u8 VAR_10[2];
 u8 VAR_11[4];
 int VAR_12;

 if (!FUNC_6(VAR_3, VAR_4))
  return -VAR_0;

 FUNC_4(&VAR_9);

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));

 VAR_8[0].tx_buf = VAR_10;
 VAR_8[0].len = sizeof(VAR_10);
 FUNC_3(&VAR_8[0], &VAR_9);

 VAR_8[1].tx_buf = VAR_11;
 VAR_8[1].len = sizeof(VAR_11);
 FUNC_3(&VAR_8[1], &VAR_9);

 VAR_10[0] = FUNC_7(VAR_1, VAR_3, VAR_4);
 VAR_10[1] = VAR_5;

 VAR_11[0] = (VAR_6 >> 24) & 0xff;
 VAR_11[1] = (VAR_6 >> 16) & 0xff;
 VAR_11[2] = (VAR_6 >> 8) & 0xff;
 VAR_11[3] = VAR_6 & 0xff;

 FUNC_1(&VAR_7->lock);
 VAR_12 = FUNC_5(VAR_7->spi, &VAR_9);
 FUNC_2(&VAR_7->lock);

 return VAR_12;
}
