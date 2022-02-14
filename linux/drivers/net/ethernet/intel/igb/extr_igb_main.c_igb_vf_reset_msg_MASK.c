
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {TYPE_1__* vf_data; struct e1000_hw hw; } ;
struct TYPE_2__ {unsigned char* vf_mac_addresses; int flags; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct igb_adapter*,size_t,unsigned char*) ;
 int FUNC_2 (struct igb_adapter*,size_t) ;
 int FUNC_3 (struct e1000_hw*,size_t*,int,size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *,unsigned char*,int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,size_t) ;

__attribute__((used)) static void FUNC_8(struct igb_adapter *VAR_7, u32 VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_7->hw;
 unsigned char *VAR_10 = VAR_7->vf_data[VAR_8].vf_mac_addresses;
 u32 VAR_11, VAR_12[3];
 u8 *VAR_13 = (u8 *)(&VAR_12[1]);


 FUNC_2(VAR_7, VAR_8);


 FUNC_1(VAR_7, VAR_8, VAR_10);


 VAR_11 = FUNC_6(VAR_1);
 FUNC_7(VAR_1, VAR_11 | FUNC_0(VAR_8));
 VAR_11 = FUNC_6(VAR_0);
 FUNC_7(VAR_0, VAR_11 | FUNC_0(VAR_8));

 VAR_7->vf_data[VAR_8].flags |= VAR_6;


 if (!FUNC_4(VAR_10)) {
  VAR_12[0] = VAR_2 | VAR_3;
  FUNC_5(VAR_13, VAR_10, VAR_5);
 } else {
  VAR_12[0] = VAR_2 | VAR_4;
 }
 FUNC_3(VAR_9, VAR_12, 3, VAR_8);
}
