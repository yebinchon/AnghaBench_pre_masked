
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_qp {unsigned int qpn; } ;
struct TYPE_4__ {int mutex; int bitmap; } ;
struct mlx4_priv {TYPE_2__ mcg_table; } ;
struct mlx4_mgm {void* next_gid_index; void* members_count; void** qp; int gid; } ;
struct TYPE_3__ {int num_mgms; int num_qp_per_mgm; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_mgm* buf; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 unsigned int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int,unsigned int) ;
 int FUNC_5 (struct mlx4_dev*,int,int*,int,struct mlx4_cmd_mailbox*,int*,int*) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (struct mlx4_mgm*,int ,int) ;
 int FUNC_8 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 int FUNC_9 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (struct mlx4_dev*,char*,unsigned int) ;
 int FUNC_14 (struct mlx4_dev*,char*,...) ;
 int FUNC_15 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 struct mlx4_priv* FUNC_16 (struct mlx4_dev*) ;
 int FUNC_17 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct mlx4_dev*,int,int,int,unsigned int) ;

int FUNC_21(struct mlx4_dev *VAR_5, struct mlx4_qp *VAR_6, u8 VAR_7[16],
     int VAR_8, enum mlx4_protocol VAR_9,
     enum mlx4_steer_type VAR_10)
{
 struct mlx4_priv *VAR_11 = FUNC_16(VAR_5);
 struct mlx4_cmd_mailbox *VAR_12;
 struct mlx4_mgm *VAR_13;
 u32 VAR_14;
 int VAR_15 = -1, VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19;
 u8 VAR_20 = VAR_7[5];
 u8 VAR_21 = 0;

 VAR_12 = FUNC_10(VAR_5);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 VAR_13 = VAR_12->buf;

 FUNC_18(&VAR_11->mcg_table.mutex);
 VAR_19 = FUNC_5(VAR_5, VAR_20, VAR_7, VAR_9,
    VAR_12, &VAR_16, &VAR_15);
 if (VAR_19)
  goto out;

 if (VAR_15 != -1) {
  if (!(FUNC_2(VAR_13->members_count) & 0xffffff)) {
   VAR_21 = 1;
   FUNC_6(VAR_13->gid, VAR_7, 16);
  }
 } else {
  VAR_17 = 1;

  VAR_15 = FUNC_11(&VAR_11->mcg_table.bitmap);
  if (VAR_15 == -1) {
   FUNC_14(VAR_5, "No AMGM entries left\n");
   VAR_19 = -VAR_0;
   goto out;
  }
  VAR_15 += VAR_5->caps.num_mgms;

  VAR_21 = 1;
  FUNC_7(VAR_13, 0, sizeof(*VAR_13));
  FUNC_6(VAR_13->gid, VAR_7, 16);
 }

 VAR_14 = FUNC_2(VAR_13->members_count) & 0xffffff;
 if (VAR_14 == VAR_5->caps.num_qp_per_mgm) {
  FUNC_14(VAR_5, "MGM at index %x is full\n", VAR_15);
  VAR_19 = -VAR_0;
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14; ++VAR_18)
  if ((FUNC_2(VAR_13->qp[VAR_18]) & VAR_2) == VAR_6->qpn) {
   FUNC_13(VAR_5, "QP %06x already a member of MGM\n", VAR_6->qpn);
   VAR_19 = 0;
   goto out;
  }

 if (VAR_8)
  VAR_13->qp[VAR_14++] = FUNC_3((VAR_6->qpn & VAR_2) |
             (1U << VAR_1));
 else
  VAR_13->qp[VAR_14++] = FUNC_3(VAR_6->qpn & VAR_2);

 VAR_13->members_count = FUNC_3(VAR_14 | (u32) VAR_9 << 30);

 VAR_19 = FUNC_9(VAR_5, VAR_15, VAR_12);
 if (VAR_19)
  goto out;

 if (!VAR_17)
  goto out;

 VAR_19 = FUNC_8(VAR_5, VAR_16, VAR_12);
 if (VAR_19)
  goto out;

 VAR_13->next_gid_index = FUNC_3(VAR_15 << 6);

 VAR_19 = FUNC_9(VAR_5, VAR_16, VAR_12);
 if (VAR_19)
  goto out;

out:
 if (VAR_9 == VAR_3 && VAR_15 != -1) {

  if (VAR_21)
   VAR_19 = FUNC_20(VAR_5, VAR_20, VAR_10,
       VAR_15, VAR_6->qpn);
  else
   VAR_19 = FUNC_4(VAR_5, VAR_20, VAR_10,
            VAR_15, VAR_6->qpn);
 }
 if (VAR_19 && VAR_17 && VAR_15 != -1) {
  if (VAR_15 < VAR_5->caps.num_mgms)
   FUNC_17(VAR_5, "Got AMGM index %d < %d\n",
      VAR_15, VAR_5->caps.num_mgms);
  else
   FUNC_12(&VAR_11->mcg_table.bitmap,
      VAR_15 - VAR_5->caps.num_mgms, VAR_4);
 }
 FUNC_19(&VAR_11->mcg_table.mutex);

 FUNC_15(VAR_5, VAR_12);
 return VAR_19;
}
