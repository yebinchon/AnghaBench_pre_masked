
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_vhcr_cmd {int flags; void* status; void* out_param; void* token; void* opcode; int in_modifier; void* in_param; } ;
struct TYPE_8__ {int slave_cmd_mutex; int use_events; } ;
struct TYPE_5__ {struct mlx4_vhcr_cmd* vhcr; } ;
struct mlx4_priv {TYPE_4__ cmd; TYPE_1__ mfunc; } ;
struct TYPE_6__ {int function; } ;
struct mlx4_dev {TYPE_3__* persist; TYPE_2__ caps; } ;
struct TYPE_7__ {int state; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,scalar_t__) ;
 int FUNC_5 (struct mlx4_dev*,char*,int) ;
 int FUNC_6 (struct mlx4_dev*,int,scalar_t__) ;
 scalar_t__ FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,int ,struct mlx4_vhcr_cmd*) ;
 struct mlx4_priv* FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct mlx4_dev *VAR_5, u64 VAR_6, u64 *VAR_7,
     int VAR_8, u32 VAR_9, u8 VAR_10,
     u16 VAR_11, unsigned long VAR_12)
{
 struct mlx4_priv *VAR_13 = FUNC_9(VAR_5);
 struct mlx4_vhcr_cmd *VAR_14 = VAR_13->mfunc.vhcr;
 int VAR_15;

 FUNC_11(&VAR_13->cmd.slave_cmd_mutex);

 VAR_14->in_param = FUNC_3(VAR_6);
 VAR_14->out_param = VAR_7 ? FUNC_3(*VAR_7) : 0;
 VAR_14->in_modifier = FUNC_2(VAR_9);
 VAR_14->opcode = FUNC_1((((u16) VAR_10) << 12) | (VAR_11 & 0xfff));
 VAR_14->token = FUNC_1(VAR_0);
 VAR_14->status = 0;
 VAR_14->flags = !!(VAR_13->cmd.use_events) << 6;

 if (FUNC_7(VAR_5)) {
  VAR_15 = FUNC_8(VAR_5, VAR_5->caps.function, VAR_14);
  if (!VAR_15) {
   if (VAR_8) {
    if (VAR_7)
     *VAR_7 =
      FUNC_0(VAR_14->out_param);
    else {
     FUNC_5(VAR_5, "response expected while output mailbox is NULL for command 0x%x\n",
       VAR_11);
     VAR_14->status = VAR_1;
    }
   }
   VAR_15 = FUNC_10(VAR_14->status);
  }
  if (VAR_15 &&
      VAR_5->persist->state & VAR_4)
   VAR_15 = FUNC_6(VAR_5, VAR_11, VAR_10);
 } else {
  VAR_15 = FUNC_4(VAR_5, VAR_2, 0, VAR_11,
        VAR_3 + VAR_12);
  if (!VAR_15) {
   if (VAR_8) {
    if (VAR_7)
     *VAR_7 =
      FUNC_0(VAR_14->out_param);
    else {
     FUNC_5(VAR_5, "response expected while output mailbox is NULL for command 0x%x\n",
       VAR_11);
     VAR_14->status = VAR_1;
    }
   }
   VAR_15 = FUNC_10(VAR_14->status);
  } else {
   if (VAR_5->persist->state &
       VAR_4)
    VAR_15 = FUNC_6(VAR_5, VAR_11,
          VAR_10);
   else
    FUNC_5(VAR_5, "failed execution of VHCR_POST command opcode 0x%x\n", VAR_11);
  }
 }

 FUNC_12(&VAR_13->cmd.slave_cmd_mutex);
 return VAR_15;
}
