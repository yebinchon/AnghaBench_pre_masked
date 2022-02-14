
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (void**,void*,int ,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (void*,char*,int ) ;
 scalar_t__ FUNC_3 (void*,char*,int ) ;

__attribute__((used)) static int FUNC_4(void **VAR_1, void *VAR_2,
         bool *VAR_3)
{

 u32 VAR_4;
 bool VAR_5;
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0);
 while (VAR_4-- > 0) {
  u32 VAR_6;
  FUNC_0(VAR_1, VAR_2, VAR_6, VAR_0);
  FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  VAR_5 = !FUNC_2(*VAR_1, "error_string", VAR_6);
  *VAR_1 += VAR_6;
  FUNC_0(VAR_1, VAR_2, VAR_6, VAR_0);
  FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
  if (VAR_5 && FUNC_3(*VAR_1, "blacklisted", VAR_6))
   *VAR_3 = 1;
  *VAR_1 += VAR_6;
 }
 return 0;
bad:
 return -1;
}
