
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct resource {scalar_t__ start; } ;
struct iproc_pcie {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,int ,struct resource*) ;
 int FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_3(struct iproc_pcie *VAR_2,
          struct device_node *VAR_3,
          u64 *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 int VAR_6;
 struct resource VAR_7;





 if (!FUNC_2(VAR_3, "arm,gic-v3-its")) {
  FUNC_0(VAR_5, "unable to find compatible MSI controller\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_1(VAR_3, 0, &VAR_7);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "unable to obtain MSI controller resources\n");
  return VAR_6;
 }

 *VAR_4 = VAR_7.start + VAR_1;
 return 0;
}
