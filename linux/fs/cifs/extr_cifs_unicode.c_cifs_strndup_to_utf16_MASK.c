
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_1 (char const*,int const,struct nls_table const*) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (char const*) ;

__le16 *
FUNC_4(const char *VAR_1, const int VAR_2, int *VAR_3,
        const struct nls_table *VAR_4, int VAR_5)
{
 int VAR_6;
 __le16 *VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4);
 VAR_6 += 2;
 VAR_7 = FUNC_2(VAR_6, VAR_0);
 if (!VAR_7) {
  *VAR_3 = 0;
  return ((void*)0);
 }
 FUNC_0(VAR_7, VAR_1, FUNC_3(VAR_1), VAR_4, VAR_5);
 *VAR_3 = VAR_6;
 return VAR_7;
}
