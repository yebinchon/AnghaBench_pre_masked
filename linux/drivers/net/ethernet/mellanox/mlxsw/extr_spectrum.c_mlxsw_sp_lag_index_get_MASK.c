
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_upper {struct net_device* dev; scalar_t__ ref_count; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mlxsw_sp_upper* FUNC_1 (struct mlxsw_sp*,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_2,
      struct net_device *VAR_3,
      u16 *VAR_4)
{
 struct mlxsw_sp_upper *VAR_5;
 int VAR_6 = -1;
 u64 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_2->core, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_5 = FUNC_1(VAR_2, VAR_8);
  if (VAR_5->ref_count) {
   if (VAR_5->dev == VAR_3) {
    *VAR_4 = VAR_8;
    return 0;
   }
  } else if (VAR_6 < 0) {
   VAR_6 = VAR_8;
  }
 }
 if (VAR_6 < 0)
  return -VAR_0;
 *VAR_4 = VAR_6;
 return 0;
}
