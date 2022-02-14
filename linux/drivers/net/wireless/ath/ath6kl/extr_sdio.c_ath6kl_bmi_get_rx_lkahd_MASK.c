
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl {int dummy; } ;
typedef int rx_word ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ath6kl*,int ,int *,int,int ) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8 = 0;
 int VAR_9 = 0;

 VAR_7 = VAR_5 + FUNC_2(VAR_0);
 while ((FUNC_3(VAR_5, VAR_7)) && !VAR_8) {
  VAR_9 = FUNC_1(VAR_6,
     VAR_4,
     (u8 *)&VAR_8, sizeof(VAR_8),
     VAR_3);
  if (VAR_9) {
   FUNC_0("unable to read RX_LOOKAHEAD_VALID\n");
   return VAR_9;
  }


  VAR_8 &= (1 << VAR_2);
 }

 if (!VAR_8) {
  FUNC_0("bmi_recv_buf FIFO empty\n");
  return -VAR_1;
 }

 return VAR_9;
}
