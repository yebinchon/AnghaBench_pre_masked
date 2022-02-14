
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_spi {scalar_t__ cur_comm; int lock; scalar_t__ tx_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct stm32_spi*) ;
 int FUNC_3 (struct stm32_spi*,int ,int) ;
 int FUNC_4 (struct stm32_spi*) ;

__attribute__((used)) static int FUNC_5(struct stm32_spi *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10 = 0;


 if (VAR_8->cur_comm == VAR_3 || VAR_8->cur_comm == VAR_1) {
  VAR_10 |= VAR_7;
 } else if (VAR_8->cur_comm == VAR_2) {




  VAR_10 |= VAR_6 | VAR_5;
 } else {
  return -VAR_0;
 }

 FUNC_0(&VAR_8->lock, VAR_9);

 FUNC_3(VAR_8, VAR_4, VAR_10);

 FUNC_2(VAR_8);


 if (VAR_8->tx_buf)
  FUNC_4(VAR_8);

 FUNC_1(&VAR_8->lock, VAR_9);

 return 1;
}
