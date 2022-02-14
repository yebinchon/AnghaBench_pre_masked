
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct niu*,int ,int ,int ,char*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int ) ;
 int FUNC_3 (struct niu*,int ) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;

__attribute__((used)) static void FUNC_8(struct niu *VAR_2)
{
 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Disable interrupts\n");
 FUNC_2(VAR_2, 0);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Disable RX MAC\n");
 FUNC_3(VAR_2, 0);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Disable IPP\n");
 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Stop TX channels\n");
 FUNC_7(VAR_2);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Stop RX channels\n");
 FUNC_6(VAR_2);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Reset TX channels\n");
 FUNC_5(VAR_2);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Reset RX channels\n");
 FUNC_4(VAR_2);
}
