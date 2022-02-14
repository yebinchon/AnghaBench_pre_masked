
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ sectype; char* username; char* password; int nullauth; int cred_uid; } ;
struct cifs_ses {int sectype; int * password; int * user_name; int cred_uid; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cifs_ses *VAR_3, struct smb_vol *VAR_4)
{
 if (VAR_4->sectype != VAR_2 &&
     VAR_4->sectype != VAR_3->sectype)
  return 0;

 switch (VAR_3->sectype) {
 case 128:
  if (!FUNC_2(VAR_4->cred_uid, VAR_3->cred_uid))
   return 0;
  break;
 default:

  if (VAR_3->user_name == ((void*)0)) {
   if (!VAR_4->nullauth)
    return 0;
   break;
  }


  if (FUNC_1(VAR_3->user_name,
       VAR_4->username ? VAR_4->username : "",
       VAR_1))
   return 0;
  if ((VAR_4->username && FUNC_0(VAR_4->username) != 0) &&
      VAR_3->password != ((void*)0) &&
      FUNC_1(VAR_3->password,
       VAR_4->password ? VAR_4->password : "",
       VAR_0))
   return 0;
 }
 return 1;
}
