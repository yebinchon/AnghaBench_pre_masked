
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_ses {scalar_t__* serverNOS; scalar_t__* serverOS; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,char*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(char **VAR_2, __u16 VAR_3,
    struct cifs_ses *VAR_4,
    const struct nls_table *VAR_5)
{
 int VAR_6;
 char *VAR_7 = *VAR_2;

 FUNC_0(VAR_0, "decode sessetup ascii. bleft %d\n", VAR_3);

 VAR_6 = FUNC_5(VAR_7, VAR_3);
 if (VAR_6 >= VAR_3)
  return;

 FUNC_1(VAR_4->serverOS);

 VAR_4->serverOS = FUNC_2(VAR_6 + 1, VAR_1);
 if (VAR_4->serverOS) {
  FUNC_3(VAR_4->serverOS, VAR_7, VAR_6);
  VAR_4->serverOS[VAR_6] = 0;
  if (FUNC_4(VAR_4->serverOS, "OS/2", 4) == 0)
   FUNC_0(VAR_0, "OS/2 server\n");
 }

 VAR_7 += VAR_6 + 1;
 VAR_3 -= VAR_6 + 1;

 VAR_6 = FUNC_5(VAR_7, VAR_3);
 if (VAR_6 >= VAR_3)
  return;

 FUNC_1(VAR_4->serverNOS);

 VAR_4->serverNOS = FUNC_2(VAR_6 + 1, VAR_1);
 if (VAR_4->serverNOS) {
  FUNC_3(VAR_4->serverNOS, VAR_7, VAR_6);
  VAR_4->serverNOS[VAR_6] = 0;
 }

 VAR_7 += VAR_6 + 1;
 VAR_3 -= VAR_6 + 1;

 VAR_6 = FUNC_5(VAR_7, VAR_3);
 if (VAR_6 > VAR_3)
  return;






 FUNC_0(VAR_0, "ascii: bytes left %d\n", VAR_3);
}
