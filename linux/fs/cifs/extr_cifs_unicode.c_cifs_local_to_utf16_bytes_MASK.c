
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (char const*,int,int *) ;} ;


 int FUNC_0 (char const*,int,int *) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1,
     const struct nls_table *VAR_2)
{
 int VAR_3;
 int VAR_4;
 wchar_t VAR_5;

 for (VAR_4 = 0; VAR_1 && *VAR_0; VAR_4++, VAR_0 += VAR_3, VAR_1 -= VAR_3) {
  VAR_3 = VAR_2->char2uni(VAR_0, VAR_1, &VAR_5);

  if (VAR_3 < 1)
   VAR_3 = 1;
 }
 return 2 * VAR_4;
}
