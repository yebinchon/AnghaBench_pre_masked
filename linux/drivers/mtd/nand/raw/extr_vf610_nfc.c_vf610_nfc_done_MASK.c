
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_nfc {int dev; int cmd_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct vf610_nfc*) ;
 int FUNC_3 (struct vf610_nfc*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct vf610_nfc *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(100);
 FUNC_3(VAR_4, VAR_2, VAR_0);
 FUNC_3(VAR_4, VAR_1, VAR_3);

 if (!FUNC_4(&VAR_4->cmd_done, VAR_5))
  FUNC_0(VAR_4->dev, "Timeout while waiting for BUSY.\n");

 FUNC_2(VAR_4);
}
