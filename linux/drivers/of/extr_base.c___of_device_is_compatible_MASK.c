
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct property* FUNC_0 (struct device_node const*,char*,int *) ;
 int FUNC_1 (struct device_node const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 (struct device_node const*,char const*) ;
 char* FUNC_4 (struct property*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const struct device_node *VAR_1,
         const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct property *VAR_5;
 const char *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;


 if (VAR_2 && VAR_2[0]) {
  VAR_5 = FUNC_0(VAR_1, "compatible", ((void*)0));
  for (VAR_6 = FUNC_4(VAR_5, ((void*)0)); VAR_6;
       VAR_6 = FUNC_4(VAR_5, VAR_6), VAR_7++) {
   if (FUNC_2(VAR_6, VAR_2, FUNC_5(VAR_2)) == 0) {
    VAR_8 = VAR_0/2 - (VAR_7 << 2);
    break;
   }
  }
  if (!VAR_8)
   return 0;
 }


 if (VAR_3 && VAR_3[0]) {
  if (!FUNC_1(VAR_1, VAR_3))
   return 0;
  VAR_8 += 2;
 }


 if (VAR_4 && VAR_4[0]) {
  if (!FUNC_3(VAR_1, VAR_4))
   return 0;
  VAR_8++;
 }

 return VAR_8;
}
