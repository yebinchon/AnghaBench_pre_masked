
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int netdev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lan743x_adapter *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_5 + VAR_1;
 do {
  if (FUNC_2(VAR_5, VAR_7)) {
   FUNC_1(VAR_6, VAR_4, VAR_6->netdev,
       "Timeout on OTP_STATUS completion\n");
   return -VAR_0;
  }
  FUNC_3(1);
  VAR_8 = FUNC_0(VAR_6, VAR_2);
 } while (VAR_8 & VAR_3);

 return 0;
}
