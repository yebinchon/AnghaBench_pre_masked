
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_spi {scalar_t__ base; } ;
struct spi_device {struct spi_controller* controller; } ;
struct spi_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct sprd_spi* FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_3, bool VAR_4)
{
 struct spi_controller *VAR_5 = VAR_3->controller;
 struct sprd_spi *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->base + VAR_2);

 if (!VAR_4) {
  VAR_7 &= ~VAR_0;
  FUNC_2(VAR_7, VAR_6->base + VAR_2);
 } else {
  VAR_7 |= VAR_1;
  FUNC_2(VAR_7, VAR_6->base + VAR_2);
 }
}
