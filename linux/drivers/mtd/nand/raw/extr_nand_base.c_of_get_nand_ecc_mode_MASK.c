
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_3)
{
 const char *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, "nand-ecc-mode", &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  if (!FUNC_2(VAR_4, VAR_2[VAR_6]))
   return VAR_6;






 if (!FUNC_2(VAR_4, "soft_bch"))
  return VAR_1;

 return -VAR_0;
}
