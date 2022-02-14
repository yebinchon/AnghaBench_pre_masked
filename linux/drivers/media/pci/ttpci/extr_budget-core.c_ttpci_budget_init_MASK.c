
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct saa7146_pci_extension_data {struct budget_info* ext_priv; } ;
struct saa7146_dev {TYPE_2__* pci; int name; } ;
struct module {int dummy; } ;
struct budget_info {int type; int name; } ;
struct TYPE_11__ {int proposed_mac; } ;
struct TYPE_9__ {int name; } ;
struct budget {int buffer_width; int buffer_height; int buffer_size; int buffer_warning_threshold; TYPE_7__ dvb_adapter; TYPE_1__ i2c_adap; int pt; int * grabbing; int vpe_tasklet; struct budget_info* card; int debilock; int feedlock; int video_port; struct saa7146_dev* dev; int buffer_warning_time; scalar_t__ buffer_warnings; } ;
struct TYPE_10__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct budget*) ;
 int VAR_24 ;
 int FUNC_1 (int,char*,struct saa7146_dev*,...) ;
 int FUNC_2 (TYPE_7__*,int ,struct module*,int *,short*) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_25 ;
 int FUNC_6 (struct budget*,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct saa7146_dev*,TYPE_1__*,int ) ;
 int FUNC_9 (struct saa7146_dev*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int *) ;
 int * FUNC_11 (TYPE_2__*,int,int *) ;
 int FUNC_12 (struct saa7146_dev*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *,int ,unsigned long) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int VAR_26 ;

int FUNC_17(struct budget *VAR_27, struct saa7146_dev *VAR_28,
        struct saa7146_pci_extension_data *VAR_29,
        struct module *VAR_30, short *VAR_31)
{
 int VAR_32 = 0;
 struct budget_info *VAR_33 = VAR_29->ext_priv;
 int VAR_34;
 int VAR_35;

 FUNC_6(VAR_27, 0, sizeof(struct budget));

 FUNC_1(2, "dev: %p, budget: %p\n", VAR_28, VAR_27);

 VAR_27->card = VAR_33;
 VAR_27->dev = (struct saa7146_dev *) VAR_28;

 switch(VAR_27->card->type) {
 case 133:
  VAR_27->buffer_width = VAR_22;
  VAR_34 = VAR_18;
  VAR_35 = VAR_15;
  break;

 case 132:
 case 131:
 case 135:
 case 129:
 case 128:
 case 130:
 case 134:
  VAR_27->buffer_width = VAR_23;
  VAR_34 = VAR_19;
  VAR_35 = VAR_16;
  break;

 default:
  VAR_27->buffer_width = VAR_21;
  VAR_34 = VAR_17;
  VAR_35 = VAR_14;
 }

 if (VAR_24 < VAR_20)
  VAR_24 = VAR_20;
 else if (VAR_24 > VAR_34)
  VAR_24 = VAR_34;

 VAR_27->buffer_height = VAR_24 * 1024 / VAR_27->buffer_width;
 if (VAR_27->buffer_height > 0xfff) {
  VAR_27->buffer_height /= 2;
  VAR_27->buffer_height &= VAR_35;
  VAR_27->buffer_size = 2 * VAR_27->buffer_height * VAR_27->buffer_width;
 } else {
  VAR_27->buffer_height &= VAR_35;
  VAR_27->buffer_size = VAR_27->buffer_height * VAR_27->buffer_width;
 }
 VAR_27->buffer_warning_threshold = VAR_27->buffer_size * 80/100;
 VAR_27->buffer_warnings = 0;
 VAR_27->buffer_warning_time = VAR_25;

 FUNC_1(2, "%s: buffer type = %s, width = %d, height = %d\n",
  VAR_27->dev->name,
  VAR_27->buffer_size > VAR_27->buffer_width * VAR_27->buffer_height ? "odd/even" : "single",
  VAR_27->buffer_width, VAR_27->buffer_height);
 FUNC_7("%s: dma buffer size %u\n", VAR_27->dev->name, VAR_27->buffer_size);

 VAR_32 = FUNC_2(&VAR_27->dvb_adapter, VAR_27->card->name,
       VAR_30, &VAR_27->dev->pci->dev, VAR_31);
 if (VAR_32 < 0)
  return VAR_32;


 FUNC_12(VAR_28, VAR_3, 0x00000000);
 FUNC_12(VAR_28, VAR_10, (VAR_6 | VAR_8));
 FUNC_12(VAR_28, VAR_10, (VAR_7 | VAR_9));
 FUNC_12(VAR_28, VAR_2, 0x02000000);
 FUNC_12(VAR_28, VAR_10, (VAR_6 | VAR_8 | VAR_7 | VAR_9));

 if (VAR_33->type != 133)
  VAR_27->video_port = VAR_1;
 else
  VAR_27->video_port = VAR_0;
 FUNC_13(&VAR_27->feedlock);
 FUNC_13(&VAR_27->debilock);



 if (VAR_33->type != 133)
  FUNC_12(VAR_28, VAR_5, 0x500000);

 FUNC_14(VAR_27->i2c_adap.name, VAR_27->card->name,
  sizeof(VAR_27->i2c_adap.name));

 FUNC_8(VAR_28, &VAR_27->i2c_adap, VAR_13);
 FUNC_14(VAR_27->i2c_adap.name, VAR_27->card->name,
  sizeof(VAR_27->i2c_adap.name));

 if (FUNC_4(&VAR_27->i2c_adap) < 0) {
  VAR_32 = -VAR_4;
  goto err_dvb_unregister;
 }

 FUNC_16(&VAR_27->i2c_adap, VAR_27->dvb_adapter.proposed_mac);

 VAR_27->grabbing = FUNC_11(VAR_28->pci, VAR_27->buffer_size, &VAR_27->pt);
 if (((void*)0) == VAR_27->grabbing) {
  VAR_32 = -VAR_4;
  goto err_del_i2c;
 }

 FUNC_12(VAR_28, VAR_11, 0x001c0000);

 FUNC_12(VAR_28, VAR_5, 0x000000);

 FUNC_15(&VAR_27->vpe_tasklet, VAR_26, (unsigned long) VAR_27);


 if (VAR_33->type != 133)
  FUNC_9(VAR_28, 2, VAR_12);

 if ((VAR_32 = FUNC_0(VAR_27)) == 0)
  return 0;


 FUNC_10(VAR_28->pci, VAR_27->grabbing, &VAR_27->pt);

err_del_i2c:
 FUNC_5(&VAR_27->i2c_adap);

err_dvb_unregister:
 FUNC_3(&VAR_27->dvb_adapter);

 return VAR_32;
}
