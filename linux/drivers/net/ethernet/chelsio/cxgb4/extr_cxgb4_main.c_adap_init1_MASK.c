
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fw_caps_config_cmd {void* op_to_write; void* cfvalid_to_len16; } ;
struct TYPE_5__ {int tx_modq_map; } ;
struct TYPE_6__ {TYPE_2__ tp; } ;
struct TYPE_4__ {int egr_sz; } ;
struct adapter {int pf; TYPE_3__ params; TYPE_1__ sge; int mbox; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fw_caps_config_cmd) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_22 ;
 int FUNC_8 (int ,char*) ;
 void* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct fw_caps_config_cmd*,int ,int) ;
 int FUNC_12 (struct adapter*,int ,int ,int ,int ,int,int ,int ,int ,int,int,int,int,int ,int ) ;
 int FUNC_13 (struct adapter*,int ,int ,int) ;
 int FUNC_14 (struct adapter*,int ) ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*,int ) ;
 int FUNC_17 (struct adapter*) ;
 int FUNC_18 (struct adapter*,int ,struct fw_caps_config_cmd*,int,struct fw_caps_config_cmd*) ;
 int FUNC_19 (struct adapter*,int ,int ,int*,int,int ) ;
 int FUNC_20 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_21(struct adapter *VAR_23, struct fw_caps_config_cmd *VAR_24)
{
 u32 VAR_25;
 int VAR_26;




 VAR_26 = FUNC_15(VAR_23);
 if (VAR_26) {
  FUNC_8(VAR_23->pdev_dev,
   "Unable to retrieve resource provisioning information\n");
  return VAR_26;
 }


 FUNC_11(VAR_24, 0, sizeof(*VAR_24));
 VAR_24->op_to_write = FUNC_9(FUNC_0(VAR_1) |
          VAR_4 | VAR_3);
 VAR_24->cfvalid_to_len16 = FUNC_9(FUNC_1(*VAR_24));
 VAR_26 = FUNC_18(VAR_23, VAR_23->mbox, VAR_24, sizeof(*VAR_24), VAR_24);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_24->op_to_write = FUNC_9(FUNC_0(VAR_1) |
          VAR_4 | VAR_5);
 VAR_26 = FUNC_18(VAR_23, VAR_23->mbox, VAR_24, sizeof(*VAR_24), ((void*)0));
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_13(VAR_23, VAR_23->pf,
     VAR_6,
     VAR_8 |
     VAR_7);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_12(VAR_23, VAR_23->mbox, VAR_23->pf, 0, VAR_23->sge.egr_sz, 64,
     VAR_9, 0, 0, 4, 0xf, 0xf, 16, VAR_2,
     VAR_2);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_17(VAR_23);


 FUNC_20(VAR_23, VAR_15, 0x64f8849);
 FUNC_20(VAR_23, VAR_22, FUNC_2(VAR_10 - 12));
 FUNC_20(VAR_23, VAR_13, VAR_12);
 VAR_25 = FUNC_16(VAR_23, VAR_14);
 FUNC_20(VAR_23, VAR_14, VAR_25 & ~VAR_0);


 VAR_23->params.tp.tx_modq_map = 0xE4;
 FUNC_20(VAR_23, VAR_17,
       FUNC_7(VAR_23->params.tp.tx_modq_map));


 VAR_25 = 0x84218421;
 FUNC_19(VAR_23, VAR_13, VAR_14,
     &VAR_25, 1, VAR_20);
 FUNC_19(VAR_23, VAR_13, VAR_14,
     &VAR_25, 1, VAR_19);
 FUNC_19(VAR_23, VAR_13, VAR_14,
     &VAR_25, 1, VAR_21);


 if (FUNC_10(VAR_23)) {
  FUNC_20(VAR_23, VAR_18,
        FUNC_3(16) |
        FUNC_4(16) |
        FUNC_5(16) |
        FUNC_6(16));
  FUNC_20(VAR_23, VAR_16,
        FUNC_3(16) |
        FUNC_4(16) |
        FUNC_5(16) |
        FUNC_6(16));
 }


 return FUNC_14(VAR_23, VAR_23->pf);
}
