
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (struct device_node*,int ,int *,int *) ;
 int FUNC_1 (struct device_node*,int const*) ;

__attribute__((used)) static u64 FUNC_2(struct device_node *VAR_1)
{
 u64 VAR_2;
 const __be32 *VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0, &VAR_2, ((void*)0));
 if (!VAR_3)
  return VAR_0;

 return FUNC_1(VAR_1, VAR_3);
}
