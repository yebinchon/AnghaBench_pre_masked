
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int * iocharset; int * local_nls; int * username; scalar_t__ nullauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (char*,char const*,struct smb_vol*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 () ;

int
FUNC_5(struct smb_vol *VAR_4, char *VAR_5,
   const char *VAR_6, bool VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_1(VAR_5, VAR_6, VAR_4, VAR_7))
  return -VAR_0;

 if (VAR_4->nullauth) {
  FUNC_0(VAR_2, "Anonymous login\n");
  FUNC_2(VAR_4->username);
  VAR_4->username = ((void*)0);
 } else if (VAR_4->username) {

  FUNC_0(VAR_2, "Username: %s\n", VAR_4->username);
 } else {
  FUNC_0(VAR_3, "No username specified\n");


  return -VAR_0;
 }


 if (VAR_4->iocharset == ((void*)0)) {

  VAR_4->local_nls = FUNC_4();
 } else {
  VAR_4->local_nls = FUNC_3(VAR_4->iocharset);
  if (VAR_4->local_nls == ((void*)0)) {
   FUNC_0(VAR_3, "CIFS mount error: iocharset %s not found\n",
     VAR_4->iocharset);
   return -VAR_1;
  }
 }

 return VAR_8;
}
