
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(char VAR_2[VAR_1], const char *VAR_3)
{
 VAR_3 = FUNC_1(VAR_3, '/');
 if (!VAR_3 || FUNC_3(VAR_3 + 1) >= VAR_1) {
  FUNC_0("bad frontend %s\n", VAR_3);
  return -VAR_0;
 }

 FUNC_2(VAR_2, VAR_3 + 1, VAR_1);
 if (!FUNC_1(VAR_2, '/')) {
  FUNC_0("bus_id %s no slash\n", VAR_2);
  return -VAR_0;
 }
 *FUNC_1(VAR_2, '/') = '-';
 return 0;
}
