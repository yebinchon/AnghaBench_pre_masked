
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iproc_pcie {scalar_t__ need_msi_steer; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct iproc_pcie*,struct device_node*) ;
 int FUNC_2 (struct iproc_pcie*,struct device_node*) ;
 struct device_node* FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct iproc_pcie *VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3;






 VAR_2 = FUNC_6(VAR_1->dev->of_node, "msi-parent", 0);
 if (!VAR_2) {
  const __be32 *VAR_4 = ((void*)0);
  int VAR_5;
  u32 VAR_6;

  VAR_4 = FUNC_4(VAR_1->dev->of_node, "msi-map", &VAR_5);
  if (!VAR_4)
   return -VAR_0;

  VAR_6 = FUNC_0(VAR_4 + 1);
  VAR_2 = FUNC_3(VAR_6);
  if (!VAR_2)
   return -VAR_0;
 }






 if (VAR_1->need_msi_steer) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   goto out_put_node;
 }





 VAR_3 = FUNC_1(VAR_1, VAR_2);

out_put_node:
 FUNC_5(VAR_2);
 return VAR_3;
}
