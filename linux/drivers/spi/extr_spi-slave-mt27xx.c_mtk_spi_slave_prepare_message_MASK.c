
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_device {int mode; } ;
struct spi_controller {int dummy; } ;
struct mtk_spi_slave {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 struct mtk_spi_slave* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_10,
      struct spi_message *VAR_11)
{
 struct mtk_spi_slave *VAR_12 = FUNC_1(VAR_10);
 struct spi_device *VAR_13 = VAR_11->spi;
 bool VAR_14, VAR_15;
 u32 VAR_16;

 VAR_14 = VAR_13->mode & VAR_7 ? 1 : 0;
 VAR_15 = VAR_13->mode & VAR_8 ? 1 : 0;

 VAR_16 = FUNC_0(VAR_12->base + VAR_0);
 if (VAR_14)
  VAR_16 |= VAR_1;
 else
  VAR_16 &= ~VAR_1;
 if (VAR_15)
  VAR_16 |= VAR_2;
 else
  VAR_16 &= ~VAR_2;

 if (VAR_13->mode & VAR_9)
  VAR_16 &= ~(VAR_5 | VAR_3);
 else
  VAR_16 |= VAR_5 | VAR_3;

 VAR_16 &= ~VAR_6;
 VAR_16 &= ~VAR_4;
 FUNC_2(VAR_16, VAR_12->base + VAR_0);

 return 0;
}
