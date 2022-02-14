
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct ddb_port {size_t lnr; char* name; char* type_name; scalar_t__ nr; void* class; TYPE_2__* i2c; scalar_t__ type; struct ddb* dev; } ;
struct TYPE_4__ {int device; } ;
struct ddb_link {TYPE_3__* info; TYPE_1__ ids; } ;
struct ddb {int dev; struct ddb_link* link; } ;
struct TYPE_6__ {scalar_t__ type; int i2c_mask; scalar_t__ mci_ports; int ts_quirks; scalar_t__ mci_type; } ;
struct TYPE_5__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct ddb*,int ,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_28 ;
 int FUNC_2 (struct ddb_port*) ;
 int FUNC_3 (struct ddb_port*) ;
 scalar_t__ FUNC_4 (struct ddb_port*,int*) ;
 scalar_t__ FUNC_5 (struct ddb_port*,int*) ;
 scalar_t__ FUNC_6 (struct ddb_port*) ;
 scalar_t__ FUNC_7 (struct ddb_port*) ;
 scalar_t__ FUNC_8 (struct ddb_port*) ;
 scalar_t__ FUNC_9 (struct ddb_port*) ;
 scalar_t__ FUNC_10 (struct ddb_port*,int*) ;
 scalar_t__ FUNC_11 (struct ddb_port*,int*,int*) ;
 scalar_t__ VAR_29 ;
 char** VAR_30 ;
 char** VAR_31 ;

