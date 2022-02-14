
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct cqspi_flash_pdata {int clk_rate; int tslch_ns; int tchsh_ns; int tsd2d_ns; int tshsl_ns; int read_delay; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1,
        struct cqspi_flash_pdata *VAR_2,
        struct device_node *VAR_3)
{
 if (FUNC_1(VAR_3, "cdns,read-delay", &VAR_2->read_delay)) {
  FUNC_0(&VAR_1->dev, "couldn't determine read-delay\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, "cdns,tshsl-ns", &VAR_2->tshsl_ns)) {
  FUNC_0(&VAR_1->dev, "couldn't determine tshsl-ns\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, "cdns,tsd2d-ns", &VAR_2->tsd2d_ns)) {
  FUNC_0(&VAR_1->dev, "couldn't determine tsd2d-ns\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, "cdns,tchsh-ns", &VAR_2->tchsh_ns)) {
  FUNC_0(&VAR_1->dev, "couldn't determine tchsh-ns\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, "cdns,tslch-ns", &VAR_2->tslch_ns)) {
  FUNC_0(&VAR_1->dev, "couldn't determine tslch-ns\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, "spi-max-frequency", &VAR_2->clk_rate)) {
  FUNC_0(&VAR_1->dev, "couldn't determine spi-max-frequency\n");
  return -VAR_0;
 }

 return 0;
}
