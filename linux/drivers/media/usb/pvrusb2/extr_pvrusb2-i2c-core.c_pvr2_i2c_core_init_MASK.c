
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_10__ {struct pvr2_hdw* algo_data; int * algo; TYPE_2__ dev; int name; } ;
struct pvr2_hdw {size_t unit_number; scalar_t__ ir_scheme_active; int i2c_linked; int ** i2c_func; TYPE_4__ i2c_adap; int v4l2_dev; int i2c_algo; TYPE_3__* usb_dev; int name; TYPE_1__* hdw_desc; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {scalar_t__ flag_has_wm8775; scalar_t__ flag_has_cx25840; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pvr2_hdw*,int) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int * VAR_4 ;
 int FUNC_2 (TYPE_4__*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int* VAR_9 ;
 int FUNC_4 (char*,int ) ;
 TYPE_4__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int) ;

void FUNC_8(struct pvr2_hdw *VAR_13)
{
 unsigned int VAR_14;



 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_13->i2c_func[VAR_14] = VAR_12;
 }


 if (VAR_9[VAR_13->unit_number] == 0) {
  FUNC_4("%s: IR disabled\n", VAR_13->name);
  VAR_13->i2c_func[0x18] = VAR_5;
 } else if (VAR_9[VAR_13->unit_number] == 1) {
  if (VAR_13->ir_scheme_active == VAR_1) {


   VAR_13->i2c_func[0x18] = VAR_4;
  }
 }
 if (VAR_13->hdw_desc->flag_has_cx25840) {
  VAR_13->i2c_func[0x44] = VAR_6;
 }
 if (VAR_13->hdw_desc->flag_has_wm8775) {
  VAR_13->i2c_func[0x1b] = VAR_7;
 }


 VAR_13->i2c_adap = VAR_10;
 VAR_13->i2c_algo = VAR_11;
 FUNC_7(VAR_13->i2c_adap.name, VAR_13->name, sizeof(VAR_13->i2c_adap.name));
 VAR_13->i2c_adap.dev.parent = &VAR_13->usb_dev->dev;
 VAR_13->i2c_adap.algo = &VAR_13->i2c_algo;
 VAR_13->i2c_adap.algo_data = VAR_13;
 VAR_13->i2c_linked = !0;
 FUNC_3(&VAR_13->i2c_adap, &VAR_13->v4l2_dev);
 FUNC_2(&VAR_13->i2c_adap);
 if (VAR_13->i2c_func[0x18] == VAR_4) {






  if (FUNC_0(VAR_13, 0x71)) {
   FUNC_6(VAR_3,
       "Device has newer IR hardware; disabling unneeded virtual IR device");
   VAR_13->i2c_func[0x18] = ((void*)0);

   VAR_13->ir_scheme_active = VAR_2;
  }
 }
 if (VAR_8) FUNC_1(VAR_13);

 FUNC_5(VAR_13);
}
