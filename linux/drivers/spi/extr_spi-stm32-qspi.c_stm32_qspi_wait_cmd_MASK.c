
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_qspi {scalar_t__ io_base; int data_completion; } ;
struct TYPE_2__ {int nbytes; } ;
struct spi_mem_op {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stm32_qspi*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct stm32_qspi *VAR_12,
          const struct spi_mem_op *VAR_13)
{
 u32 VAR_14, VAR_15;
 int VAR_16 = 0;

 if (!VAR_13->data.nbytes)
  return FUNC_3(VAR_12);

 if (FUNC_1(VAR_12->io_base + VAR_8) & VAR_9)
  goto out;

 FUNC_2(&VAR_12->data_completion);
 VAR_14 = FUNC_1(VAR_12->io_base + VAR_6);
 FUNC_5(VAR_14 | VAR_0 | VAR_1, VAR_12->io_base + VAR_6);

 if (!FUNC_4(&VAR_12->data_completion,
    FUNC_0(VAR_11))) {
  VAR_16 = -VAR_3;
 } else {
  VAR_15 = FUNC_1(VAR_12->io_base + VAR_8);
  if (VAR_15 & VAR_10)
   VAR_16 = -VAR_2;
 }

out:

 FUNC_5(VAR_4 | VAR_5, VAR_12->io_base + VAR_7);

 return VAR_16;
}
