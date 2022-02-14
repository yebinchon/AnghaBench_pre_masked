
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct readRF_rsp {int dummy; } ;
struct readRF_parm {int offset; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; int rspsz; int * rsp; int cmdcode; int list; } ;
struct _adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct cmd_obj*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;

int FUNC_5(struct _adapter *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct readRF_parm *VAR_7;
 struct cmd_priv *VAR_8 = &VAR_3->cmdpriv;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 FUNC_1(&VAR_6->list);
 VAR_6->cmdcode = FUNC_0(VAR_2);
 VAR_6->parmbuf = (unsigned char *)VAR_7;
 VAR_6->cmdsz = sizeof(struct readRF_parm);
 VAR_6->rsp = VAR_5;
 VAR_6->rspsz = sizeof(struct readRF_rsp);
 VAR_7->offset = VAR_4;
 FUNC_4(VAR_8, VAR_6);
 return 0;
}
