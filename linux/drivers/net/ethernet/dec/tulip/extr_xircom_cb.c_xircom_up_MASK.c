
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xircom_private {int dev; int lock; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct xircom_private*) ;
 int FUNC_1 (struct xircom_private*) ;
 int FUNC_2 (struct xircom_private*) ;
 int FUNC_3 (struct xircom_private*) ;
 int FUNC_4 (struct xircom_private*) ;
 int FUNC_5 (int ,struct xircom_private*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct xircom_private*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct xircom_private*) ;
 int FUNC_12 (struct xircom_private*) ;

__attribute__((used)) static void FUNC_13(struct xircom_private *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;


 FUNC_7(VAR_3->pdev, VAR_1, 0x0000);

 FUNC_8(VAR_3);

 FUNC_9(&VAR_3->lock, VAR_4);


 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3);


 for (VAR_5=0;VAR_5<VAR_0;VAR_5++)
  FUNC_5(VAR_3->dev,VAR_3,VAR_5,VAR_2[VAR_5]);


 FUNC_10(&VAR_3->lock, VAR_4);
 FUNC_11(VAR_3);
 FUNC_12(VAR_3);
 FUNC_6(VAR_3->dev);
}
