
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_bus_type {int root; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,int ,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (struct xen_bus_type*,char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct xen_bus_type *VAR_2, const char *VAR_3,
     const char *VAR_4)
{
 char *VAR_5;
 int VAR_6;


 if (!FUNC_3(VAR_3, "console", 7) && !FUNC_3(VAR_4, "0", 1)) {
  FUNC_0("Ignoring buggy device entry console/0");
  return 0;
 }

 VAR_5 = FUNC_1(VAR_1, "%s/%s/%s", VAR_2->root, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0("%s", VAR_5);

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
 FUNC_2(VAR_5);
 return VAR_6;
}
