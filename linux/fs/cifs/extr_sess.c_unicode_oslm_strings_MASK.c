
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nls_table {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {char* release; } ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,int,struct nls_table const*) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(char **VAR_1, const struct nls_table *VAR_2)
{
 char *VAR_3 = *VAR_1;
 int VAR_4 = 0;


 VAR_4 = FUNC_0((__le16 *)VAR_3, "Linux version ", 32,
        VAR_2);
 VAR_3 += 2 * VAR_4;
 VAR_4 = FUNC_0((__le16 *) VAR_3, FUNC_1()->release,
        32, VAR_2);
 VAR_3 += 2 * VAR_4;
 VAR_3 += 2;

 VAR_4 = FUNC_0((__le16 *) VAR_3, VAR_0,
        32, VAR_2);
 VAR_3 += 2 * VAR_4;
 VAR_3 += 2;

 *VAR_1 = VAR_3;
}
