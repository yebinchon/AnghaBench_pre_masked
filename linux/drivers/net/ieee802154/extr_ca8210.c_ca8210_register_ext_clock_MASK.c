
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ca8210_platform_data* platform_data; struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct device_node {int name; } ;
struct ca8210_priv {int clk; } ;
struct ca8210_platform_data {int extclockfreq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (struct device_node*,int ,int ) ;
 int VAR_1 ;
 struct ca8210_priv* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 struct ca8210_priv *VAR_4 = FUNC_7(VAR_2);
 struct ca8210_platform_data *VAR_5 = VAR_2->dev.platform_data;
 int VAR_6 = 0;

 if (!VAR_3)
  return -VAR_0;

 VAR_4->clk = FUNC_2(
  &VAR_2->dev,
  VAR_3->name,
  ((void*)0),
  0,
  VAR_5->extclockfreq
 );

 if (FUNC_0(VAR_4->clk)) {
  FUNC_4(&VAR_2->dev, "Failed to register external clk\n");
  return FUNC_1(VAR_4->clk);
 }
 VAR_6 = FUNC_6(VAR_3, VAR_1, VAR_4->clk);
 if (VAR_6) {
  FUNC_3(VAR_4->clk);
  FUNC_4(
   &VAR_2->dev,
   "Failed to register external clock as clock provider\n"
  );
 } else {
  FUNC_5(&VAR_2->dev, "External clock set as clock provider\n");
 }

 return VAR_6;
}
