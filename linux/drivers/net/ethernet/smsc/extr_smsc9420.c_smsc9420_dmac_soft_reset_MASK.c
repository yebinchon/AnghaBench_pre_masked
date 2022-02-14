
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smsc9420_pdata*,int ,int ,char*) ;
 int FUNC_1 (struct smsc9420_pdata*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct smsc9420_pdata *VAR_3)
{
 FUNC_2(VAR_3, VAR_0, VAR_1);
 FUNC_1(VAR_3, VAR_0);
 FUNC_3(2);
 if (FUNC_1(VAR_3, VAR_0) & VAR_1)
  FUNC_0(VAR_3, VAR_2, VAR_3->dev, "Software reset not cleared\n");
}
