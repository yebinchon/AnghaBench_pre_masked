
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_trans {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwl_trans*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,int ,int ,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_trans *VAR_8, u16 VAR_9,
        __le16 *VAR_10)
{
 int VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;

 FUNC_5(VAR_8, VAR_0,
      VAR_1 & (VAR_9 << 1));
 VAR_11 = FUNC_2(VAR_8, VAR_0,
     VAR_2,
     VAR_2,
     VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8, "Time out reading OTP[%d]\n", VAR_9);
  return VAR_11;
 }
 VAR_12 = FUNC_3(VAR_8, VAR_0);

 VAR_13 = FUNC_3(VAR_8, VAR_3);
 if (VAR_13 & VAR_5) {


  FUNC_4(VAR_8, VAR_3,
       VAR_5);
  FUNC_0(VAR_8, "Uncorrectable OTP ECC error, abort OTP read\n");
  return -VAR_6;
 }
 if (VAR_13 & VAR_4) {


  FUNC_4(VAR_8, VAR_3,
       VAR_4);
  FUNC_0(VAR_8, "Correctable OTP ECC error, continue read\n");
 }
 *VAR_10 = FUNC_1(VAR_12 >> 16);
 return 0;
}
