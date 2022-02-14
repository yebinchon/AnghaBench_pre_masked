
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx4_slave_state {int old_vlan_api; } ;
struct TYPE_4__ {struct mlx4_slave_state* slave_state; } ;
struct TYPE_5__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct TYPE_6__ {int num_ports; } ;
struct mlx4_dev {TYPE_3__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int,scalar_t__,int*) ;
 int FUNC_1 (struct mlx4_dev*,int,scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (struct mlx4_dev*,int,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4, int VAR_5,
     u64 VAR_6, u64 *VAR_7, int VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_3(VAR_2);
 struct mlx4_slave_state *VAR_10 = VAR_9->mfunc.master.slave_state;
 int VAR_11;
 u16 VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = !VAR_8 ? FUNC_2(VAR_7) : VAR_8;

 if (!VAR_14 || VAR_4 != VAR_1)
  return -VAR_0;

 VAR_14 = FUNC_4(
   VAR_2, VAR_3, VAR_14);

 if (VAR_14 < 0)
  return -VAR_0;

 if (!VAR_8 && VAR_14 > 0 && VAR_14 <= VAR_2->caps.num_ports) {
  VAR_10[VAR_3].old_vlan_api = 1;
  return 0;
 }

 VAR_12 = (u16) VAR_6;

 VAR_11 = FUNC_0(VAR_2, VAR_14, VAR_12, &VAR_13);
 if (!VAR_11) {
  FUNC_5(VAR_7, (u32) VAR_13);
  VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_12, VAR_14, VAR_13);
  if (VAR_11)
   FUNC_1(VAR_2, VAR_14, VAR_12);
 }
 return VAR_11;
}
