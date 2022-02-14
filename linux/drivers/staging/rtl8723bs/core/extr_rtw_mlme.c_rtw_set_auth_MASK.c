
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setauth_parm {unsigned char mode; } ;
struct security_priv {scalar_t__ dot11AuthAlgrthm; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; } ;
struct adapter {struct cmd_priv cmdpriv; } ;
typedef int sint ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;
 void* FUNC_4 (int) ;

sint FUNC_5(struct adapter *VAR_5, struct security_priv *VAR_6)
{
 struct cmd_obj *VAR_7;
 struct setauth_parm *VAR_8;
 struct cmd_priv *VAR_9 = &(VAR_5->cmdpriv);
 sint VAR_10 = VAR_1;

 VAR_7 = FUNC_4(sizeof(struct cmd_obj));
 if (VAR_7 == ((void*)0)) {
  VAR_10 = VAR_0;
  goto exit;
 }

 VAR_8 = FUNC_4(sizeof(struct setauth_parm));
 if (VAR_8 == ((void*)0)) {
  FUNC_2((unsigned char *)VAR_7);
  VAR_10 = VAR_0;
  goto exit;
 }

 VAR_8->mode = (unsigned char)VAR_6->dot11AuthAlgrthm;

 VAR_7->cmdcode = VAR_2;
 VAR_7->parmbuf = (unsigned char *)VAR_8;
 VAR_7->cmdsz = (sizeof(struct setauth_parm));
 VAR_7->rsp = ((void*)0);
 VAR_7->rspsz = 0;


 FUNC_0(&VAR_7->list);

 FUNC_1(VAR_4, VAR_3, ("after enqueue set_auth_cmd, auth_mode =%x\n", VAR_6->dot11AuthAlgrthm));

 VAR_10 = FUNC_3(VAR_9, VAR_7);

exit:
 return VAR_10;
}
