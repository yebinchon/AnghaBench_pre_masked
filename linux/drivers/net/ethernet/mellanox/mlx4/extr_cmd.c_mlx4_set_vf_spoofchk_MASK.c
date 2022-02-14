
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_vport_state {int spoofchk; int mac; } ;
struct TYPE_7__ {TYPE_2__* vf_admin; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct TYPE_5__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_6__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*,char*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int,int) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct mlx4_dev *VAR_5, int VAR_6, int VAR_7, bool VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_4(VAR_5);
 struct mlx4_vport_state *VAR_10;
 int VAR_11;
 u8 VAR_12[VAR_3];

 if ((!FUNC_3(VAR_5)) ||
     !(VAR_5->caps.flags2 & VAR_4))
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_5, VAR_7);
 if (VAR_11 < 0)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_5, VAR_11, VAR_6);
 VAR_10 = &VAR_9->mfunc.master.vf_admin[VAR_11].vport[VAR_6];

 FUNC_6(VAR_12, VAR_10->mac);
 if (VAR_8 && !FUNC_0(VAR_12)) {
  FUNC_2(VAR_5, "Illegal MAC with spoofchk\n");
  return -VAR_1;
 }

 VAR_10->spoofchk = VAR_8;

 return 0;
}
