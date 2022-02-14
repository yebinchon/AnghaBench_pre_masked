
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,int*) ;
 int FUNC_1 (struct ath10k*,char*,...) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = VAR_3 + VAR_0;
 VAR_6 = 0;

 while ((FUNC_2(VAR_3, VAR_5)) && !VAR_6) {
  VAR_7 = FUNC_0(VAR_4,
      VAR_2,
      &VAR_6);
  if (VAR_7) {
   FUNC_1(VAR_4, "unable to read RX_LOOKAHEAD_VALID: %d\n", VAR_7);
   return VAR_7;
  }


  VAR_6 &= 1;
 }

 if (!VAR_6) {
  FUNC_1(VAR_4, "bmi_recv_buf FIFO empty\n");
  return -VAR_1;
 }

 return VAR_7;
}
