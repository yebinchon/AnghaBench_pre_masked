
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct panel_drv_data *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u16 VAR_4 = VAR_0 | VAR_2;

 VAR_3 = FUNC_1(VAR_1->spi_dev, (u8 *)&VAR_4,
   1*sizeof(u16));
 if (VAR_3 != 0)
  FUNC_0(&VAR_1->spi_dev->dev,
   "jbt_ret_write_0 spi_write ret %d\n", VAR_3);

 return VAR_3;
}
