
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_4)
{
 const char *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_4, "nand-ecc-algo", &VAR_5);
 if (!VAR_6) {
  for (VAR_7 = VAR_2; VAR_7 < FUNC_0(VAR_3); VAR_7++)
   if (!FUNC_2(VAR_5, VAR_3[VAR_7]))
    return VAR_7;
  return -VAR_0;
 }





 VAR_6 = FUNC_1(VAR_4, "nand-ecc-mode", &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (!FUNC_2(VAR_5, "soft"))
  return VAR_2;
 else if (!FUNC_2(VAR_5, "soft_bch"))
  return VAR_1;

 return -VAR_0;
}
