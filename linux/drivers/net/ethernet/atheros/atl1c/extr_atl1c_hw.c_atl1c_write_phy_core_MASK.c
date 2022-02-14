
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct atl1c_hw {scalar_t__ nic_type; scalar_t__ hibernate; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (struct atl1c_hw*,int ) ;
 int FUNC_3 (struct atl1c_hw*) ;
 int FUNC_4 (struct atl1c_hw*) ;

int FUNC_5(struct atl1c_hw *VAR_14, bool VAR_15, u8 VAR_16,
   u16 VAR_17, u16 VAR_18)
{
 u32 VAR_19;
 u16 VAR_20 = VAR_1;

 FUNC_3(VAR_14);



 if ((VAR_14->nic_type == VAR_13 || VAR_14->nic_type == VAR_12) &&
  VAR_14->hibernate)
  VAR_20 = VAR_0;

 if (VAR_15) {
  VAR_19 = FUNC_1(VAR_8, VAR_16) | FUNC_1(VAR_9, VAR_17);
  FUNC_0(VAR_14, VAR_11, VAR_19);
  VAR_19 = VAR_6 |
   FUNC_1(VAR_2, VAR_20) |
   FUNC_1(VAR_3, VAR_18) |
   VAR_7 |
   VAR_4;
 } else {
  VAR_19 = VAR_6 |
   FUNC_1(VAR_2, VAR_20) |
   FUNC_1(VAR_3, VAR_18) |
   FUNC_1(VAR_5, VAR_17) |
   VAR_7;
 }
 FUNC_0(VAR_14, VAR_10, VAR_19);

 if (!FUNC_4(VAR_14))
  return -1;

 FUNC_2(VAR_14, VAR_20);

 return 0;
}
