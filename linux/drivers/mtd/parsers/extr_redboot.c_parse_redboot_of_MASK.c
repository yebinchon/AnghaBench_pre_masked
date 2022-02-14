
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtd_info {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_1)
{
 struct device_node *VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return;

 VAR_4 = FUNC_1(VAR_2, "fis-index-block", &VAR_3);
 if (VAR_4)
  return;





 VAR_0 = VAR_3;
}
