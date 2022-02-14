
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_nvm_info {int sr_words; int blank_nvm_mode; int ver; int eetrack; } ;
struct ice_hw {struct ice_nvm_info nvm; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ice_hw*,int ,char*) ;
 int FUNC_2 (struct ice_hw*,int ,int*) ;
 int FUNC_3 (struct ice_hw*,int ) ;

enum ice_status FUNC_4(struct ice_hw *VAR_12)
{
 struct ice_nvm_info *VAR_13 = &VAR_12->nvm;
 u16 VAR_14, VAR_15;
 enum ice_status VAR_16 = 0;
 u32 VAR_17, VAR_18;
 u8 VAR_19;




 VAR_18 = FUNC_3(VAR_12, VAR_2);
 VAR_19 = (VAR_18 & VAR_3) >> VAR_4;


 VAR_13->sr_words = FUNC_0(VAR_19) * VAR_11;


 VAR_17 = FUNC_3(VAR_12, VAR_0);
 if (VAR_17 & VAR_1) {
  VAR_13->blank_nvm_mode = 0;
 } else {
  VAR_13->blank_nvm_mode = 1;
  VAR_16 = VAR_7;
  FUNC_1(VAR_12, VAR_6,
     "NVM init error: unsupported blank mode.\n");
  return VAR_16;
 }

 VAR_16 = FUNC_2(VAR_12, VAR_8, &VAR_12->nvm.ver);
 if (VAR_16) {
  FUNC_1(VAR_12, VAR_5,
     "Failed to read DEV starter version.\n");
  return VAR_16;
 }

 VAR_16 = FUNC_2(VAR_12, VAR_10, &VAR_14);
 if (VAR_16) {
  FUNC_1(VAR_12, VAR_5, "Failed to read EETRACK lo.\n");
  return VAR_16;
 }
 VAR_16 = FUNC_2(VAR_12, VAR_9, &VAR_15);
 if (VAR_16) {
  FUNC_1(VAR_12, VAR_5, "Failed to read EETRACK hi.\n");
  return VAR_16;
 }

 VAR_12->nvm.eetrack = (VAR_15 << 16) | VAR_14;

 return VAR_16;
}
