
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct panel_drv_data {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct panel_drv_data*,int ,int *,int) ;
 int FUNC_2 (int *,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct panel_drv_data *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 FUNC_1(VAR_1, VAR_0,
   (u8 *)&VAR_2, 4);
 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = (VAR_2 & (1 << 17)) && (VAR_2 & (1 << 10));
 FUNC_2(&VAR_1->spi->dev,
  "LCD panel %senabled by bootloader (status 0x%04x)\n",
  VAR_3 ? "" : "not ", VAR_2);
 return VAR_3;
}
