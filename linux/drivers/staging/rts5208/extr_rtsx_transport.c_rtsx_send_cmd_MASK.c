
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtsx_dev {scalar_t__ trans_result; int trans_state; struct completion* done; int reg_lock; scalar_t__ check_card_cd; } ;
struct rtsx_chip {int host_cmds_addr; int ci; int int_reg; struct rtsx_dev* rtsx; } ;
struct completion {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,scalar_t__) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 long FUNC_9 (struct completion*,int ) ;

int FUNC_10(struct rtsx_chip *VAR_15, u8 VAR_16, int VAR_17)
{
 struct rtsx_dev *VAR_18 = VAR_15->rtsx;
 struct completion VAR_19;
 u32 VAR_20 = FUNC_0(31);
 long VAR_21;
 int VAR_22 = 0;

 if (VAR_16 == VAR_6)
  VAR_18->check_card_cd = VAR_7;
 else if (VAR_16 == VAR_2)
  VAR_18->check_card_cd = VAR_3;
 else if (VAR_16 == VAR_13)
  VAR_18->check_card_cd = VAR_14;
 else
  VAR_18->check_card_cd = 0;

 FUNC_7(&VAR_18->reg_lock);


 VAR_18->done = &VAR_19;
 VAR_18->trans_result = VAR_10;
 FUNC_2(&VAR_19);
 VAR_18->trans_state = VAR_8;

 FUNC_6(VAR_15, VAR_4, VAR_15->host_cmds_addr);

 VAR_20 |= (u32)(VAR_15->ci * 4) & 0x00FFFFFF;

 VAR_20 |= 0x40000000;
 FUNC_6(VAR_15, VAR_5, VAR_20);

 FUNC_8(&VAR_18->reg_lock);


 VAR_21 = FUNC_9(
  &VAR_19, FUNC_3(VAR_17));
 if (VAR_21 <= 0) {
  FUNC_1(FUNC_4(VAR_15), "chip->int_reg = 0x%x\n",
   VAR_15->int_reg);
  VAR_22 = -VAR_1;
  goto finish_send_cmd;
 }

 FUNC_7(&VAR_18->reg_lock);
 if (VAR_18->trans_result == VAR_11)
  VAR_22 = -VAR_0;
 else if (VAR_18->trans_result == VAR_12)
  VAR_22 = 0;

 FUNC_8(&VAR_18->reg_lock);

finish_send_cmd:
 VAR_18->done = ((void*)0);
 VAR_18->trans_state = VAR_9;

 if (VAR_22 < 0)
  FUNC_5(VAR_15, VAR_16);

 return VAR_22;
}
