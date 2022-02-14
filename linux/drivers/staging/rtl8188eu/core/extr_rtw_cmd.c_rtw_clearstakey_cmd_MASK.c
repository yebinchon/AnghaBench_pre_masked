
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int hwaddr; } ;
struct set_stakey_rsp {int dummy; } ;
struct set_stakey_parm {int rspsz; int id; int algorithm; int addr; int * rsp; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int rspsz; int id; int algorithm; int addr; int * rsp; } ;
struct adapter {struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct set_stakey_parm*,struct set_stakey_parm*,int ) ;
 int FUNC_3 (struct set_stakey_parm*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct cmd_priv*,struct set_stakey_parm*) ;

u8 FUNC_6(struct adapter *VAR_5, u8 *VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct cmd_obj *VAR_9;
 struct set_stakey_parm *VAR_10;
 struct cmd_priv *VAR_11 = &VAR_5->cmdpriv;
 struct set_stakey_rsp *VAR_12 = ((void*)0);
 struct sta_info *VAR_13 = (struct sta_info *)VAR_6;
 u8 VAR_14 = VAR_3;

 if (!VAR_8) {
  FUNC_0(VAR_5, VAR_7);
 } else {
  VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_0);
  if (!VAR_9) {
   VAR_14 = VAR_1;
   goto exit;
  }

  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_0);
  if (!VAR_10) {
   FUNC_3(VAR_9);
   VAR_14 = VAR_1;
   goto exit;
  }

  VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_0);
  if (!VAR_12) {
   FUNC_3(VAR_9);
   FUNC_3(VAR_10);
   VAR_14 = VAR_1;
   goto exit;
  }

  FUNC_2(VAR_9, VAR_10, VAR_4);
  VAR_9->rsp = (u8 *)VAR_12;
  VAR_9->rspsz = sizeof(struct set_stakey_rsp);

  FUNC_1(VAR_10->addr, VAR_13->hwaddr);

  VAR_10->algorithm = VAR_2;

  VAR_10->id = VAR_7;

  VAR_14 = FUNC_5(VAR_11, VAR_9);
 }
exit:

 return VAR_14;
}
