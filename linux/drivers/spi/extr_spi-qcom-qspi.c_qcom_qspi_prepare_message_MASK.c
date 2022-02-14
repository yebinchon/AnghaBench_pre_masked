
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_message {TYPE_1__* spi; } ;
struct spi_master {int dummy; } ;
struct qcom_qspi {int lock; scalar_t__ base; } ;
struct TYPE_2__ {int mode; scalar_t__ chip_select; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 struct qcom_qspi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_14,
         struct spi_message *VAR_15)
{
 u32 VAR_16;
 struct qcom_qspi *VAR_17;
 int VAR_18 = 1;
 int VAR_19 = 1;
 unsigned long VAR_20;

 VAR_17 = FUNC_1(VAR_14);
 FUNC_2(&VAR_17->lock, VAR_20);

 VAR_16 = FUNC_0(VAR_17->base + VAR_4);
 VAR_16 &= ~VAR_0;
 if (VAR_15->spi->chip_select)
  VAR_16 |= VAR_0;

 VAR_16 |= VAR_2 | VAR_6 | VAR_5 | VAR_7 | VAR_3;
 VAR_16 &= ~(VAR_8 | VAR_12 | VAR_10);
 VAR_16 |= VAR_15->spi->mode << VAR_9;
 VAR_16 |= VAR_18 << VAR_13;
 VAR_16 |= VAR_19 << VAR_11;
 VAR_16 &= ~VAR_1;

 FUNC_4(VAR_16, VAR_17->base + VAR_4);
 FUNC_3(&VAR_17->lock, VAR_20);

 return 0;
}
