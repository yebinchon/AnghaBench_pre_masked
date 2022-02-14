
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {struct iscsi_chap* auth_protocol; } ;
struct iscsi_chap {int challenge; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,char*,unsigned char*) ;
 scalar_t__ FUNC_4 (char*,char*,unsigned char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(
 struct iscsi_conn *VAR_1,
 int VAR_2,
 char *VAR_3,
 unsigned int *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6[VAR_0 * 2 + 1];
 struct iscsi_chap *VAR_7 = VAR_1->auth_protocol;

 FUNC_2(VAR_6, 0, VAR_0 * 2 + 1);

 VAR_5 = FUNC_1(VAR_7->challenge, VAR_0);
 if (FUNC_5(VAR_5))
  return VAR_5;
 FUNC_0(VAR_6, VAR_7->challenge,
    VAR_0);



 *VAR_4 += FUNC_4(VAR_3 + *VAR_4, "CHAP_C=0x%s", VAR_6);
 *VAR_4 += 1;

 FUNC_3("[%s] Sending CHAP_C=0x%s\n\n", (VAR_2) ? "server" : "client",
   VAR_6);
 return 0;
}
