
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct brcms_phy {int tbl_save_id; int tbl_save_offset; int tbl_data_lo; int tbl_data_hi; int tbl_addr; TYPE_1__* sh; } ;
struct TYPE_2__ {scalar_t__ chip; int chiprev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int ) ;
 int FUNC_1 (struct brcms_phy*,int ,int) ;

void FUNC_2(struct brcms_phy *VAR_2, uint VAR_3, u32 VAR_4)
{
 if ((VAR_2->sh->chip == VAR_0) &&
     (VAR_2->sh->chiprev == 1) &&
     (VAR_2->tbl_save_id == VAR_1)) {
  FUNC_0(VAR_2, VAR_2->tbl_data_lo);

  FUNC_1(VAR_2, VAR_2->tbl_addr,
         (VAR_2->tbl_save_id << 10) | VAR_2->tbl_save_offset);
  VAR_2->tbl_save_offset++;
 }

 if (VAR_3 == 32) {
  FUNC_1(VAR_2, VAR_2->tbl_data_hi, (u16) (VAR_4 >> 16));
  FUNC_1(VAR_2, VAR_2->tbl_data_lo, (u16) VAR_4);
 } else {
  FUNC_1(VAR_2, VAR_2->tbl_data_lo, (u16) VAR_4);
 }
}
