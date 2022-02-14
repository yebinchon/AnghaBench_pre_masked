
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct tuner_setup {int type; int addr; int mode_mask; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct TYPE_5__ {int frequency; int type; scalar_t__ tuner; } ;
struct mxb {size_t cur_input; int cur_mute; int i2c_adapter; int cur_mode; int cur_audinput; TYPE_1__ cur_freq; } ;
struct i2c_msg {int addr; int len; int * buf; scalar_t__ flags; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int hps_sync; int hps_source; } ;
struct TYPE_6__ {int length; int * data; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 TYPE_3__* VAR_20 ;
 TYPE_2__* VAR_21 ;
 int FUNC_2 (struct mxb*) ;
 int FUNC_3 (char*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (struct mxb*,int ,int ,int,...) ;
 int FUNC_5 (struct saa7146_dev*,int ,int ) ;
 int FUNC_6 (struct saa7146_dev*,int ,int) ;
 int FUNC_7 (struct mxb*,int ,int ,int,int,int ) ;
 int FUNC_8 (struct mxb*,int) ;
 int VAR_27 ;
 int FUNC_9 (struct mxb*,int ,int ,...) ;
 int VAR_28 ;
 int * VAR_29 ;

__attribute__((used)) static int FUNC_10(struct saa7146_dev* VAR_30)
{
 struct mxb* VAR_31 = (struct mxb*)VAR_30->ext_priv;
 struct i2c_msg VAR_32;
 struct tuner_setup VAR_33;
 v4l2_std_id VAR_34 = VAR_14;

 int VAR_35 = 0, VAR_36 = 0;


 FUNC_8(VAR_31, 6);


 FUNC_4(VAR_31, VAR_28, VAR_25, VAR_34);


 VAR_35 = 0;
 FUNC_4(VAR_31, VAR_28, VAR_24, VAR_10,
  VAR_9, 0);


 VAR_33.mode_mask = VAR_13;
 VAR_33.addr = VAR_0;
 VAR_33.type = VAR_12;
 FUNC_9(VAR_31, VAR_27, VAR_26, &VAR_33);

 VAR_31->cur_freq.tuner = 0;
 VAR_31->cur_freq.type = VAR_15;
 VAR_31->cur_freq.frequency = VAR_19;
 FUNC_9(VAR_31, VAR_27, VAR_22, &VAR_31->cur_freq);



 FUNC_6(VAR_30, VAR_3, 0x00404050);
 FUNC_4(VAR_31, VAR_17, VAR_23, 1);
 FUNC_4(VAR_31, VAR_28, VAR_25, VAR_34);
 FUNC_9(VAR_31, VAR_28, VAR_25, VAR_34);


 FUNC_7(VAR_31, VAR_28, VAR_24, 3, 17, 0);


 FUNC_7(VAR_31, VAR_28, VAR_24, 3, 13, 0);


 VAR_31->cur_input = 0;
 VAR_31->cur_audinput = VAR_29[VAR_31->cur_input];
 VAR_31->cur_mute = 1;

 VAR_31->cur_mode = VAR_16;
 FUNC_2(VAR_31);





 VAR_32.addr = 0x1b;
 VAR_32.flags = 0;
 VAR_32.len = VAR_21[0].length;
 VAR_32.buf = &VAR_21[0].data[0];

 VAR_36 = FUNC_1(&VAR_31->i2c_adapter, &VAR_32, 1);
 if (VAR_36 == 1) {





  VAR_18.flags &= ~VAR_11;
  for (VAR_35 = 1; ; VAR_35++) {
   if (-1 == VAR_21[VAR_35].length)
    break;

   VAR_32.len = VAR_21[VAR_35].length;
   VAR_32.buf = &VAR_21[VAR_35].data[0];
   VAR_36 = FUNC_1(&VAR_31->i2c_adapter, &VAR_32, 1);
   if (VAR_36 != 1) {
    FUNC_0("failed to initialize 'sound arena module'\n");
    goto err;
   }
  }
  FUNC_3("'sound arena module' detected\n");
 }
err:






 FUNC_5(VAR_30, VAR_20[VAR_31->cur_input].hps_source,
   VAR_20[VAR_31->cur_input].hps_sync);





 FUNC_6(VAR_30, VAR_2, 0x00000000);
 FUNC_6(VAR_30, VAR_1, 0x02000200);
 FUNC_6(VAR_30, VAR_8, (VAR_4 | VAR_6 | VAR_5 | VAR_7));

 return 0;
}
