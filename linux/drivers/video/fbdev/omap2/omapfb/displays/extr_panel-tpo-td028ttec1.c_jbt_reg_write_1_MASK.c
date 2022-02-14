
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct panel_drv_data {TYPE_1__* spi_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct panel_drv_data *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u16 VAR_6[2];

 VAR_6[0] = VAR_0 | VAR_3;
 VAR_6[1] = VAR_1 | VAR_4;
 VAR_5 = FUNC_1(VAR_2->spi_dev, (u8 *)VAR_6,
   2*sizeof(u16));
 if (VAR_5 != 0)
  FUNC_0(&VAR_2->spi_dev->dev,
   "jbt_reg_write_1 spi_write ret %d\n", VAR_5);

 return VAR_5;
}
