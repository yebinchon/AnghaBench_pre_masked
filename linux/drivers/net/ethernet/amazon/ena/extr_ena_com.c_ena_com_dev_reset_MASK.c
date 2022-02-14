
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int completion_timeout; } ;
struct ena_com_dev {TYPE_1__ admin_queue; scalar_t__ reg_bar; } ;
typedef enum ena_regs_reset_reason_types { ____Placeholder_ena_regs_reset_reason_types } ena_regs_reset_reason_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ena_com_dev*,int,int ) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(struct ena_com_dev *VAR_16,
        enum ena_regs_reset_reason_types VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;

 VAR_18 = FUNC_1(VAR_16, VAR_12);
 VAR_20 = FUNC_1(VAR_16, VAR_5);

 if (FUNC_3((VAR_18 == VAR_2) ||
       (VAR_20 == VAR_2))) {
  FUNC_2("Reg read32 timeout occurred\n");
  return -VAR_15;
 }

 if ((VAR_18 & VAR_13) == 0) {
  FUNC_2("Device isn't ready, can't reset device\n");
  return -VAR_1;
 }

 VAR_19 = (VAR_20 & VAR_6) >>
   VAR_7;
 if (VAR_19 == 0) {
  FUNC_2("Invalid timeout value\n");
  return -VAR_1;
 }


 VAR_21 = VAR_8;
 VAR_21 |= (VAR_17 << VAR_11) &
       VAR_10;
 FUNC_5(VAR_21, VAR_16->reg_bar + VAR_9);


 FUNC_0(VAR_16);

 VAR_22 = FUNC_4(VAR_16, VAR_19,
      VAR_14);
 if (VAR_22 != 0) {
  FUNC_2("Reset indication didn't turn on\n");
  return VAR_22;
 }


 FUNC_5(0, VAR_16->reg_bar + VAR_9);
 VAR_22 = FUNC_4(VAR_16, VAR_19, 0);
 if (VAR_22 != 0) {
  FUNC_2("Reset indication didn't turn off\n");
  return VAR_22;
 }

 VAR_19 = (VAR_20 & VAR_3) >>
  VAR_4;
 if (VAR_19)

  VAR_16->admin_queue.completion_timeout = VAR_19 * 100000;
 else
  VAR_16->admin_queue.completion_timeout = VAR_0;

 return 0;
}
