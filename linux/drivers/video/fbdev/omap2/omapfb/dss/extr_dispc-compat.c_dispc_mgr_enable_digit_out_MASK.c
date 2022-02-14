
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
 FUNC_0(VAR_2);
 int VAR_3;
 u32 VAR_4;

 if (FUNC_5(VAR_0))
  return;







 VAR_4 = FUNC_4(VAR_0) |
  FUNC_3(VAR_0);

 VAR_3 = FUNC_7(VAR_1, &VAR_2,
   VAR_4);
 if (VAR_3) {
  FUNC_1("failed to register %x isr\n", VAR_4);
  return;
 }

 FUNC_2(VAR_0, 1);


 if (!FUNC_9(&VAR_2, FUNC_6(100)))
  FUNC_1("timeout waiting for digit out to start\n");

 VAR_3 = FUNC_8(VAR_1, &VAR_2,
   VAR_4);
 if (VAR_3)
  FUNC_1("failed to unregister %x isr\n", VAR_4);
}
