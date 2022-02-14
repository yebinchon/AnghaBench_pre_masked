
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__ stats_disable_count; } ;
struct ef4_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int *,int ) ;
 int FUNC_6 (struct ef4_nic*,int *,int ) ;
 int FUNC_7 (struct ef4_nic*) ;
 int VAR_9 ;
 int FUNC_8 (struct ef4_nic*,int ,int ,char*,int) ;
 int FUNC_9 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ef4_nic *VAR_10)
{
 struct falcon_nic_data *VAR_11 = VAR_10->nic_data;
 ef4_oword_t VAR_12, VAR_13;
 int VAR_14;

 if (FUNC_4(VAR_10) < VAR_0) {



  FUNC_1(VAR_12, VAR_4, 1);
  FUNC_6(VAR_10, &VAR_12, VAR_8);

  for (VAR_14 = 0; VAR_14 < 10000; VAR_14++) {
   FUNC_5(VAR_10, &VAR_12, VAR_8);
   if (FUNC_0(VAR_12, VAR_4) ==
       0)
    return;
   FUNC_10(10);
  }

  FUNC_9(VAR_10, VAR_9, VAR_10->net_dev,
     "timed out waiting for XMAC core reset\n");
 }


 FUNC_3(VAR_11->stats_disable_count == 0);

 FUNC_5(VAR_10, &VAR_13, VAR_7);
 FUNC_2(VAR_13, VAR_5, 1);
 FUNC_6(VAR_10, &VAR_13, VAR_7);

 FUNC_5(VAR_10, &VAR_12, VAR_6);
 FUNC_2(VAR_12, VAR_3, 1);
 FUNC_2(VAR_12, VAR_2, 1);
 FUNC_2(VAR_12, VAR_1, 1);
 FUNC_6(VAR_10, &VAR_12, VAR_6);

 VAR_14 = 0;
 while (1) {
  FUNC_5(VAR_10, &VAR_12, VAR_6);
  if (!FUNC_0(VAR_12, VAR_3) &&
      !FUNC_0(VAR_12, VAR_2) &&
      !FUNC_0(VAR_12, VAR_1)) {
   FUNC_8(VAR_10, VAR_9, VAR_10->net_dev,
      "Completed MAC reset after %d loops\n",
      VAR_14);
   break;
  }
  if (VAR_14 > 20) {
   FUNC_9(VAR_10, VAR_9, VAR_10->net_dev, "MAC reset failed\n");
   break;
  }
  VAR_14++;
  FUNC_10(10);
 }



 FUNC_6(VAR_10, &VAR_13, VAR_7);

 FUNC_7(VAR_10);
}
