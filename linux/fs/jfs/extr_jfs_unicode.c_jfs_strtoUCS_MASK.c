
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct nls_table {int (* char2uni ) (unsigned char const*,int,scalar_t__*) ;int charset; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (unsigned char const*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(wchar_t * VAR_0, const unsigned char *VAR_1, int VAR_2,
  struct nls_table *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_3) {
  for (VAR_5 = 0; VAR_2 && *VAR_1; VAR_5++, VAR_1 += VAR_4, VAR_2 -= VAR_4)
  {
   VAR_4 = VAR_3->char2uni(VAR_1, VAR_2, &VAR_0[VAR_5]);
   if (VAR_4 < 1) {
    FUNC_0("jfs_strtoUCS: char2uni returned %d.",
     VAR_4);
    FUNC_0("charset = %s, char = 0x%x",
     VAR_3->charset, *VAR_1);
    return VAR_4;
   }
  }
 } else {
  for (VAR_5 = 0; (VAR_5 < VAR_2) && VAR_1[VAR_5]; VAR_5++)
   VAR_0[VAR_5] = (wchar_t) VAR_1[VAR_5];
 }

 VAR_0[VAR_5] = 0;
 return VAR_5;
}
