
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_ses {int * domainName; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,struct nls_table const*) ;

__attribute__((used)) static void FUNC_1(char **VAR_1, struct cifs_ses *VAR_2,
       const struct nls_table *VAR_3)
{
 char *VAR_4 = *VAR_1;
 int VAR_5 = 0;


 if (VAR_2->domainName == ((void*)0)) {


  *VAR_4 = 0;
  *(VAR_4+1) = 0;
  VAR_5 = 0;
 } else
  VAR_5 = FUNC_0((__le16 *) VAR_4, VAR_2->domainName,
         VAR_0, VAR_3);
 VAR_4 += 2 * VAR_5;
 VAR_4 += 2;

 *VAR_1 = VAR_4;
}
