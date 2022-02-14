
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,int ,int*) ;
 int FUNC_1 (struct ath10k*,int ,int) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_12)
{
 u32 VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_12, VAR_7,
     VAR_6);
 if (VAR_14) {
  FUNC_2(VAR_12, "settings HTC version failed\n");
  return VAR_14;
 }


 VAR_14 = FUNC_0(VAR_12, VAR_11, &VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_12, "setting firmware mode (1/2) failed\n");
  return VAR_14;
 }



 VAR_13 |= (1 << VAR_5);


 VAR_13 |= (VAR_1 << VAR_2);

 VAR_13 |= (1 << VAR_4);

 VAR_13 |= (0 << VAR_0);

 VAR_13 |= (0 << VAR_3);

 VAR_14 = FUNC_1(VAR_12, VAR_11, VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_12, "setting firmware mode (2/2) failed\n");
  return VAR_14;
 }


 VAR_14 = FUNC_1(VAR_12, VAR_8, 0);
 if (VAR_14) {
  FUNC_2(VAR_12, "setting host CPU BE mode failed\n");
  return VAR_14;
 }


 VAR_14 = FUNC_1(VAR_12, VAR_9, 0);

 if (VAR_14) {
  FUNC_2(VAR_12, "setting FW data/desc swap flags failed\n");
  return VAR_14;
 }





 VAR_14 = FUNC_1(VAR_12, VAR_10,
     VAR_12->dev_id);
 if (VAR_14) {
  FUNC_2(VAR_12, "failed to set pwr_mgmt_params: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
