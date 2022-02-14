
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,int ,int ,void*,int ) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,void*,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2,
           void *VAR_3, u32 VAR_4,
           void *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 if (VAR_3) {
  VAR_7 = FUNC_1(VAR_2,
       VAR_1,
       0, 0, VAR_3, VAR_4);
  if (VAR_7) {
   FUNC_2(VAR_2,
        "unable to send the bmi data to the device: %d\n",
        VAR_7);
   return VAR_7;
  }
 }

 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_2,
      VAR_0,
      0, 0, VAR_5, *VAR_6);
  if (VAR_7) {
   FUNC_2(VAR_2,
        "Unable to read the bmi data from the device: %d\n",
        VAR_7);
   return VAR_7;
  }
 }

 return 0;
}
