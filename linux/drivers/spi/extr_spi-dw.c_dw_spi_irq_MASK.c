
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_controller {int cur_msg; } ;
struct dw_spi {int (* transfer_handler ) (struct dw_spi*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_spi*,int ) ;
 struct dw_spi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct dw_spi*,int ) ;
 int FUNC_3 (struct dw_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct spi_controller *VAR_6 = VAR_5;
 struct dw_spi *VAR_7 = FUNC_1(VAR_6);
 u16 VAR_8 = FUNC_0(VAR_7, VAR_0) & 0x3f;

 if (!VAR_8)
  return VAR_2;

 if (!VAR_6->cur_msg) {
  FUNC_2(VAR_7, VAR_3);
  return VAR_1;
 }

 return VAR_7->transfer_handler(VAR_7);
}
