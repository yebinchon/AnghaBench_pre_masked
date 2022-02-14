
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*,int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct iwl_trans *VAR_0)
{
 u16 VAR_1 = 0;
 __le16 VAR_2;
 bool VAR_3 = 0;


 if (!FUNC_1(VAR_0, VAR_1, &VAR_2)) {
  if (!VAR_2) {
   FUNC_0(VAR_0, "OTP is empty\n");
   VAR_3 = 1;
  }
 } else {
  FUNC_0(VAR_0, "Unable to read first block of OTP list.\n");
  VAR_3 = 1;
 }

 return VAR_3;
}
