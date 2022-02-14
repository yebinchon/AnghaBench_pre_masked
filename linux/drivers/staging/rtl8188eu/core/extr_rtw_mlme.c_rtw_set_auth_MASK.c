
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setauth_parm {unsigned char mode; } ;
struct security_priv {scalar_t__ dot11AuthAlgrthm; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

int FUNC_5(struct adapter *VAR_6, struct security_priv *VAR_7)
{
 struct cmd_obj *VAR_8;
 struct setauth_parm *VAR_9;
 struct cmd_priv *VAR_10 = &VAR_6->cmdpriv;
 int VAR_11 = VAR_2;

 VAR_8 = FUNC_3(sizeof(struct cmd_obj), VAR_0);
 if (!VAR_8) {
  VAR_11 = VAR_1;
  goto exit;
 }

 VAR_9 = FUNC_3(sizeof(struct setauth_parm), VAR_0);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  VAR_11 = VAR_1;
  goto exit;
 }
 VAR_9->mode = (unsigned char)VAR_7->dot11AuthAlgrthm;
 VAR_8->cmdcode = VAR_3;
 VAR_8->parmbuf = (unsigned char *)VAR_9;
 VAR_8->cmdsz = sizeof(struct setauth_parm);
 VAR_8->rsp = ((void*)0);
 VAR_8->rspsz = 0;
 FUNC_0(&VAR_8->list);
 FUNC_1(VAR_5, VAR_4,
   ("after enqueue set_auth_cmd, auth_mode=%x\n",
   VAR_7->dot11AuthAlgrthm));
 VAR_11 = FUNC_4(VAR_10, VAR_8);
exit:
 return VAR_11;
}
