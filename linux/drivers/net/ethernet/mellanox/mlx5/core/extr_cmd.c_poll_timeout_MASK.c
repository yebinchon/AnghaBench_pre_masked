
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_cmd_work_ent {int ret; TYPE_1__* lay; } ;
struct TYPE_2__ {int status_own; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mlx5_cmd_work_ent *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + FUNC_2(VAR_2 + 1000);
 u8 VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_4->lay->status_own);
  if (!(VAR_6 & VAR_0)) {
   VAR_4->ret = 0;
   return;
  }
  FUNC_1();
 } while (FUNC_3(VAR_3, VAR_5));

 VAR_4->ret = -VAR_1;
}
