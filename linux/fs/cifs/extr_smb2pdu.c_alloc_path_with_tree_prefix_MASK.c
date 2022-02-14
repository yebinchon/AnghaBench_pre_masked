
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int,struct nls_table*) ;
 int const FUNC_3 (int) ;
 int * FUNC_4 (int,int ) ;
 struct nls_table* FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct nls_table*) ;

__attribute__((used)) static int
FUNC_9(__le16 **VAR_4, int *VAR_5, int *VAR_6,
       const char *VAR_7, const __le16 *VAR_8)
{
 int VAR_9, VAR_10;
 struct nls_table *VAR_11;
 const __le16 VAR_12[] = {FUNC_3('\\'), FUNC_3(0x0000)};




 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9 < 2 || !(VAR_7[0] == '\\' && VAR_7[1] == '\\'))
  return -VAR_0;

 VAR_7 += 2;
 VAR_9 -= 2;

 VAR_10 = FUNC_1((wchar_t *)VAR_8, VAR_3);





 *VAR_6 = VAR_9 + 1 + VAR_10;






 *VAR_5 = FUNC_6((*VAR_6+1)*2, 8);
 *VAR_4 = FUNC_4(*VAR_5, VAR_2);
 if (!*VAR_4)
  return -VAR_1;

 VAR_11 = FUNC_5();
 FUNC_2(*VAR_4, VAR_7, VAR_9, VAR_11);
 FUNC_0(*VAR_4, VAR_12);
 FUNC_0(*VAR_4, VAR_8);
 FUNC_8(VAR_11);

 return 0;
}
