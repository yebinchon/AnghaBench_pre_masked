
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int of_node; struct at86rf230_platform_data* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct at86rf230_platform_data {int rstn; int slp_tr; int xtal_trim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static int
FUNC_3(struct spi_device *VAR_3, int *VAR_4, int *VAR_5,
      u8 *VAR_6)
{
 struct at86rf230_platform_data *VAR_7 = VAR_3->dev.platform_data;
 int VAR_8;

 if (!FUNC_0(VAR_0) || !VAR_3->dev.of_node) {
  if (!VAR_7)
   return -VAR_2;

  *VAR_4 = VAR_7->rstn;
  *VAR_5 = VAR_7->slp_tr;
  *VAR_6 = VAR_7->xtal_trim;
  return 0;
 }

 *VAR_4 = FUNC_1(VAR_3->dev.of_node, "reset-gpio", 0);
 *VAR_5 = FUNC_1(VAR_3->dev.of_node, "sleep-gpio", 0);
 VAR_8 = FUNC_2(VAR_3->dev.of_node, "xtal-trim", VAR_6);
 if (VAR_8 < 0 && VAR_8 != -VAR_1)
  return VAR_8;

 return 0;
}
