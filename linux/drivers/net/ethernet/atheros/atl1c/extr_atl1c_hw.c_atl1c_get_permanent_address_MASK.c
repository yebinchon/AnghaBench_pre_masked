
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct atl1c_hw {scalar_t__ nic_type; int perm_mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_hw*,int ,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct atl1c_hw*) ;
 int FUNC_2 (struct atl1c_hw*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (struct atl1c_hw*) ;
 scalar_t__ FUNC_4 (struct atl1c_hw*,int ) ;
 int FUNC_5 (struct atl1c_hw*,int ,int *) ;
 int FUNC_6 (struct atl1c_hw*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct atl1c_hw *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u16 VAR_17;
 bool VAR_18 = 0;


 if (FUNC_4(VAR_13, VAR_13->perm_mac_addr))
  return 0;


 FUNC_0(VAR_13, VAR_5, &VAR_15);
 if (FUNC_3(VAR_13)) {
  if (VAR_13->nic_type == VAR_9 || VAR_13->nic_type == VAR_10) {

   if (!(VAR_15 & VAR_4)) {
    VAR_15 |= VAR_4;
    FUNC_2(VAR_13, VAR_5, VAR_15);
    FUNC_1(VAR_13);
    FUNC_7(1);
   }
  }

  if (VAR_13->nic_type == VAR_11 || VAR_13->nic_type == VAR_12) {
   FUNC_5(VAR_13, VAR_2, &VAR_17);
   VAR_17 &= ~VAR_0;
   FUNC_6(VAR_13, VAR_2, VAR_17);
   FUNC_5(VAR_13, VAR_3, &VAR_17);
   VAR_17 |= VAR_8;
   FUNC_6(VAR_13, VAR_3, VAR_17);
   FUNC_8(20);
   VAR_18 = 1;
  }

  FUNC_0(VAR_13, VAR_6, &VAR_16);
  VAR_16 |= VAR_7;
  FUNC_2(VAR_13, VAR_6, VAR_16);
  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   FUNC_7(10);
   FUNC_0(VAR_13, VAR_6, &VAR_16);
   if ((VAR_16 & VAR_7) == 0)
    break;
  }
  if (VAR_14 >= VAR_1)
   return -1;
 }

 if ((VAR_13->nic_type == VAR_9 || VAR_13->nic_type == VAR_10)) {
  VAR_15 &= ~VAR_4;
  FUNC_2(VAR_13, VAR_5, VAR_15);
  FUNC_7(1);
 }
 if (VAR_18) {
  FUNC_5(VAR_13, VAR_2, &VAR_17);
  VAR_17 |= VAR_0;
  FUNC_6(VAR_13, VAR_2, VAR_17);
  FUNC_5(VAR_13, VAR_3, &VAR_17);
  VAR_17 &= ~VAR_8;
  FUNC_6(VAR_13, VAR_3, VAR_17);
  FUNC_8(20);
 }

 if (FUNC_4(VAR_13, VAR_13->perm_mac_addr))
  return 0;

 return -1;
}
