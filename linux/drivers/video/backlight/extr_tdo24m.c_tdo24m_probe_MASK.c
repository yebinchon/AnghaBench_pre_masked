
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdo24m_platform_data {int model; } ;
struct spi_transfer {int * tx_buf; scalar_t__ cs_change; } ;
struct spi_message {int dummy; } ;
struct tdo24m {int color_invert; int lcd_dev; int adj_mode; int * buf; struct spi_transfer xfer; struct spi_message msg; int mode; int power; struct spi_device* spi_dev; } ;
struct spi_device {int bits_per_word; int dev; int mode; } ;
typedef enum tdo24m_model { ____Placeholder_tdo24m_model } tdo24m_model ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;

 int VAR_7 ;

 int FUNC_2 (int *,char*) ;
 struct tdo24m_platform_data* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,char*,int *,struct tdo24m*,int *) ;
 int FUNC_6 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_7 (struct spi_message*) ;
 int FUNC_8 (struct spi_device*,struct tdo24m*) ;
 int FUNC_9 (struct spi_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct tdo24m*,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_11)
{
 struct tdo24m *VAR_12;
 struct spi_message *VAR_13;
 struct spi_transfer *VAR_14;
 struct tdo24m_platform_data *VAR_15;
 enum tdo24m_model VAR_16;
 int VAR_17;

 VAR_15 = FUNC_3(&VAR_11->dev);
 if (VAR_15)
  VAR_16 = VAR_15->model;
 else
  VAR_16 = 129;

 VAR_11->bits_per_word = 8;
 VAR_11->mode = VAR_6;
 VAR_17 = FUNC_9(VAR_11);
 if (VAR_17)
  return VAR_17;

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(struct tdo24m), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->spi_dev = VAR_11;
 VAR_12->power = VAR_2;
 VAR_12->mode = VAR_5;

 VAR_12->buf = FUNC_4(&VAR_11->dev, VAR_7, VAR_4);
 if (VAR_12->buf == ((void*)0))
  return -VAR_1;

 VAR_13 = &VAR_12->msg;
 VAR_14 = &VAR_12->xfer;

 FUNC_7(VAR_13);

 VAR_14->cs_change = 0;
 VAR_14->tx_buf = &VAR_12->buf[0];
 FUNC_6(VAR_14, VAR_13);

 switch (VAR_16) {
 case 129:
  VAR_12->color_invert = 1;
  VAR_12->adj_mode = VAR_8;
  break;
 case 128:
  VAR_12->adj_mode = VAR_10;
  VAR_12->color_invert = 0;
  break;
 default:
  FUNC_2(&VAR_11->dev, "Unsupported model");
  return -VAR_0;
 }

 VAR_12->lcd_dev = FUNC_5(&VAR_11->dev, "tdo24m", &VAR_11->dev,
      VAR_12, &VAR_9);
 if (FUNC_0(VAR_12->lcd_dev))
  return FUNC_1(VAR_12->lcd_dev);

 FUNC_8(VAR_11, VAR_12);
 VAR_17 = FUNC_10(VAR_12, VAR_3);
 if (VAR_17)
  return VAR_17;

 return 0;
}
