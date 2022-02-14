
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_3, u16 VAR_4,
          __be32 VAR_5, bool VAR_6, u32 VAR_7,
          bool VAR_8)
{
 char VAR_9[VAR_0];

 FUNC_3(VAR_9, VAR_1, VAR_4,
       0);
 FUNC_6(VAR_9, VAR_6);
 FUNC_4(VAR_9, FUNC_1(VAR_5));
 FUNC_5(VAR_9, VAR_8);
 FUNC_2(VAR_9, VAR_7);
 return FUNC_7(VAR_3->core, FUNC_0(VAR_2), VAR_9);
}
