
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct workqueue_struct {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int id; int vbi_regs_offset; int aud_input; int vid_input; int fw_wait; int fw_work; int sd; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 struct workqueue_struct* FUNC_2 (char*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int,int,int) ;
 int FUNC_5 (struct i2c_client*) ;
 int VAR_4 ;
 int FUNC_6 (struct i2c_client*,int,int) ;
 int FUNC_7 (struct i2c_client*,int,int) ;
 int FUNC_8 (struct workqueue_struct*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct cx25840_state*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (struct workqueue_struct*,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (struct i2c_client*,int ,int ) ;
 struct cx25840_state* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_19(struct i2c_client *VAR_6)
{
 FUNC_0(VAR_5);
 struct cx25840_state *VAR_7 = FUNC_17(FUNC_10(VAR_6));
 u32 VAR_8 = 0;
 struct workqueue_struct *VAR_9;


 if (FUNC_18(&VAR_7->sd))
  VAR_8 = *((u32 *)FUNC_18(&VAR_7->sd));






 FUNC_6(VAR_6, 0x000, 0);


 FUNC_4(VAR_6, 0x102, ~0x01, 0x01);
 FUNC_4(VAR_6, 0x102, ~0x01, 0x00);


 FUNC_4(VAR_6, 0x803, ~0x10, 0x00);


 FUNC_6(VAR_6, 0x398, 0);







 FUNC_6(VAR_6, 0x2, 0x76);


 FUNC_6(VAR_6, 0x1, 0x40);


 switch (VAR_7->id) {
 case 128:




  if (VAR_8 == 25000000) {

   ;
  } else {

   FUNC_6(VAR_6, 0x2, 0x71);
  }
  FUNC_7(VAR_6, 0x11c, 0x01d1744c);
  FUNC_7(VAR_6, 0x118, 0x00000416);
  FUNC_7(VAR_6, 0x404, 0x0010253e);
  FUNC_7(VAR_6, 0x42c, 0x42600000);
  FUNC_7(VAR_6, 0x44c, 0x161f1000);
  break;
 case 129:




  FUNC_7(VAR_6, 0x11c, 0x01d1744c);
  FUNC_7(VAR_6, 0x118, 0x00000416);
  break;
 case 130:
 default:




  FUNC_7(VAR_6, 0x11c, 0x00000000);
  FUNC_7(VAR_6, 0x118, 0x00000414);
  break;
 }


 FUNC_7(VAR_6, 0x33c, 0x00000001);


 FUNC_7(VAR_6, 0x340, 0x0df7df83);
 switch (VAR_7->id) {
 case 128:
  if (VAR_8 == 25000000) {

   FUNC_7(VAR_6, 0x10c, 0x01b6db7b);
   FUNC_7(VAR_6, 0x108, 0x00000512);
  } else {

   FUNC_7(VAR_6, 0x10c, 0x13333333);
   FUNC_7(VAR_6, 0x108, 0x00000515);
  }
  break;
 default:
  FUNC_7(VAR_6, 0x10c, 0x002be2c9);
  FUNC_7(VAR_6, 0x108, 0x0000040f);
 }


 FUNC_7(VAR_6, 0x414, 0x00107d12);


 if (FUNC_12(VAR_7))
  FUNC_7(VAR_6, 0x418, 0x1d008282);
 else
  FUNC_7(VAR_6, 0x420, 0x3d008282);
 switch (VAR_7->id) {
 case 128:






  FUNC_7(VAR_6, 0x114, 0x017dbf48);
  FUNC_7(VAR_6, 0x110, 0x000a030e);
  break;
 case 129:





  FUNC_7(VAR_6, 0x114, 0x017dbf48);
  FUNC_7(VAR_6, 0x110, 0x000a030e);
  break;
 case 130:
 default:





  FUNC_7(VAR_6, 0x114, 0x01bf0c9e);
  FUNC_7(VAR_6, 0x110, 0x000a030c);
  break;
 }


 FUNC_6(VAR_6, 0x102, 0x10);


 FUNC_6(VAR_6, 0x103, 0x11);


 FUNC_6(VAR_6, 0x400, 0);


 FUNC_6(VAR_6, 0x401, 0xe8);


 FUNC_6(VAR_6, 0x144, 0x05);







 FUNC_6(VAR_6, 0x160, 0x1d);
 FUNC_6(VAR_6, 0x164, 0x00);







 FUNC_1(&VAR_7->fw_work, VAR_4);
 FUNC_11(&VAR_7->fw_wait);
 VAR_9 = FUNC_2("cx25840_fw");
 if (VAR_9) {
  FUNC_13(&VAR_7->fw_wait, &VAR_5, VAR_3);
  FUNC_14(VAR_9, &VAR_7->fw_work);
  FUNC_15();
  FUNC_9(&VAR_7->fw_wait, &VAR_5);
  FUNC_8(VAR_9);
 }





 if (FUNC_12(VAR_7))
  FUNC_3(VAR_6);
 else
  FUNC_5(VAR_6);


 FUNC_16(VAR_6, VAR_7->vid_input, VAR_7->aud_input);


 FUNC_4(VAR_6, 0x803, ~0x10, 0x10);


 FUNC_7(VAR_6, VAR_2, 0xffffffff);


 FUNC_6(VAR_6, VAR_0, 0xff);
 FUNC_6(VAR_6, VAR_1, 0xff);
 FUNC_7(VAR_6, 0x404, 0x0010253e);


 FUNC_6(VAR_6, VAR_7->vbi_regs_offset + 0x42f, 0x66);



 FUNC_7(VAR_6, 0x130, 0x0);


 if (FUNC_12(VAR_7))
  FUNC_7(VAR_6, 0x454, 0x6628021F);
 else
  FUNC_7(VAR_6, 0x478, 0x6628021F);


 FUNC_7(VAR_6, 0x144, 0x5);




 FUNC_7(VAR_6, 0x918, 0x1a0);


 FUNC_7(VAR_6, 0x134, 0x000a1800);


 FUNC_7(VAR_6, 0x13c, 0x00310000);
}
