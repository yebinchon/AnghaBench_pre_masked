
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {struct hexium* ext_priv; } ;
struct TYPE_9__ {int name; } ;
struct hexium {TYPE_4__ i2c_adapter; int video_dev; scalar_t__ cur_input; int cur_std; } ;
struct TYPE_7__ {int vidioc_s_input; int vidioc_g_input; int vidioc_enum_input; } ;
struct TYPE_8__ {TYPE_1__ vid_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct saa7146_dev*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct hexium*,int ) ;
 int FUNC_4 (struct hexium*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct hexium*) ;
 struct hexium* FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct saa7146_dev*,TYPE_4__*,int ) ;
 int FUNC_12 (int *,struct saa7146_dev*,char*,int ) ;
 int FUNC_13 (struct saa7146_dev*,int,int ) ;
 int FUNC_14 (struct saa7146_dev*,TYPE_2__*) ;
 int FUNC_15 (struct saa7146_dev*) ;
 int FUNC_16 (struct saa7146_dev*,int ,int) ;
 int FUNC_17 (int ,char*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__ VAR_22 ;

__attribute__((used)) static int FUNC_18(struct saa7146_dev *VAR_23, struct saa7146_pci_extension_data *VAR_24)
{
 struct hexium *VAR_25;
 int VAR_26;

 FUNC_0("\n");

 VAR_25 = FUNC_8(sizeof(*VAR_25), VAR_4);
 if (!VAR_25)
  return -VAR_3;

 VAR_23->ext_priv = VAR_25;


 FUNC_16(VAR_23, VAR_11, (VAR_5 | VAR_8 | VAR_7 | VAR_10));

 FUNC_17(VAR_25->i2c_adapter.name, "hexium gemini",
  sizeof(VAR_25->i2c_adapter.name));
 FUNC_11(VAR_23, &VAR_25->i2c_adapter, VAR_14);
 if (FUNC_5(&VAR_25->i2c_adapter) < 0) {
  FUNC_1("cannot register i2c-device. skipping.\n");
  FUNC_7(VAR_25);
  return -VAR_2;
 }


 FUNC_13(VAR_23, 2, VAR_13);

 FUNC_16(VAR_23, VAR_0, 0x07000700);
 FUNC_16(VAR_23, VAR_1, 0x00000000);
 FUNC_16(VAR_23, VAR_12, (VAR_6 | VAR_9 | VAR_7 | VAR_10));


 VAR_25->cur_input = 0;
 FUNC_2(VAR_23);

 FUNC_4(VAR_25, VAR_18);
 VAR_25->cur_std = VAR_15;

 FUNC_3(VAR_25, 0);
 VAR_25->cur_input = 0;

 FUNC_14(VAR_23, &VAR_22);

 VAR_22.vid_ops.vidioc_enum_input = VAR_19;
 VAR_22.vid_ops.vidioc_g_input = VAR_20;
 VAR_22.vid_ops.vidioc_s_input = VAR_21;
 VAR_26 = FUNC_12(&VAR_25->video_dev, VAR_23, "hexium gemini", VAR_16);
 if (VAR_26 < 0) {
  FUNC_9("cannot register capture v4l2 device. skipping.\n");
  FUNC_15(VAR_23);
  FUNC_6(&VAR_25->i2c_adapter);
  FUNC_7(VAR_25);
  return VAR_26;
 }

 FUNC_10("found 'hexium gemini' frame grabber-%d\n", VAR_17);
 VAR_17++;

 return 0;
}
