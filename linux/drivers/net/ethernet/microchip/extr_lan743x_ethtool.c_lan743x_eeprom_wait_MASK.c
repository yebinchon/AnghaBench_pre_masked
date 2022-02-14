
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct lan743x_adapter *VAR_7)
{
 unsigned long VAR_8 = VAR_6;
 u32 VAR_9;

 do {
  VAR_9 = FUNC_0(VAR_7, VAR_0);

  if (!(VAR_9 & VAR_1) ||
      (VAR_9 & VAR_2))
   break;
  FUNC_3(40, 100);
 } while (!FUNC_2(VAR_6, VAR_8 + VAR_4));

 if (VAR_9 & (VAR_2 | VAR_1)) {
  FUNC_1(VAR_7, VAR_5, VAR_7->netdev,
      "EEPROM read operation timeout\n");
  return -VAR_3;
 }

 return 0;
}
