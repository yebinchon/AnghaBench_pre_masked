
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcmrvl_platform_data {int irq; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,int ) ;
 int FUNC_1 (struct device_node*,struct nfcmrvl_platform_data*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0,
    struct nfcmrvl_platform_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_2("Failed to get generic entries\n");
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2 < 0) {
  FUNC_2("Unable to get irq, error: %d\n", VAR_2);
  return VAR_2;
 }
 VAR_1->irq = VAR_2;

 return 0;
}
