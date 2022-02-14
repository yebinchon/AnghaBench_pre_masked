
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,void const*,int) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2, u32 VAR_3,
       const void *VAR_4, int VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_2,
       "failed to write 0x%p to mbox window data address: %d\n",
       VAR_4, VAR_6);
  return VAR_6;
 }


 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_2, "failed to set mbox window write address: %d", VAR_6);
  return VAR_6;
 }

 return 0;
}
