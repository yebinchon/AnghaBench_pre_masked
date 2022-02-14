
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath10k*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,scalar_t__,int ) ;
 int FUNC_2 (struct ath10k*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_1(VAR_3, VAR_2 +
      VAR_1, VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_2 +
    VAR_1);
 if (VAR_5 != VAR_4) {
  FUNC_2(VAR_3, "failed to set RAM config from 0x%x to 0x%x\n",
       VAR_5, VAR_4);
  return -VAR_0;
 }

 return 0;
}
