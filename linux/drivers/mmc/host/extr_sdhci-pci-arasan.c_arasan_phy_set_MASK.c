
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (struct sdhci_host*,int ,int*) ;
 int FUNC_5 (struct sdhci_host*,int ,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_12, u8 VAR_13, u8 VAR_14,
     u8 VAR_15, u8 VAR_16, u8 VAR_17, u8 VAR_18)
{
 u8 VAR_19;
 int VAR_20;

 if (VAR_13 == VAR_4 || VAR_13 == VAR_5)
  VAR_20 = FUNC_6(VAR_12, 0x0, VAR_10);
 else
  VAR_20 = FUNC_6(VAR_12, VAR_13, VAR_10);
 if (VAR_20)
  return VAR_20;
 if (VAR_13 == VAR_6 || VAR_13 == VAR_5) {
  VAR_20 = FUNC_4(VAR_12, VAR_7, &VAR_19);
  if (VAR_20)
   return VAR_20;
  VAR_20 = FUNC_6(VAR_12, FUNC_1(VAR_19, VAR_15), VAR_7);
  if (VAR_20)
   return VAR_20;
 }
 if (VAR_13 == VAR_9) {
  VAR_20 = FUNC_6(VAR_12, 0x0, VAR_11);
  if (VAR_20)
   return VAR_20;
  VAR_20 = FUNC_6(VAR_12, 0x0, VAR_8);
 } else {
  VAR_20 = FUNC_6(VAR_12, FUNC_3(VAR_14), VAR_11);
  if (VAR_20)
   return VAR_20;
  if (VAR_13 != VAR_5)
   VAR_20 = FUNC_6(VAR_12, FUNC_2(VAR_16), VAR_8);
  else
   VAR_20 = FUNC_6(VAR_12, 0x0, VAR_8);
 }
 if (VAR_20)
  return VAR_20;
 if (VAR_13 != VAR_9) {
  VAR_20 = FUNC_6(VAR_12, VAR_17, VAR_2);
  if (VAR_20)
   return VAR_20;
 }
 VAR_20 = FUNC_6(VAR_12, 0, VAR_1);
 if (VAR_20)
  return VAR_20;
 if (VAR_13 != VAR_9) {
  VAR_20 = FUNC_6(VAR_12, FUNC_0(VAR_18), VAR_1);
  if (VAR_20)
   return VAR_20;
  VAR_20 = FUNC_5(VAR_12, VAR_1, VAR_0);
  if (VAR_20)
   return -VAR_3;
 }
 return 0;
}
