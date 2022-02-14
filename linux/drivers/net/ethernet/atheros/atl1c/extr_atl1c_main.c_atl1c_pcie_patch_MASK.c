
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {scalar_t__ nic_type; scalar_t__ revision_id; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_3(struct atl1c_hw *VAR_21)
{
 u32 VAR_22, VAR_23;


 FUNC_0(VAR_21, VAR_13, &VAR_22);
 VAR_22 &= ~VAR_5;
 FUNC_1(VAR_21, VAR_13, VAR_22);


 if (VAR_21->nic_type == VAR_17 || VAR_21->nic_type == VAR_19) {
  FUNC_0(VAR_21, VAR_14, &VAR_23);
  VAR_23 |= VAR_9;
  FUNC_1(VAR_21, VAR_14, VAR_23);
 } else {
  if (!(VAR_22 & VAR_6))
   FUNC_1(VAR_21, VAR_13,
    VAR_22 | VAR_6);
 }

 if (VAR_21->nic_type == VAR_20 && VAR_21->revision_id == VAR_3) {
  FUNC_0(VAR_21, VAR_15, &VAR_23);
  VAR_23 = FUNC_2(VAR_23, VAR_7,
   VAR_1);
  VAR_23 = FUNC_2(VAR_23, VAR_8,
   VAR_2);
  FUNC_1(VAR_21, VAR_15, VAR_23);

  FUNC_0(VAR_21, VAR_12, &VAR_23);
  VAR_23 |= VAR_4;
  FUNC_1(VAR_21, VAR_12, VAR_23);
 }

 if (VAR_21->nic_type == VAR_20 || VAR_21->nic_type == VAR_18) {
  FUNC_0(VAR_21, VAR_16, &VAR_23);
  VAR_23 |= VAR_10;
  FUNC_1(VAR_21, VAR_16, VAR_23);

  FUNC_0(VAR_21, VAR_11, &VAR_23);
  FUNC_1(VAR_21, VAR_11, VAR_23 & ~VAR_0);
 }
}
