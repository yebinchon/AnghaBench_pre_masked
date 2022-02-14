
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nls_table {int dummy; } ;
struct cifs_ses {int * domainName; int * user_name; } ;
struct TYPE_2__ {char* release; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static void FUNC_5(char **VAR_3, struct cifs_ses *VAR_4,
     const struct nls_table *VAR_5)
{
 char *VAR_6 = *VAR_3;
 int VAR_7;




 if (VAR_4->user_name != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_6, VAR_4->user_name, VAR_1);
  if (FUNC_0(VAR_7 < 0))
   VAR_7 = VAR_1 - 1;
  VAR_6 += VAR_7;
 }

 *VAR_6 = 0;
 VAR_6++;


 if (VAR_4->domainName != ((void*)0)) {
  VAR_7 = FUNC_4(VAR_6, VAR_4->domainName, VAR_0);
  if (FUNC_0(VAR_7 < 0))
   VAR_7 = VAR_0 - 1;
  VAR_6 += VAR_7;
 }

 *VAR_6 = 0;
 VAR_6++;



 FUNC_2(VAR_6, "Linux version ");
 VAR_6 += FUNC_3("Linux version ");
 FUNC_2(VAR_6, FUNC_1()->release);
 VAR_6 += FUNC_3(FUNC_1()->release) + 1;

 FUNC_2(VAR_6, VAR_2);
 VAR_6 += FUNC_3(VAR_2) + 1;

 *VAR_3 = VAR_6;
}
