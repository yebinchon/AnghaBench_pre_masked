
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct smsc911x_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct smsc911x_data *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_4);

 for (VAR_5 = 0; VAR_5 < 40; VAR_5++) {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
  if (!(VAR_6 & VAR_2))
   return 0;
 }
 FUNC_1(VAR_4, VAR_3, "Timed out waiting for MAC not BUSY. "
    "MAC_CSR_CMD: 0x%08X", VAR_6);
 return -VAR_0;
}
