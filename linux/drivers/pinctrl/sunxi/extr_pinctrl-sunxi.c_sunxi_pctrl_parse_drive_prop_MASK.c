
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1)
{
 u32 VAR_2;


 if (!FUNC_0(VAR_1, "drive-strength", &VAR_2)) {

  if (VAR_2 < 10)
   return -VAR_0;


  if (VAR_2 > 40)
   VAR_2 = 40;


  return FUNC_1(VAR_2, 10);
 }


 if (FUNC_0(VAR_1, "allwinner,drive", &VAR_2))
  return -VAR_0;

 return (VAR_2 + 1) * 10;
}
