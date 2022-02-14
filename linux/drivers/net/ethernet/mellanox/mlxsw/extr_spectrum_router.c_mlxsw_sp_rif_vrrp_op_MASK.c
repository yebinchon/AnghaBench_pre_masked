
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_2, u16 VAR_3,
    const u8 *VAR_4, bool VAR_5)
{
 char VAR_6[VAR_0];
 u8 VAR_7 = VAR_5 ? VAR_4[5] : 0;
 int VAR_8;

 if (!FUNC_6(VAR_4) &&
     !FUNC_7(VAR_4))
  return 0;

 FUNC_4(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_2->core, FUNC_0(VAR_1), VAR_6);
 if (VAR_8)
  return VAR_8;

 if (FUNC_6(VAR_4))
  FUNC_2(VAR_6, VAR_7);
 else
  FUNC_3(VAR_6, VAR_7);

 return FUNC_5(VAR_2->core, FUNC_0(VAR_1), VAR_6);
}
