
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iproc_pcie {int type; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct iproc_pcie*,int ) ;
 int FUNC_2 (struct iproc_pcie*,int ,int) ;
 int FUNC_3 (struct iproc_pcie*,struct device_node*,int *) ;

__attribute__((used)) static int FUNC_4(struct iproc_pcie *VAR_1,
    struct device_node *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3, "msi steering failed\n");
  return VAR_4;
 }

 switch (VAR_1->type) {
 case 129:
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  if (VAR_4)
   return VAR_4;
  break;
 case 128:
  FUNC_2(VAR_1, VAR_5, 1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
