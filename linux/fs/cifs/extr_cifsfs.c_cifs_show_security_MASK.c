
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cifs_ses {int sectype; scalar_t__ sign; int cred_uid; int * user_name; } ;







 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_3(struct seq_file *VAR_2, struct cifs_ses *VAR_3)
{
 if (VAR_3->sectype == VAR_0) {
  if (VAR_3->user_name == ((void*)0))
   FUNC_2(VAR_2, ",sec=none");
  return;
 }

 FUNC_2(VAR_2, ",sec=");

 switch (VAR_3->sectype) {
 case 131:
  FUNC_2(VAR_2, "lanman");
  break;
 case 129:
  FUNC_2(VAR_2, "ntlmv2");
  break;
 case 130:
  FUNC_2(VAR_2, "ntlm");
  break;
 case 132:
  FUNC_1(VAR_2, "krb5,cruid=%u", FUNC_0(&VAR_1,VAR_3->cred_uid));
  break;
 case 128:
  FUNC_2(VAR_2, "ntlmssp");
  break;
 default:

  FUNC_2(VAR_2, "unknown");
  break;
 }

 if (VAR_3->sign)
  FUNC_2(VAR_2, "i");
}
