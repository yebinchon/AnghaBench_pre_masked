
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {void* nr_regions; } ;
struct TYPE_3__ {void* nr_windows; } ;
struct iproc_pcie {int type; int has_apb_err_disable; int iproc_cfg_read; int need_msi_steer; int ep_is_internal; int rej_unconfig_pf; scalar_t__* reg_offsets; void* ib_map; TYPE_2__ ib; TYPE_1__ ob; void* ob_map; int need_ob_cfg; struct device* dev; } ;
struct device {int dummy; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;





 scalar_t__ const VAR_5 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 scalar_t__* FUNC_3 (struct device*,unsigned int,int,int ) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static int FUNC_4(struct iproc_pcie *VAR_14)
{
 struct device *VAR_15 = VAR_14->dev;
 unsigned int VAR_16;
 const u16 *VAR_17;

 switch (VAR_14->type) {
 case 131:
  VAR_17 = VAR_7;
  break;
 case 132:
  VAR_17 = VAR_6;
  VAR_14->has_apb_err_disable = 1;
  if (VAR_14->need_ob_cfg) {
   VAR_14->ob_map = VAR_11;
   VAR_14->ob.nr_windows = FUNC_0(VAR_11);
  }
  break;
 case 130:
  VAR_17 = VAR_8;
  VAR_14->iproc_cfg_read = 1;
  VAR_14->has_apb_err_disable = 1;
  if (VAR_14->need_ob_cfg) {
   VAR_14->ob_map = VAR_13;
   VAR_14->ob.nr_windows = FUNC_0(VAR_13);
  }
  VAR_14->ib.nr_regions = FUNC_0(VAR_12);
  VAR_14->ib_map = VAR_12;
  VAR_14->need_msi_steer = 1;
  FUNC_2(VAR_15, "reads of config registers that contain %#x return incorrect data\n",
    VAR_0);
  break;
 case 129:
  VAR_17 = VAR_9;
  VAR_14->ep_is_internal = 1;
  VAR_14->iproc_cfg_read = 1;
  VAR_14->rej_unconfig_pf = 1;
  break;
 case 128:
  VAR_17 = VAR_10;
  VAR_14->ep_is_internal = 1;
  VAR_14->iproc_cfg_read = 1;
  VAR_14->rej_unconfig_pf = 1;
  VAR_14->need_msi_steer = 1;
  break;
 default:
  FUNC_1(VAR_15, "incompatible iProc PCIe interface\n");
  return -VAR_1;
 }

 VAR_14->reg_offsets = FUNC_3(VAR_15, VAR_4,
      sizeof(*VAR_14->reg_offsets),
      VAR_3);
 if (!VAR_14->reg_offsets)
  return -VAR_2;


 VAR_14->reg_offsets[0] = (VAR_14->type == 128) ?
  VAR_5 : VAR_17[0];
 for (VAR_16 = 1; VAR_16 < VAR_4; VAR_16++)
  VAR_14->reg_offsets[VAR_16] = VAR_17[VAR_16] ?
   VAR_17[VAR_16] : VAR_5;

 return 0;
}
