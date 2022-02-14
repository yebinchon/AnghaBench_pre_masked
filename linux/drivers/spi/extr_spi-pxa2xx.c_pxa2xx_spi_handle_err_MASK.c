
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_controller {int dummy; } ;
struct driver_data {int int_cr1; int dma_cr1; int dma_running; int clear_sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct driver_data*) ;
 int FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*,int ) ;
 int FUNC_4 (struct driver_data*,int ,int) ;
 struct driver_data* FUNC_5 (struct spi_controller*) ;
 int FUNC_6 (struct driver_data*,int ) ;

__attribute__((used)) static void FUNC_7(struct spi_controller *VAR_4,
     struct spi_message *VAR_5)
{
 struct driver_data *VAR_6 = FUNC_5(VAR_4);


 FUNC_4(VAR_6, VAR_0,
    FUNC_3(VAR_6, VAR_0) & ~VAR_1);

 FUNC_6(VAR_6, VAR_6->clear_sr);
 FUNC_4(VAR_6, VAR_2,
    FUNC_3(VAR_6, VAR_2)
    & ~(VAR_6->int_cr1 | VAR_6->dma_cr1));
 if (!FUNC_1(VAR_6))
  FUNC_4(VAR_6, VAR_3, 0);
 if (FUNC_0(&VAR_6->dma_running))
  FUNC_2(VAR_6);
}
