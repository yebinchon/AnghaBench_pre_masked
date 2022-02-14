
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qlcnic_adapter {scalar_t__ max_sds_rings; scalar_t__ max_tx_rings; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 if (VAR_2 == 0 || VAR_3 == 0)
  return -VAR_0;

 if (VAR_2 != 0) {
  if (VAR_2 > VAR_1->max_sds_rings) {
   FUNC_0(VAR_1->netdev,
       "Invalid ring count, SDS ring count %d should not be greater than max %d driver sds rings.\n",
       VAR_2, VAR_1->max_sds_rings);
   return -VAR_0;
  }
 }

  if (VAR_3 != 0) {
  if (VAR_3 > VAR_1->max_tx_rings) {
   FUNC_0(VAR_1->netdev,
       "Invalid ring count, Tx ring count %d should not be greater than max %d driver Tx rings.\n",
       VAR_3, VAR_1->max_tx_rings);
   return -VAR_0;
  }
 }

 return 0;
}
