
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct qlcnic_hardware_context {scalar_t__ beacon_state; } ;
struct qlcnic_adapter {int drv_sds_rings; int state; int netdev; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct qlcnic_adapter *VAR_8,
        const char *VAR_9, size_t VAR_10)
{
 struct qlcnic_hardware_context *VAR_11 = VAR_8->ahw;
 int VAR_12, VAR_13 = VAR_8->drv_sds_rings;
 u16 VAR_14;
 u8 VAR_15, VAR_16;

 if (VAR_10 != sizeof(u16))
  return -VAR_1;

 FUNC_1(&VAR_14, VAR_9, sizeof(u16));
 VAR_12 = FUNC_6(VAR_8, VAR_14, &VAR_15, &VAR_16);
 if (VAR_12)
  return VAR_12;

 FUNC_5(VAR_8);

 if (VAR_11->beacon_state == VAR_15)
  return VAR_10;

 FUNC_7();
 if (!VAR_11->beacon_state) {
  if (FUNC_11(VAR_6, &VAR_8->state)) {
   FUNC_8();
   return -VAR_0;
  }
 }

 if (FUNC_12(VAR_7, &VAR_8->state)) {
  VAR_12 = -VAR_2;
  goto out;
 }

 if (!FUNC_12(VAR_4, &VAR_8->state)) {
  VAR_12 = FUNC_3(VAR_8->netdev, VAR_3);
  if (VAR_12)
   goto out;
  FUNC_9(VAR_5, &VAR_8->state);
 }

 VAR_12 = FUNC_2(VAR_8, VAR_15, VAR_16);
 if (!VAR_12) {
  VAR_12 = VAR_10;
  VAR_11->beacon_state = VAR_15;
 }

 if (FUNC_10(VAR_5, &VAR_8->state))
  FUNC_4(VAR_8->netdev, VAR_13);

out:
 if (!VAR_11->beacon_state)
  FUNC_0(VAR_6, &VAR_8->state);
 FUNC_8();

 return VAR_12;
}
