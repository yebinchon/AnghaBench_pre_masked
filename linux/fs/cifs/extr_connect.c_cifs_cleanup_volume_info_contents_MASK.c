
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int prepath; int iocharset; int domainname; int UNC; int password; int username; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct smb_vol *VAR_0)
{
 FUNC_0(VAR_0->username);
 FUNC_1(VAR_0->password);
 FUNC_0(VAR_0->UNC);
 FUNC_0(VAR_0->domainname);
 FUNC_0(VAR_0->iocharset);
 FUNC_0(VAR_0->prepath);
}
