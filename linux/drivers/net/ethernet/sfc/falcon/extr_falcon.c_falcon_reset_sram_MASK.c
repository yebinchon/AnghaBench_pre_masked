
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int net_dev; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;
 int FUNC_4 (struct ef4_nic*,int *,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ef4_nic *VAR_9)
{
 ef4_oword_t VAR_10, VAR_11;
 int VAR_12;


 FUNC_3(VAR_9, &VAR_11, VAR_5);
 FUNC_2(VAR_11, VAR_1, 1);
 FUNC_2(VAR_11, VAR_2, 1);
 FUNC_4(VAR_9, &VAR_11, VAR_5);


 FUNC_1(VAR_10,
        VAR_3, 1,
        VAR_4, 0);
 FUNC_4(VAR_9, &VAR_10, VAR_6);


 VAR_12 = 0;
 do {
  FUNC_5(VAR_9, VAR_8, VAR_9->net_dev,
     "waiting for SRAM reset (attempt %d)...\n", VAR_12);


  FUNC_7(VAR_7 / 50);


  FUNC_3(VAR_9, &VAR_10, VAR_6);
  if (!FUNC_0(VAR_10, VAR_3)) {
   FUNC_5(VAR_9, VAR_8, VAR_9->net_dev,
      "SRAM reset complete\n");

   return 0;
  }
 } while (++VAR_12 < 20);

 FUNC_6(VAR_9, VAR_8, VAR_9->net_dev, "timed out waiting for SRAM reset\n");
 return -VAR_0;
}
