
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efm32_spi_ddata {scalar_t__ rx_len; int lock; int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efm32_spi_ddata*,int ) ;
 int FUNC_2 (struct efm32_spi_ddata*) ;
 int FUNC_3 (struct efm32_spi_ddata*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct efm32_spi_ddata *VAR_8 = VAR_7;
 irqreturn_t VAR_9 = VAR_1;

 FUNC_4(&VAR_8->lock);

 while (VAR_8->rx_len > 0 &&
   FUNC_1(VAR_8, VAR_4) &
   VAR_5) {
  FUNC_2(VAR_8);

  VAR_9 = VAR_0;
 }

 if (!VAR_8->rx_len) {
  u32 VAR_10 = FUNC_1(VAR_8, VAR_2);

  VAR_10 &= ~VAR_3;

  FUNC_3(VAR_8, VAR_10, VAR_2);

  FUNC_0(&VAR_8->done);
 }

 FUNC_5(&VAR_8->lock);

 return VAR_9;
}
