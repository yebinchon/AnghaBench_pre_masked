
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_reg_acc_command {int command; } ;
struct TYPE_2__ {int pdsp; } ;
struct knav_range_info {TYPE_1__ acc_info; struct knav_acc_channel* acc; } ;
struct knav_device {int dev; } ;
struct knav_acc_channel {int name; } ;
typedef enum knav_acc_result { ____Placeholder_knav_acc_result } knav_acc_result ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct knav_device*,struct knav_range_info*,struct knav_reg_acc_command*,int) ;
 int FUNC_3 (struct knav_device*,int ,struct knav_reg_acc_command*) ;

__attribute__((used)) static enum knav_acc_result FUNC_4(struct knav_device *VAR_1,
      struct knav_range_info *VAR_2,
      int VAR_3)
{
 struct knav_reg_acc_command VAR_4;
 struct knav_acc_channel *VAR_5;
 enum knav_acc_result VAR_6;

 VAR_5 = VAR_2->acc + VAR_3;

 FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_3);
 VAR_4.command |= VAR_0 << 8;
 VAR_6 = FUNC_3(VAR_1, VAR_2->acc_info.pdsp, &VAR_4);

 FUNC_0(VAR_1->dev, "started acc channel %s, result %s\n",
  VAR_5->name, FUNC_1(VAR_6));

 return VAR_6;
}
