
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {struct budget_av* ext_priv; } ;
struct TYPE_8__ {struct budget_av* priv; int num; int * proposed_mac; } ;
struct TYPE_10__ {TYPE_2__ dvb_adapter; int i2c_adap; scalar_t__ ci_present; } ;
struct budget_av {int has_saa7113; TYPE_4__ budget; int vd; } ;
struct TYPE_7__ {int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct TYPE_9__ {TYPE_1__ vid_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct budget_av*) ;
 int FUNC_2 (int,char*,struct saa7146_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct budget_av*) ;
 scalar_t__ FUNC_5 (int *,int,int,int *,int) ;
 int FUNC_6 (struct budget_av*) ;
 struct budget_av* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,int *) ;
 scalar_t__ FUNC_10 (struct budget_av*) ;
 int FUNC_11 (struct budget_av*,int ) ;
 int FUNC_12 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_13 (struct saa7146_dev*,int ,int ) ;
 int FUNC_14 (struct saa7146_dev*,TYPE_3__*) ;
 int FUNC_15 (struct saa7146_dev*) ;
 int FUNC_16 (struct saa7146_dev*,int ,int) ;
 int FUNC_17 (TYPE_4__*,struct saa7146_dev*,struct saa7146_pci_extension_data*,int ,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_3__ VAR_18 ;

__attribute__((used)) static int FUNC_19(struct saa7146_dev *VAR_19, struct saa7146_pci_extension_data *VAR_20)
{
 struct budget_av *VAR_21;
 u8 *VAR_22;
 int VAR_23;

 FUNC_2(2, "dev: %p\n", VAR_19);

 if (!(VAR_21 = FUNC_7(sizeof(struct budget_av), VAR_3)))
  return -VAR_2;

 VAR_21->has_saa7113 = 0;
 VAR_21->budget.ci_present = 0;

 VAR_19->ext_priv = VAR_21;

 VAR_23 = FUNC_17(&VAR_21->budget, VAR_19, VAR_20, VAR_12,
    VAR_14);
 if (VAR_23) {
  FUNC_6(VAR_21);
  return VAR_23;
 }


 FUNC_16(VAR_19, VAR_1, 0x04000000);
 FUNC_16(VAR_19, VAR_0, 0x07000600);
 FUNC_16(VAR_19, VAR_8, VAR_4 | VAR_6 | VAR_5 | VAR_7);

 if (FUNC_10(VAR_21) == 0) {
  VAR_21->has_saa7113 = 1;
  VAR_23 = FUNC_14(VAR_19, &VAR_18);
  if (VAR_23 != 0) {

   FUNC_0("cannot init vv subsystem\n");
   return VAR_23;
  }
  VAR_18.vid_ops.vidioc_enum_input = VAR_15;
  VAR_18.vid_ops.vidioc_g_input = VAR_16;
  VAR_18.vid_ops.vidioc_s_input = VAR_17;

  if ((VAR_23 = FUNC_12(&VAR_21->vd, VAR_19, "knc1", VAR_13))) {

   FUNC_0("cannot register capture v4l2 device\n");
   FUNC_15(VAR_19);
   return VAR_23;
  }


  FUNC_13(VAR_19, VAR_10,
      VAR_11);

  FUNC_11(VAR_21, 0);
 }


 FUNC_16(VAR_19, VAR_9, 0x1c00101f);

 VAR_22 = VAR_21->budget.dvb_adapter.proposed_mac;
 if (FUNC_5(&VAR_21->budget.i2c_adap, 0xa0, 0x30, VAR_22, 6)) {
  FUNC_8("KNC1-%d: Could not read MAC from KNC1 card\n",
         VAR_21->budget.dvb_adapter.num);
  FUNC_3(VAR_22);
 } else {
  FUNC_9("KNC1-%d: MAC addr = %pM\n",
   VAR_21->budget.dvb_adapter.num, VAR_22);
 }

 VAR_21->budget.dvb_adapter.priv = VAR_21;
 FUNC_4(VAR_21);
 FUNC_1(VAR_21);

 FUNC_18(&VAR_21->budget);

 return 0;
}
