
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__ stats_disable_count; } ;
struct ef4_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;
 int FUNC_4 (struct ef4_nic*,int *,int ) ;
 int FUNC_5 (struct ef4_nic*) ;
 int VAR_4 ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_7 (int) ;

int FUNC_8(struct ef4_nic *VAR_5)
{
 struct falcon_nic_data *VAR_6 = VAR_5->nic_data;
 ef4_oword_t VAR_7;
 int VAR_8;


 FUNC_2(VAR_6->stats_disable_count == 0);


 FUNC_1(VAR_7, VAR_1, 1);
 FUNC_4(VAR_5, &VAR_7, VAR_3);


 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  FUNC_3(VAR_5, &VAR_7, VAR_3);
  if (FUNC_0(VAR_7, VAR_1) == 0 &&
      FUNC_0(VAR_7, VAR_2) == 0) {
   FUNC_5(VAR_5);
   return 0;
  }
  FUNC_7(10);
 }
 FUNC_6(VAR_5, VAR_4, VAR_5->net_dev,
    "timed out waiting for XAUI/XGXS reset\n");
 return -VAR_0;
}
