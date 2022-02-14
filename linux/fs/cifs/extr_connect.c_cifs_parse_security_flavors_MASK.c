
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct smb_vol {int sign; int nullauth; int sectype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,int *) ;

__attribute__((used)) static int FUNC_2(char *VAR_9,
           struct smb_vol *VAR_10)
{

 substring_t VAR_11[VAR_2];





 VAR_10->sectype = VAR_6;
 VAR_10->sign = 0;

 switch (FUNC_1(VAR_9, VAR_8, VAR_11)) {
 case 135:
  FUNC_0(VAR_7, "sec=krb5p is not supported!\n");
  return 1;
 case 136:
  VAR_10->sign = 1;

 case 137:
  VAR_10->sectype = VAR_0;
  break;
 case 130:
  VAR_10->sign = 1;

 case 131:
  VAR_10->sectype = VAR_5;
  break;
 case 132:
  VAR_10->sign = 1;

 case 138:
  VAR_10->sectype = VAR_3;
  break;
 case 128:
  VAR_10->sign = 1;

 case 129:
  VAR_10->sectype = VAR_4;
  break;





 case 133:
  VAR_10->nullauth = 1;
  break;
 default:
  FUNC_0(VAR_7, "bad security option: %s\n", VAR_9);
  return 1;
 }

 return 0;
}
