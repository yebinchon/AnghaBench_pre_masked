
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (struct smsc911x_data*,int ) ;
 int FUNC_3 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct smsc911x_data *VAR_4, unsigned int VAR_5)
{
 if (FUNC_1(VAR_5 >= 4)) {
  unsigned int VAR_6 = 500;
  unsigned int VAR_7;
  FUNC_3(VAR_4, VAR_1, VAR_2);
  do {
   FUNC_4(1);
   VAR_7 = FUNC_2(VAR_4, VAR_1);
  } while ((VAR_7 & VAR_2) && --VAR_6);

  if (FUNC_5(VAR_6 == 0))
   FUNC_0(VAR_4, VAR_3, "Timed out waiting for "
      "RX FFWD to finish, RX_DP_CTRL: 0x%08X", VAR_7);
 } else {
  unsigned int VAR_8;
  while (VAR_5--)
   VAR_8 = FUNC_2(VAR_4, VAR_0);
 }
}
