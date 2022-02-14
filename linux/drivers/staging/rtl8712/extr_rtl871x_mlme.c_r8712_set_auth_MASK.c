
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct setauth_parm {scalar_t__ mode; } ;
struct security_priv {scalar_t__ AuthAlgrthm; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; int list; scalar_t__ rspsz; int * rsp; int cmdcode; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct cmd_obj*) ;
 struct cmd_obj* FUNC_2 (int,int ) ;
 struct setauth_parm* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

int FUNC_5(struct _adapter *VAR_3,
     struct security_priv *VAR_4)
{
 struct cmd_priv *VAR_5 = &VAR_3->cmdpriv;
 struct cmd_obj *VAR_6;
 struct setauth_parm *VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 VAR_7->mode = (u8)VAR_4->AuthAlgrthm;
 VAR_6->cmdcode = VAR_2;
 VAR_6->parmbuf = (unsigned char *)VAR_7;
 VAR_6->cmdsz = sizeof(struct setauth_parm);
 VAR_6->rsp = ((void*)0);
 VAR_6->rspsz = 0;
 FUNC_0(&VAR_6->list);
 FUNC_4(VAR_5, VAR_6);
 return 0;
}
