
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {scalar_t__ rx_buf; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct rspi_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct rspi_data*,int ) ;
 int FUNC_2 (struct rspi_data*) ;
 int FUNC_3 (struct rspi_data*,int ,int ) ;
 struct rspi_data* FUNC_4 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_2,
        struct spi_device *VAR_3, struct spi_transfer *VAR_4)
{
 struct rspi_data *VAR_5 = FUNC_4(VAR_2);
 u8 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_4->rx_buf) {
  FUNC_2(VAR_5);
  VAR_6 &= ~VAR_1;
 } else {
  VAR_6 |= VAR_1;
 }
 FUNC_3(VAR_5, VAR_6, VAR_0);

 return FUNC_0(VAR_5, VAR_4);
}
