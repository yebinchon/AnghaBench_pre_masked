
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4) {
  FUNC_3("Memory allocation failed for CHAP_A temporary buffer\n");
  return VAR_1;
 }
 VAR_5 = VAR_4;

 VAR_6 = FUNC_6(&VAR_4, "=");
 if (!VAR_6)
  goto out;

 if (FUNC_4(VAR_6, "CHAP_A")) {
  FUNC_3("Unable to locate CHAP_A key\n");
  goto out;
 }
 while (VAR_6) {
  VAR_6 = FUNC_6(&VAR_4, ",");
  if (!VAR_6)
   goto out;

  if (!FUNC_5(VAR_6, "5", 1)) {
   FUNC_2("Selected MD5 Algorithm\n");
   FUNC_0(VAR_5);
   return VAR_0;
  }
 }
out:
 FUNC_0(VAR_5);
 return VAR_1;
}
