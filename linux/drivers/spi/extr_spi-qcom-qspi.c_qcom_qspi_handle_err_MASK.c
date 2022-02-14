
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct TYPE_2__ {scalar_t__ rem_bytes; } ;
struct qcom_qspi {int lock; TYPE_1__ xfer; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct qcom_qspi* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_master *VAR_1,
     struct spi_message *VAR_2)
{
 struct qcom_qspi *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_3(0, VAR_3->base + VAR_0);
 VAR_3->xfer.rem_bytes = 0;
 FUNC_2(&VAR_3->lock, VAR_4);
}
