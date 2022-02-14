
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sess_data {int func; } ;
struct cifs_ses {int sectype; int server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_2(struct cifs_ses *VAR_11, struct sess_data *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11->server, VAR_11->sectype);
 FUNC_0(VAR_3, "sess setup type %d\n", VAR_13);
 if (VAR_13 == VAR_4) {
  FUNC_0(VAR_5,
   "Unable to select appropriate authentication method!");
  return -VAR_0;
 }

 switch (VAR_13) {
 case 131:
  return -VAR_2;

 case 130:
  VAR_12->func = VAR_8;
  break;
 case 129:
  VAR_12->func = VAR_9;
  break;
 case 132:




  FUNC_0(VAR_5, "Kerberos negotiated but upcall support disabled!\n");
  return -VAR_1;
  break;

 case 128:
  VAR_12->func = VAR_10;
  break;
 default:
  FUNC_0(VAR_5, "secType %d not supported!\n", VAR_13);
  return -VAR_1;
 }

 return 0;
}
