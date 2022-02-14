
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,void*,size_t) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2, u32 VAR_3, void *VAR_4,
         size_t VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_2, "failed to set mbox window read address: %d", VAR_6);
  return VAR_6;
 }


 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_2, "failed to read from mbox window data address: %d\n",
       VAR_6);
  return VAR_6;
 }

 return 0;
}
