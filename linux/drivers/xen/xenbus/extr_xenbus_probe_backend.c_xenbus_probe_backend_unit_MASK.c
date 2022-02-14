
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_bus_type {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct xen_bus_type*,char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct xen_bus_type *VAR_2,
         const char *VAR_3,
         const char *VAR_4,
         const char *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_1, "%s/%s", VAR_3, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0("%s\n", VAR_6);

 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_6);
 FUNC_2(VAR_6);
 return VAR_7;
}
