
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_core {TYPE_2__* bus_info; int bus_priv; TYPE_1__* bus; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* cmd_exec ) (int ,int ,scalar_t__,int ,int,char*,size_t,char*,size_t,scalar_t__*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,int ,scalar_t__,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mlxsw_core*,char*,size_t) ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int,char*,size_t,char*,size_t,scalar_t__*) ;

int FUNC_7(struct mlxsw_core *VAR_5, u16 VAR_6, u8 VAR_7,
     u32 VAR_8, bool VAR_9, bool VAR_10,
     char *VAR_11, size_t VAR_12,
     char *VAR_13, size_t VAR_14)
{
 u8 VAR_15;
 int VAR_16;

 FUNC_0(VAR_12 % sizeof(u32) || VAR_14 % sizeof(u32));
 if (!VAR_5->bus->cmd_exec)
  return -VAR_1;

 FUNC_1(VAR_5->bus_info->dev, "Cmd exec (opcode=%x(%s),opcode_mod=%x,in_mod=%x)\n",
  VAR_6, FUNC_3(VAR_6), VAR_7, VAR_8);
 if (VAR_11) {
  FUNC_1(VAR_5->bus_info->dev, "Input mailbox:\n");
  FUNC_5(VAR_5, VAR_11, VAR_12);
 }

 VAR_16 = VAR_5->bus->cmd_exec(VAR_5->bus_priv, VAR_6,
     VAR_7, VAR_8, VAR_9,
     VAR_11, VAR_12,
     VAR_13, VAR_14, &VAR_15);

 if (!VAR_16 && VAR_13) {
  FUNC_1(VAR_5->bus_info->dev, "Output mailbox:\n");
  FUNC_5(VAR_5, VAR_13, VAR_14);
 }

 if (VAR_10 && VAR_16 == -VAR_0 &&
     VAR_15 == VAR_4) {
  VAR_16 = 0;
 } else if (VAR_16 == -VAR_0 && VAR_15 != VAR_3) {
  FUNC_2(VAR_5->bus_info->dev, "Cmd exec failed (opcode=%x(%s),opcode_mod=%x,in_mod=%x,status=%x(%s))\n",
   VAR_6, FUNC_3(VAR_6), VAR_7,
   VAR_8, VAR_15, FUNC_4(VAR_15));
 } else if (VAR_16 == -VAR_2) {
  FUNC_2(VAR_5->bus_info->dev, "Cmd exec timed-out (opcode=%x(%s),opcode_mod=%x,in_mod=%x)\n",
   VAR_6, FUNC_3(VAR_6), VAR_7,
   VAR_8);
 }

 return VAR_16;
}
