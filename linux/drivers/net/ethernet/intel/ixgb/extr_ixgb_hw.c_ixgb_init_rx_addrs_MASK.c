
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int curr_mac_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ixgb_hw*,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ixgb_hw*,int ) ;
 int FUNC_3 (struct ixgb_hw*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct ixgb_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_0();






 if (!FUNC_4(VAR_2->curr_mac_addr)) {


  FUNC_2(VAR_2, VAR_2->curr_mac_addr);

  FUNC_5("Keeping Permanent MAC Addr = %pM\n",
    VAR_2->curr_mac_addr);
 } else {


  FUNC_5("Overriding MAC Address in RAR[0]\n");
  FUNC_5("New MAC Addr = %pM\n", VAR_2->curr_mac_addr);

  FUNC_3(VAR_2, VAR_2->curr_mac_addr, 0);
 }


 FUNC_5("Clearing RAR[1-15]\n");
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {

  FUNC_1(VAR_2, VAR_1, ((VAR_3 << 1) + 1), 0);
  FUNC_1(VAR_2, VAR_1, (VAR_3 << 1), 0);
 }
}
