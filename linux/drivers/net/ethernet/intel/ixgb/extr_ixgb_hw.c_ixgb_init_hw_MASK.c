
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgb_hw {int adapter_stopped; int curr_mac_addr; int phy_type; int device_id; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ixgb_hw*,int ,int ) ;
 int FUNC_2 (struct ixgb_hw*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct ixgb_hw*,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct ixgb_hw*) ;
 int FUNC_5 (struct ixgb_hw*) ;
 int FUNC_6 (struct ixgb_hw*) ;
 int FUNC_7 (struct ixgb_hw*) ;
 int FUNC_8 (struct ixgb_hw*) ;
 int FUNC_9 (struct ixgb_hw*) ;
 int FUNC_10 (struct ixgb_hw*) ;
 int FUNC_11 (struct ixgb_hw*) ;
 scalar_t__ FUNC_12 (struct ixgb_hw*) ;
 int FUNC_13 (struct ixgb_hw*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;

bool
FUNC_17(struct ixgb_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 bool VAR_8;

 FUNC_0();






 FUNC_16("Issuing a global reset to MAC\n");

 VAR_7 = FUNC_12(VAR_5);

 FUNC_16("Issuing an EE reset to MAC\n");




 FUNC_1(VAR_5, VAR_0, VAR_1);



 FUNC_15(VAR_2);

 if (!FUNC_9(VAR_5))
  return 0;


 VAR_5->device_id = FUNC_8(VAR_5);
 VAR_5->phy_type = FUNC_10(VAR_5);




 FUNC_11(VAR_5);





 if (!FUNC_14(VAR_5->curr_mac_addr)) {
  FUNC_16("MAC address invalid after ixgb_init_rx_addrs\n");
  return(0);
 }


 VAR_5->adapter_stopped = 0;


 FUNC_7(VAR_5);


 FUNC_16("Zeroing the MTA\n");
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_2(VAR_5, VAR_4, VAR_6, 0);


 FUNC_6(VAR_5);


 FUNC_5(VAR_5);


 VAR_8 = FUNC_13(VAR_5);


 FUNC_4(VAR_5);

 return VAR_8;
}
