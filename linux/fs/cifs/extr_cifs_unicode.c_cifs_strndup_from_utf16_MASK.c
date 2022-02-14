
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int,int const,struct nls_table const*,int ) ;
 int FUNC_1 (int *,int const,struct nls_table const*) ;
 char* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct nls_table const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*,int const) ;

char *
FUNC_6(const char *VAR_2, const int VAR_3,
   const bool VAR_4, const struct nls_table *VAR_5)
{
 int VAR_6;
 char *VAR_7;

 if (VAR_4) {
  VAR_6 = FUNC_1((__le16 *) VAR_2, VAR_3, VAR_5);
  VAR_6 += FUNC_3(VAR_5);
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (!VAR_7)
   return ((void*)0);
  FUNC_0(VAR_7, (__le16 *) VAR_2, VAR_6, VAR_3, VAR_5,
          VAR_1);
 } else {
  VAR_6 = FUNC_5(VAR_2, VAR_3);
  VAR_6++;
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (!VAR_7)
   return ((void*)0);
  FUNC_4(VAR_7, VAR_2, VAR_6);
 }

 return VAR_7;
}
