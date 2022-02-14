
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {int lock; scalar_t__ base; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_spi*) ;
 int FUNC_3 (struct stm32_spi*,int ,int ) ;
 int FUNC_4 (struct stm32_spi*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct stm32_spi *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12 = 0;


 if (VAR_10->tx_buf && VAR_10->rx_buf)
  VAR_12 |= VAR_3;
 else if (VAR_10->tx_buf)
  VAR_12 |= VAR_8;
 else if (VAR_10->rx_buf)
  VAR_12 |= VAR_7;


 VAR_12 |= VAR_4 | VAR_9 |
        VAR_6 | VAR_5;

 FUNC_0(&VAR_10->lock, VAR_11);

 FUNC_2(VAR_10);


 if (VAR_10->tx_buf)
  FUNC_4(VAR_10);

 FUNC_3(VAR_10, VAR_0, VAR_1);

 FUNC_5(VAR_12, VAR_10->base + VAR_2);

 FUNC_1(&VAR_10->lock, VAR_11);

 return 1;
}
