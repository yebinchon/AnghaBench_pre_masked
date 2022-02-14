
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1c_hw {scalar_t__ nic_type; scalar_t__ msi_lnkpatch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct atl1c_hw*,int ,int ,scalar_t__*) ;
 int FUNC_2 (struct atl1c_hw*,int ,scalar_t__) ;

void FUNC_3(struct atl1c_hw *VAR_19, u16 VAR_20)
{
 u16 VAR_21;
 bool VAR_22 = 0;

 if (VAR_19->nic_type == VAR_17 || VAR_19->nic_type == VAR_18 ||
     VAR_19->nic_type == VAR_15 || VAR_19->nic_type == VAR_16)
  VAR_22 = 1;

 if (VAR_20 != VAR_12) {

  if (VAR_19->nic_type == VAR_16) {
   FUNC_1(VAR_19, VAR_11, VAR_10,
    &VAR_21);
   VAR_21 = FUNC_0(VAR_21, VAR_2);
   VAR_21 = VAR_21 > VAR_3 ?
    VAR_1 : VAR_0;
   FUNC_2(VAR_19, VAR_7, VAR_21);
  }

  if (VAR_22 && VAR_20 == VAR_13 && VAR_19->msi_lnkpatch) {
   FUNC_2(VAR_19, VAR_8, VAR_5);
   FUNC_2(VAR_19, VAR_9,
    VAR_6);
  }
 } else {
  if (VAR_22 && VAR_19->msi_lnkpatch) {
   FUNC_2(VAR_19, VAR_9,
    VAR_14);
   FUNC_2(VAR_19, VAR_8,
    VAR_4);
  }
 }
}
