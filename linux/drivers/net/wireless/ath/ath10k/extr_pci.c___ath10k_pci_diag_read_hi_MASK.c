
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,int ,int *) ;
 int FUNC_1 (struct ath10k*,int ,void*,int ) ;
 int FUNC_2 (struct ath10k*,char*,int ,int,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_0, void *VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2);

 VAR_6 = FUNC_0(VAR_0, VAR_4, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_2(VAR_0, "failed to get memcpy hi address for firmware address %d: %d\n",
       VAR_2, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_1, VAR_3);
 if (VAR_6 != 0) {
  FUNC_2(VAR_0, "failed to memcpy firmware memory from %d (%d B): %d\n",
       VAR_5, VAR_3, VAR_6);
  return VAR_6;
 }

 return 0;
}
