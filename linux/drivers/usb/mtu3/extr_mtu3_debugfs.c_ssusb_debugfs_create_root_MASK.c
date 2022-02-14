
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dev; int dbgfs_root; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(struct ssusb_mtk *VAR_1)
{
 VAR_1->dbgfs_root =
  FUNC_0(FUNC_1(VAR_1->dev), VAR_0);
}
