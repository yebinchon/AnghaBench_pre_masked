
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 int FUNC_9 (int ,int *,scalar_t__) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(void)
{
 FUNC_0(VAR_2);
 int VAR_3, VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_5(VAR_0))
  return;






 VAR_5 = FUNC_3(VAR_0);
 VAR_6 = 1;

 if (!VAR_5) {





  VAR_5 = FUNC_4(VAR_0);






  VAR_6 = 2;
 }

 VAR_3 = FUNC_8(VAR_1, &VAR_2,
   VAR_5);
 if (VAR_3)
  FUNC_1("failed to register %x isr\n", VAR_5);

 FUNC_2(VAR_0, 0);


 if (VAR_3) {
  FUNC_7(100);
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
  if (!FUNC_10(&VAR_2,
     FUNC_6(100)))
   FUNC_1("timeout waiting for digit out to stop\n");
 }

 VAR_3 = FUNC_9(VAR_1, &VAR_2,
   VAR_5);
 if (VAR_3)
  FUNC_1("failed to unregister %x isr\n", VAR_5);
}
