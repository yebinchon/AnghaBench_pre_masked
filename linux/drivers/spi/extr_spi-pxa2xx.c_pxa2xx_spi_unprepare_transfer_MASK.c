
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct driver_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ,int) ;
 struct driver_data* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_2)
{
 struct driver_data *VAR_3 = FUNC_2(VAR_2);


 FUNC_1(VAR_3, VAR_0,
    FUNC_0(VAR_3, VAR_0) & ~VAR_1);

 return 0;
}
