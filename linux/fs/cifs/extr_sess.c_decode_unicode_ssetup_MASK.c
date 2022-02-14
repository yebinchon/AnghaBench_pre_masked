
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int dummy; } ;
struct cifs_ses {int serverOS; int serverNOS; int serverDomain; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 void* FUNC_2 (char*,int,int,struct nls_table const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(char **VAR_1, int VAR_2, struct cifs_ses *VAR_3,
        const struct nls_table *VAR_4)
{
 int VAR_5;
 char *VAR_6 = *VAR_1;

 FUNC_1(VAR_0, "bleft %d\n", VAR_2);

 FUNC_3(VAR_3->serverOS);
 VAR_3->serverOS = FUNC_2(VAR_6, VAR_2, 1, VAR_4);
 FUNC_1(VAR_0, "serverOS=%s\n", VAR_3->serverOS);
 VAR_5 = (FUNC_0((wchar_t *) VAR_6, VAR_2 / 2) * 2) + 2;
 VAR_6 += VAR_5;
 VAR_2 -= VAR_5;
 if (VAR_2 <= 0)
  return;

 FUNC_3(VAR_3->serverNOS);
 VAR_3->serverNOS = FUNC_2(VAR_6, VAR_2, 1, VAR_4);
 FUNC_1(VAR_0, "serverNOS=%s\n", VAR_3->serverNOS);
 VAR_5 = (FUNC_0((wchar_t *) VAR_6, VAR_2 / 2) * 2) + 2;
 VAR_6 += VAR_5;
 VAR_2 -= VAR_5;
 if (VAR_2 <= 0)
  return;

 FUNC_3(VAR_3->serverDomain);
 VAR_3->serverDomain = FUNC_2(VAR_6, VAR_2, 1, VAR_4);
 FUNC_1(VAR_0, "serverDomain=%s\n", VAR_3->serverDomain);

 return;
}
