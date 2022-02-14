
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_vport_state {int link_state; } ;
struct TYPE_7__ {TYPE_2__* vf_admin; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct TYPE_5__ {int * do_sense_port; } ;
struct mlx4_priv {TYPE_4__ mfunc; TYPE_1__ sense; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_6__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 scalar_t__ FUNC_3 (struct mlx4_priv*,int,int) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int,int) ;
 int FUNC_6 (struct mlx4_dev*,char*,int,int,int) ;

int FUNC_7(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_4(VAR_3);
 struct mlx4_vport_state *VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_3, VAR_9, VAR_4);
 switch (VAR_6) {
 case 130:

  if (!VAR_7->sense.do_sense_port[VAR_4])
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;
     break;

 case 128:
  VAR_10 = VAR_1;
     break;

 case 129:
  VAR_10 = VAR_2;
     break;

 default:
  FUNC_6(VAR_3, "unknown value for link_state %02x on slave %d port %d\n",
     VAR_6, VAR_9, VAR_4);
  return -VAR_0;
 }
 VAR_8 = &VAR_7->mfunc.master.vf_admin[VAR_9].vport[VAR_4];
 VAR_8->link_state = VAR_6;


 FUNC_1(VAR_3, VAR_9, VAR_4, VAR_10);

 if (FUNC_3(VAR_7, VAR_9, VAR_4))
  FUNC_0(VAR_3,
    "updating vf %d port %d no link state HW enforcement\n",
    VAR_5, VAR_4);
 return 0;
}
