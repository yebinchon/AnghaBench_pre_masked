
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_join_rsp_msg {int tx_mgmt_power; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (void*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, size_t VAR_3)
{
 struct wcn36xx_hal_join_rsp_msg *VAR_4;

 if (FUNC_1(VAR_2, VAR_3))
  return -VAR_0;

 VAR_4 = (struct wcn36xx_hal_join_rsp_msg *)VAR_2;

 FUNC_0(VAR_1,
      "hal rsp join status %d tx_mgmt_power %d\n",
      VAR_4->status, VAR_4->tx_mgmt_power);

 return 0;
}
