
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct lan743x_adapter *VAR_6)
{
 unsigned long VAR_7 = VAR_5;
 u32 VAR_8;

 do {
  VAR_8 = FUNC_0(VAR_6, VAR_0);

  if (!(VAR_8 & VAR_1))
   return 0;

  FUNC_3(40, 100);
 } while (!FUNC_2(VAR_5, VAR_7 + VAR_3));

 FUNC_1(VAR_6, VAR_4, VAR_6->netdev, "EEPROM is busy\n");
 return -VAR_2;
}
