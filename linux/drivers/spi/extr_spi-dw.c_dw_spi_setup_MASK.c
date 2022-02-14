
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {struct dw_spi_chip* controller_data; } ;
struct dw_spi_chip {int type; int poll_mode; scalar_t__ cs_control; } ;
struct chip_data {int tmode; int type; int poll_mode; scalar_t__ cs_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct chip_data* FUNC_0 (int,int ) ;
 struct chip_data* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,struct chip_data*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_3)
{
 struct dw_spi_chip *VAR_4 = ((void*)0);
 struct chip_data *VAR_5;


 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_0(sizeof(struct chip_data), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  FUNC_2(VAR_3, VAR_5);
 }





 VAR_4 = VAR_3->controller_data;


 if (VAR_4) {
  if (VAR_4->cs_control)
   VAR_5->cs_control = VAR_4->cs_control;

  VAR_5->poll_mode = VAR_4->poll_mode;
  VAR_5->type = VAR_4->type;
 }

 VAR_5->tmode = VAR_2;

 return 0;
}
