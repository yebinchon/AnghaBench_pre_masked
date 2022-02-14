
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,int ,int const*,char*,struct device_node**) ;
 int VAR_1 ;
 int FUNC_1 (struct device_node*) ;

u64 FUNC_2(struct device_node *VAR_2, const __be32 *VAR_3)
{
 struct device_node *VAR_4;
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1,
         VAR_3, "ranges", &VAR_4);
 if (VAR_4) {
  FUNC_1(VAR_4);
  return VAR_0;
 }

 return VAR_5;
}
