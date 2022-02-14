
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const* const,int) ;
 int FUNC_1 (char const* const) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 static const char * const VAR_1[] = {
  "lnbh25", "ascot2e", "horus3a", "cxd2841er", "helene", ((void*)0)
 };
 const char * const *VAR_2 = VAR_1;
 int VAR_3;

 while (*VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(*VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_0, "request_module(%s) failed: %d\n",
    *VAR_2, VAR_3);
  }
  ++VAR_2;
 }
 return 0;
}
