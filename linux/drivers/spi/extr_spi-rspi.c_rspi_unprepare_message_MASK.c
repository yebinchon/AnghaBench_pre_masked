
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_controller {int dummy; } ;
struct rspi_data {int spcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rspi_data*,int ) ;
 int FUNC_1 (struct rspi_data*,int ,int ) ;
 int FUNC_2 (struct rspi_data*,int,int ) ;
 struct rspi_data* FUNC_3 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_4,
      struct spi_message *VAR_5)
{
 struct rspi_data *VAR_6 = FUNC_3(VAR_4);


 FUNC_2(VAR_6, FUNC_0(VAR_6, VAR_1) & ~VAR_3, VAR_1);


 FUNC_1(VAR_6, VAR_6->spcmd, VAR_0);
 FUNC_2(VAR_6, 0, VAR_2);
 return 0;
}
