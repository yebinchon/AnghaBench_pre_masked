
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct slim_val_inf {int start_offset; int num_bytes; } ;
struct slim_msg_txn {int ec; scalar_t__ rl; int mc; int mt; } ;
struct slim_device {struct slim_controller* ctrl; int laddr; } ;
struct slim_controller {int dev; } ;


 int FUNC_0 (struct slim_msg_txn,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;




 int FUNC_1 (int ,char*,int,int ,int ,int) ;
 int FUNC_2 (struct slim_controller*,struct slim_msg_txn*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct slim_controller*,struct slim_val_inf*,int ) ;
 struct slim_msg_txn VAR_1 ;

int FUNC_6(struct slim_device *VAR_2, struct slim_val_inf *VAR_3,
    u8 VAR_4)
{
 FUNC_0(VAR_1, VAR_4, 6, VAR_2->laddr, VAR_3);
 struct slim_msg_txn *VAR_5 = &VAR_1;
 struct slim_controller *VAR_6 = VAR_2->ctrl;
 int VAR_7;
 u16 VAR_8;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_3(VAR_3->num_bytes);

 FUNC_1(VAR_6->dev, "SB xfer msg:os:%x, len:%d, MC:%x, sl:%x\n",
  VAR_3->start_offset, VAR_3->num_bytes, VAR_4, VAR_8);

 VAR_5->ec = ((VAR_8 | (1 << 3)) | ((VAR_3->start_offset & 0xFFF) << 4));

 switch (VAR_4) {
 case 129:
 case 131:
 case 128:
 case 130:
  VAR_5->rl += VAR_3->num_bytes;
 default:
  break;
 }

 if (FUNC_4(VAR_5->mt, VAR_5->mc))
  VAR_5->rl++;

 return FUNC_2(VAR_6, VAR_5);
}
