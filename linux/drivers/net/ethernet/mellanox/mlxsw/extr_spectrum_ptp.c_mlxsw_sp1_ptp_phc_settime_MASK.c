
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp_ptp_clock {int lock; int tc; struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (struct mlxsw_core*,int ,char*) ;
 int FUNC_5 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp_ptp_clock *VAR_6, u64 VAR_7)
{
 struct mlxsw_core *VAR_8 = VAR_6->core;
 u64 VAR_9, VAR_10, VAR_11;
 char VAR_12[VAR_1];
 char VAR_13[VAR_0];
 int VAR_14;

 VAR_9 = FUNC_1(VAR_7, VAR_3) + 1;
 VAR_10 = VAR_9 * VAR_3;

 FUNC_6(&VAR_6->lock);
 VAR_11 = FUNC_5(&VAR_6->tc, VAR_10);
 FUNC_7(&VAR_6->lock);

 FUNC_2(VAR_13, VAR_11);
 VAR_14 = FUNC_4(VAR_8, FUNC_0(VAR_4), VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_3(VAR_12,
        VAR_2,
        0, VAR_9);
 return FUNC_4(VAR_8, FUNC_0(VAR_5), VAR_12);
}
