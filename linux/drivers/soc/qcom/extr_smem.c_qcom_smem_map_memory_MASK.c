
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; } ;
struct qcom_smem {TYPE_1__* regions; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int size; scalar_t__ aux_base; int virt_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,scalar_t__,int ) ;
 int FUNC_2 (struct device_node*,int ,struct resource*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct qcom_smem *VAR_2, struct device *VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct device_node *VAR_6;
 struct resource VAR_7;
 resource_size_t VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_3->of_node, VAR_4, 0);
 if (!VAR_6) {
  FUNC_0(VAR_3, "No %s specified\n", VAR_4);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6, 0, &VAR_7);
 FUNC_3(VAR_6);
 if (VAR_9)
  return VAR_9;
 VAR_8 = FUNC_5(&VAR_7);

 VAR_2->regions[VAR_5].virt_base = FUNC_1(VAR_3, VAR_7.start, VAR_8);
 if (!VAR_2->regions[VAR_5].virt_base)
  return -VAR_1;
 VAR_2->regions[VAR_5].aux_base = (u32)VAR_7.start;
 VAR_2->regions[VAR_5].size = VAR_8;

 return 0;
}
