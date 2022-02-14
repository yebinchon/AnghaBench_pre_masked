
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int ) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_0)
{
 const char *VAR_1;
 char VAR_2 = VAR_0[0];

 VAR_1 = FUNC_0(VAR_0 + 1, VAR_2) + 1;
 return !FUNC_2(VAR_1, "sysvol", FUNC_1("sysvol")) ||
  !FUNC_2(VAR_1, "netlogon", FUNC_1("netlogon"));
}
