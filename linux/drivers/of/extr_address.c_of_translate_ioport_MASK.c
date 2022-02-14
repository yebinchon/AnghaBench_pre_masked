
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct device_node {int fwnode; } ;
typedef int __be32 ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct device_node*,int ,int const*,char*,struct device_node**) ;
 unsigned long FUNC_1 (int *,unsigned long,unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (struct device_node*) ;
 unsigned long FUNC_3 (unsigned long) ;

__attribute__((used)) static u64 FUNC_4(struct device_node *VAR_2, const __be32 *VAR_3,
   u64 VAR_4)
{
 u64 VAR_5;
 unsigned long VAR_6;
 struct device_node *VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_1,
           VAR_3, "ranges", &VAR_7);
 if (VAR_7) {

  VAR_6 = FUNC_1(&VAR_7->fwnode, VAR_5, VAR_4);
  FUNC_2(VAR_7);
 } else {

  VAR_6 = FUNC_3(VAR_5);
 }

 if (VAR_6 == (unsigned long)-1)
  return VAR_0;

 return VAR_6;
}
