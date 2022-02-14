
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int width; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; TYPE_1__ mapping; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct mlxsw_sp*,int const) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_6)
{
 const u32 VAR_7[] = {
  [0] = VAR_3 * VAR_6->mapping.width,
  [9] = VAR_0,
 };
 struct mlxsw_sp *VAR_8 = VAR_6->mlxsw_sp;
 char VAR_9[VAR_1];
 int VAR_10;

 FUNC_3(VAR_9, VAR_6->local_port,
       0xffff, 0xffff / 2);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {
  u16 VAR_11 = FUNC_5(VAR_8, VAR_7[VAR_10]);

  if (VAR_10 == VAR_4)
   continue;
  FUNC_2(VAR_9, VAR_10, VAR_11);
 }
 FUNC_2(VAR_9,
      VAR_2, 0);
 return FUNC_4(VAR_8->core, FUNC_1(VAR_5), VAR_9);
}
