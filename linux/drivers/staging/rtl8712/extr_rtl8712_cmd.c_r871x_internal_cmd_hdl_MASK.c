
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drvint_cmd_parm {int i_cid; int pbuf; } ;
struct _adapter {int dummy; } ;


 int FUNC_0 (struct _adapter*) ;

 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_0, u8 *VAR_1)
{
 struct drvint_cmd_parm *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = (struct drvint_cmd_parm *)VAR_1;
 switch (VAR_2->i_cid) {
 case 128:
  FUNC_0(VAR_0);
  break;
 default:
  break;
 }
 FUNC_1(VAR_2->pbuf);
}
