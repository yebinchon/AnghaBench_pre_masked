
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,int *) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to read fifo/chip control register: %d\n",
       VAR_6);
  return VAR_6;
 }

 if (VAR_4)
  VAR_5 &= VAR_1;
 else
  VAR_5 |= VAR_2;

 VAR_6 = FUNC_1(VAR_3, VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to write to FIFO_TIMEOUT_AND_CHIP_CONTROL: %d",
       VAR_6);
  return VAR_6;
 }

 return 0;
}
