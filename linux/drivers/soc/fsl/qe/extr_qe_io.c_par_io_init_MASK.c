
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device_node*,int ,struct resource*) ;
 int * FUNC_2 (struct device_node*,char*,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct resource*) ;

int FUNC_4(struct device_node *VAR_2)
{
 struct resource VAR_3;
 int VAR_4;
 const u32 *VAR_5;


 VAR_4 = FUNC_1(VAR_2, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_1 = FUNC_0(VAR_3.start, FUNC_3(&VAR_3));

 VAR_5 = FUNC_2(VAR_2, "num-ports", ((void*)0));
 if (VAR_5)
  VAR_0 = *VAR_5;

 return 0;
}
