
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlx4_qp_context {int remote_qpn; } ;
struct mlx4_qp {scalar_t__ qpn; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_qp*,struct mlx4_qp_context*) ;

u16 FUNC_3(struct mlx4_dev *VAR_0, u32 VAR_1)
{
 struct mlx4_qp_context VAR_2;
 struct mlx4_qp VAR_3;
 int VAR_4;

 VAR_3.qpn = VAR_1;
 VAR_4 = FUNC_2(VAR_0, &VAR_3, &VAR_2);
 if (!VAR_4) {
  u32 VAR_5 = FUNC_0(VAR_2.remote_qpn) & 0xffffff;
  u16 VAR_6 = FUNC_1(VAR_5);
  u16 VAR_7 = FUNC_1(VAR_1);

  return (VAR_5 != VAR_1) ?
   ((VAR_6 ^ VAR_7) | 0xC000) :
   VAR_7 | 0xC000;
 }
 return 0xdead;
}