__attribute__((used)) static void FUNC_12(struct ddb_port *VAR_32)
{
 struct ddb *VAR_33 = VAR_32->dev;
 u32 VAR_34 = VAR_32->lnr;
 struct ddb_link *VAR_35 = &VAR_33->link[VAR_34];
 u8 VAR_36, VAR_37;

 VAR_32->name = "NO MODULE";
 VAR_32->type_name = "NONE";
 VAR_32->class = VAR_8;



 if (VAR_28 && !VAR_32->nr &&
     VAR_35->ids.device == 0x0005) {
  VAR_32->name = "DUMMY";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_10;
  VAR_32->type_name = "DUMMY";
  return;
 }

 if (VAR_32->nr == VAR_29) {
  VAR_32->name = "TS LOOP";
  VAR_32->class = VAR_7;
  return;
 }

 if (VAR_32->nr == 1 && VAR_35->info->type == VAR_3 &&
     VAR_35->info->i2c_mask == 1) {
  VAR_32->name = "NO TAB";
  VAR_32->class = VAR_8;
  return;
 }

 if (VAR_35->info->type == VAR_4) {
  VAR_32->name = "DUAL DVB-S2 MAX";
  VAR_32->type_name = "MXL5XX";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_22;
  if (VAR_32->i2c)
   FUNC_0(VAR_33, VAR_25,
      VAR_32->i2c->regs + VAR_26);
  return;
 }

 if (VAR_35->info->type == VAR_5) {
  if (VAR_32->nr >= VAR_35->info->mci_ports)
   return;
  VAR_32->name = "DUAL MCI";
  VAR_32->type_name = "MCI";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_21 + VAR_35->info->mci_type;
  return;
 }

 if (VAR_32->nr > 1 && VAR_35->info->type == VAR_3) {
  VAR_32->name = "CI internal";
  VAR_32->type_name = "INTERNAL";
  VAR_32->class = VAR_6;
  VAR_32->type = VAR_2;
 }

 if (!VAR_32->i2c)
  return;



 if (FUNC_4(VAR_32, &VAR_36)) {
  if (VAR_36 == 1) {
   VAR_32->name = "CI";
   VAR_32->type_name = "CXD2099";
   VAR_32->class = VAR_6;
   VAR_32->type = VAR_0;
   FUNC_0(VAR_33, VAR_25,
      VAR_32->i2c->regs + VAR_26);
  } else {
   FUNC_1(VAR_33->dev, "Port %d: Uninitialized DuoFlex\n",
     VAR_32->nr);
   return;
  }
 } else if (FUNC_11(VAR_32, &VAR_37, &VAR_36)) {
  FUNC_0(VAR_33, VAR_25, VAR_32->i2c->regs + VAR_26);

  if (VAR_37 == 2) {
   VAR_32->name = "DuoFlex CI";
   VAR_32->class = VAR_6;
   VAR_32->type = VAR_1;
   VAR_32->type_name = "CI_XO2";
   FUNC_3(VAR_32);
   return;
  }
  VAR_36 >>= 2;
  if (VAR_36 > 5) {
   VAR_32->name = "unknown XO2 DuoFlex";
   VAR_32->type_name = "UNKNOWN";
  } else {
   VAR_32->name = VAR_30[VAR_36];
   VAR_32->class = VAR_9;
   VAR_32->type = VAR_23 + VAR_36;
   VAR_32->type_name = VAR_31[VAR_36];
   FUNC_2(VAR_32);
  }
 } else if (FUNC_5(VAR_32, &VAR_36)) {
  switch (VAR_36) {
  case 0xa4:
   VAR_32->name = "DUAL DVB-C2T2 CXD2843";
   VAR_32->type = VAR_12;
   VAR_32->type_name = "DVBC2T2_SONY";
   break;
  case 0xb1:
   VAR_32->name = "DUAL DVB-CT2 CXD2837";
   VAR_32->type = VAR_13;
   VAR_32->type_name = "DVBCT2_SONY";
   break;
  case 0xb0:
   VAR_32->name = "DUAL ISDB-T CXD2838";
   VAR_32->type = VAR_20;
   VAR_32->type_name = "ISDBT_SONY";
   break;
  case 0xc1:
   VAR_32->name = "DUAL DVB-C2T2 ISDB-T CXD2854";
   VAR_32->type = VAR_11;
   VAR_32->type_name = "DVBC2T2I_ISDBT_SONY";
   break;
  default:
   return;
  }
  VAR_32->class = VAR_9;
  FUNC_0(VAR_33, VAR_25, VAR_32->i2c->regs + VAR_26);
 } else if (FUNC_9(VAR_32)) {
  VAR_32->name = "DUAL DVB-S2";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_16;
  VAR_32->type_name = "DVBS_ST";
  FUNC_0(VAR_33, VAR_24, VAR_32->i2c->regs + VAR_26);
 } else if (FUNC_10(VAR_32, &VAR_36)) {
  VAR_32->name = "DUAL DVB-S2";
  VAR_32->class = VAR_9;
  if (VAR_36 == 0x51) {
   if (VAR_32->nr == 0 &&
       VAR_35->info->ts_quirks & VAR_27)
    VAR_32->type = VAR_18;
   else
    VAR_32->type = VAR_17;
   VAR_32->type_name = "DVBS_ST_0910";
  } else {
   VAR_32->type = VAR_19;
   VAR_32->type_name = "DVBS_ST_AA";
  }
  FUNC_0(VAR_33, VAR_24, VAR_32->i2c->regs + VAR_26);
 } else if (FUNC_6(VAR_32)) {
  VAR_32->name = "DUAL DVB-C/T";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_15;
  VAR_32->type_name = "DVBCT_TR";
  FUNC_0(VAR_33, VAR_25, VAR_32->i2c->regs + VAR_26);
 } else if (FUNC_8(VAR_32)) {
  VAR_32->name = "DUAL DVB-C/T";
  VAR_32->class = VAR_9;
  VAR_32->type = VAR_14;
  VAR_32->type_name = "DVBCT_ST";
  FUNC_0(VAR_33, VAR_24, VAR_32->i2c->regs + VAR_26);
 } else if (FUNC_7(VAR_32)) {
  VAR_32->name = "ENCTI";
  VAR_32->class = VAR_7;
 }
}
