
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct mlxsw_res {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (struct mlxsw_res*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mlxsw_res *VAR_1, u16 VAR_2, u64 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4] == VAR_2) {
   FUNC_1(VAR_1, VAR_4, VAR_3);
   return;
  }
 }
}
