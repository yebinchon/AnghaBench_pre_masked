
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct atl1c_hw {scalar_t__ nic_type; scalar_t__ hibernate; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct atl1c_hw*,scalar_t__) ;
 int FUNC_5 (struct atl1c_hw*) ;
 int FUNC_6 (struct atl1c_hw*) ;

int FUNC_7(struct atl1c_hw *VAR_15, bool VAR_16, u8 VAR_17,
   u16 VAR_18, u16 *VAR_19)
{
 u32 VAR_20;
 u16 VAR_21 = VAR_1;

 FUNC_5(VAR_15);

 *VAR_19 = 0;


 if ((VAR_15->nic_type == VAR_14 || VAR_15->nic_type == VAR_13) &&
  VAR_15->hibernate)
  VAR_21 = VAR_0;
 if (VAR_16) {
  VAR_20 = FUNC_2(VAR_9, VAR_17) | FUNC_2(VAR_10, VAR_18);
  FUNC_1(VAR_15, VAR_12, VAR_20);
  VAR_20 = VAR_7 |
   FUNC_2(VAR_2, VAR_21) |
   VAR_8 |
   VAR_4 |
   VAR_5;
 } else {
  VAR_20 = VAR_7 |
   FUNC_2(VAR_2, VAR_21) |
   FUNC_2(VAR_6, VAR_18) |
   VAR_8 |
   VAR_5;
 }
 FUNC_1(VAR_15, VAR_11, VAR_20);

 if (!FUNC_6(VAR_15))
  return -1;

 FUNC_0(VAR_15, VAR_11, &VAR_20);
 *VAR_19 = (u16)FUNC_3(VAR_20, VAR_3);

 FUNC_4(VAR_15, VAR_21);

 return 0;
}
