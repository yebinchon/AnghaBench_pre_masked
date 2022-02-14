
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpp; int fourcc; void* dctrl_dview; void* dcfg_imode; void* rlp_cfg_mode; } ;
struct isc_device {TYPE_1__ try_config; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
__attribute__((used)) static int FUNC_0(struct isc_device *VAR_17, bool VAR_18)
{
 if (VAR_18) {
  VAR_17->try_config.rlp_cfg_mode = VAR_13;
  VAR_17->try_config.dcfg_imode = VAR_3;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  return 0;
 }

 switch (VAR_17->try_config.fourcc) {
 case 141:
 case 138:
 case 135:
 case 132:
  VAR_17->try_config.rlp_cfg_mode = VAR_13;
  VAR_17->try_config.dcfg_imode = VAR_3;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 8;
  break;
 case 143:
 case 140:
 case 137:
 case 134:
  VAR_17->try_config.rlp_cfg_mode = VAR_11;
  VAR_17->try_config.dcfg_imode = VAR_1;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 142:
 case 139:
 case 136:
 case 133:
  VAR_17->try_config.rlp_cfg_mode = VAR_12;
  VAR_17->try_config.dcfg_imode = VAR_1;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 144:
  VAR_17->try_config.rlp_cfg_mode = VAR_15;
  VAR_17->try_config.dcfg_imode = VAR_1;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 147:
  VAR_17->try_config.rlp_cfg_mode = VAR_9;
  VAR_17->try_config.dcfg_imode = VAR_1;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 146:
  VAR_17->try_config.rlp_cfg_mode = VAR_10;
  VAR_17->try_config.dcfg_imode = VAR_1;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 148:
 case 131:
  VAR_17->try_config.rlp_cfg_mode = VAR_8;
  VAR_17->try_config.dcfg_imode = VAR_2;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 32;
  break;
 case 130:
  VAR_17->try_config.rlp_cfg_mode = VAR_16;
  VAR_17->try_config.dcfg_imode = VAR_4;
  VAR_17->try_config.dctrl_dview = VAR_7;
  VAR_17->try_config.bpp = 12;
  break;
 case 129:
  VAR_17->try_config.rlp_cfg_mode = VAR_16;
  VAR_17->try_config.dcfg_imode = VAR_5;
  VAR_17->try_config.dctrl_dview = VAR_7;
  VAR_17->try_config.bpp = 16;
  break;
 case 128:
  VAR_17->try_config.rlp_cfg_mode = VAR_16;
  VAR_17->try_config.dcfg_imode = VAR_2;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 16;
  break;
 case 145:
  VAR_17->try_config.rlp_cfg_mode = VAR_14;
  VAR_17->try_config.dcfg_imode = VAR_3;
  VAR_17->try_config.dctrl_dview = VAR_6;
  VAR_17->try_config.bpp = 8;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
