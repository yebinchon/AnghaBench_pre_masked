
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath6kl {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ath6kl*,int ,int ) ;

int FUNC_2(struct ath6kl *VAR_0, u32 VAR_1, __le32 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0("failed to write 0x%x during diagnose window to 0x%x\n",
      VAR_1, VAR_2);
  return VAR_3;
 }

 return 0;
}
