
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nandc_regs {int read_location3; int read_location2; int read_location1; int read_location0; int ecc_buf_cfg; int orig_vld; int vld; int orig_cmd1; int cmd1; int clrreadstatus; int ecc_bch_cfg; int cfg1; int cfg0; int clrflashstatus; int exec; int chip_sel; int addr1; int addr0; int cmd; } ;
typedef int __le32 ;
__attribute__((used)) static __le32 *FUNC_0(struct nandc_regs *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 134:
  return &VAR_0->cmd;
 case 146:
  return &VAR_0->addr0;
 case 145:
  return &VAR_0->addr1;
 case 135:
  return &VAR_0->chip_sel;
 case 136:
  return &VAR_0->exec;
 case 133:
  return &VAR_0->clrflashstatus;
 case 144:
  return &VAR_0->cfg0;
 case 143:
  return &VAR_0->cfg1;
 case 142:
  return &VAR_0->ecc_bch_cfg;
 case 128:
  return &VAR_0->clrreadstatus;
 case 141:
  return &VAR_0->cmd1;
 case 140:
  return &VAR_0->orig_cmd1;
 case 139:
  return &VAR_0->vld;
 case 138:
  return &VAR_0->orig_vld;
 case 137:
  return &VAR_0->ecc_buf_cfg;
 case 132:
  return &VAR_0->read_location0;
 case 131:
  return &VAR_0->read_location1;
 case 130:
  return &VAR_0->read_location2;
 case 129:
  return &VAR_0->read_location3;
 default:
  return ((void*)0);
 }
}
