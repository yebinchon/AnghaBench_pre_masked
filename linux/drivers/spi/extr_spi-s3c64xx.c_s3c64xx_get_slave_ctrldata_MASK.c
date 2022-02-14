
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct s3c64xx_spi_csinfo {int fb_delay; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s3c64xx_spi_csinfo* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct s3c64xx_spi_csinfo* FUNC_2 (int,int ) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct s3c64xx_spi_csinfo *FUNC_6(
    struct spi_device *VAR_3)
{
 struct s3c64xx_spi_csinfo *VAR_4;
 struct device_node *VAR_5, *VAR_6 = ((void*)0);
 u32 VAR_7 = 0;

 VAR_5 = VAR_3->dev.of_node;
 if (!VAR_5) {
  FUNC_1(&VAR_3->dev, "device node not found\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_3(VAR_5, "controller-data");
 if (!VAR_6) {
  FUNC_1(&VAR_3->dev, "child node 'controller-data' not found\n");
  return FUNC_0(-VAR_0);
 }

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4) {
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_1);
 }

 FUNC_5(VAR_6, "samsung,spi-feedback-delay", &VAR_7);
 VAR_4->fb_delay = VAR_7;
 FUNC_4(VAR_6);
 return VAR_4;
}
