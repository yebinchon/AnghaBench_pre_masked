
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_ale_params {int ale_ageout; int major_ver_mask; int ale_entries; int ale_ports; scalar_t__ nu_switch_ale; int dev; scalar_t__ ale_regs; } ;
struct cpsw_ale {int ageout; int version; struct cpsw_ale_params params; int vlan_field_bits; int port_num_bits; int port_mask_bits; } ;
struct TYPE_2__ {int offset; scalar_t__ shift; int bits; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_2 (int ,char*,int,...) ;
 struct cpsw_ale* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

struct cpsw_ale *FUNC_6(struct cpsw_ale_params *VAR_16)
{
 struct cpsw_ale *VAR_17;
 u32 VAR_18, VAR_19;

 VAR_17 = FUNC_3(VAR_16->dev, sizeof(*VAR_17), VAR_13);
 if (!VAR_17)
  return ((void*)0);

 VAR_17->params = *VAR_16;
 VAR_17->ageout = VAR_17->params.ale_ageout * VAR_14;

 VAR_18 = FUNC_5(VAR_17->params.ale_regs + VAR_0);
 if (!VAR_17->params.major_ver_mask)
  VAR_17->params.major_ver_mask = 0xff;
 VAR_17->version =
  (FUNC_0(VAR_18, VAR_17->params.major_ver_mask) << 8) |
   FUNC_1(VAR_18);
 FUNC_2(VAR_17->params.dev, "initialized cpsw ale version %d.%d\n",
   FUNC_0(VAR_18, VAR_17->params.major_ver_mask),
   FUNC_1(VAR_18));

 if (!VAR_17->params.ale_entries) {
  VAR_19 =
   FUNC_5(VAR_17->params.ale_regs + VAR_5) &
   VAR_6;
  if (!VAR_19)
   VAR_19 = VAR_7;
  else
   VAR_19 *= VAR_8;
  VAR_17->params.ale_entries = VAR_19;
 }
 FUNC_2(VAR_17->params.dev,
   "ALE Table size %ld\n", VAR_17->params.ale_entries);


 VAR_17->port_mask_bits = VAR_17->params.ale_ports;
 VAR_17->port_num_bits = FUNC_4(VAR_17->params.ale_ports);
 VAR_17->vlan_field_bits = VAR_17->params.ale_ports;




 if (VAR_17->params.nu_switch_ale) {




  VAR_15[VAR_3].bits =
     VAR_17->params.ale_ports;
  VAR_15[VAR_3].offset =
     VAR_10;
  VAR_15[VAR_1].bits =
     VAR_17->params.ale_ports;
  VAR_15[VAR_1].shift = 0;
  VAR_15[VAR_1].offset =
     VAR_12;
  VAR_15[VAR_2].bits =
     VAR_17->params.ale_ports;
  VAR_15[VAR_2].shift = 0;
  VAR_15[VAR_2].offset =
     VAR_11;
  VAR_15[VAR_4].bits =
     VAR_17->params.ale_ports;
  VAR_15[VAR_4].shift = 0;
  VAR_15[VAR_4].offset =
     VAR_9;
 }

 return VAR_17;
}
