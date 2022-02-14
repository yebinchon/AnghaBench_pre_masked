
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_ses {int sectype; int server; } ;
struct SMB2_sess_data {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cifs_ses *VAR_7, struct SMB2_sess_data *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7->server, VAR_7->sectype);
 FUNC_0(VAR_2, "sess setup type %d\n", VAR_9);
 if (VAR_9 == VAR_5) {
  FUNC_0(VAR_6,
   "Unable to select appropriate authentication method!");
  return -VAR_0;
 }

 switch (VAR_9) {
 case 129:
  VAR_8->func = VAR_3;
  break;
 case 128:
  VAR_8->func = VAR_4;
  break;
 default:
  FUNC_0(VAR_6, "secType %d not supported!\n", VAR_9);
  return -VAR_1;
 }

 return 0;
}
