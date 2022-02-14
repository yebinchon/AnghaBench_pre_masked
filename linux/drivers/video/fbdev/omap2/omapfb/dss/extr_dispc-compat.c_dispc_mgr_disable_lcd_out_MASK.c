
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(enum omap_channel VAR_2)
{
 FUNC_0(VAR_1);
 int VAR_3;
 u32 VAR_4;

 if (!FUNC_4(VAR_2))
  return;






 VAR_4 = FUNC_3(VAR_2);

 VAR_3 = FUNC_7(VAR_0, &VAR_1,
   VAR_4);
 if (VAR_3)
  FUNC_1("failed to register FRAMEDONE isr\n");

 FUNC_2(VAR_2, 0);


 if (VAR_3) {
  FUNC_6(100);
  return;
 }

 if (!FUNC_9(&VAR_1,
    FUNC_5(100)))
  FUNC_1("timeout waiting for FRAME DONE\n");

 VAR_3 = FUNC_8(VAR_0, &VAR_1,
   VAR_4);
 if (VAR_3)
  FUNC_1("failed to unregister FRAMEDONE isr\n");
}
