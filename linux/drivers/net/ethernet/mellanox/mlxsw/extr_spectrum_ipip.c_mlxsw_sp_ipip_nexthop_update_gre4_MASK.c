
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_ipip_entry {int ol_dev; int ol_lb; } ;
struct mlxsw_sp {int core; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp *VAR_4, u32 VAR_5,
      struct mlxsw_sp_ipip_entry *VAR_6)
{
 u16 VAR_7 = FUNC_5(VAR_6->ol_lb);
 __be32 VAR_8 = FUNC_6(VAR_6->ol_dev);
 char VAR_9[VAR_0];

 FUNC_3(VAR_9, VAR_1,
       1, VAR_2,
       VAR_5, VAR_7);
 FUNC_2(VAR_9, FUNC_1(VAR_8));

 return FUNC_4(VAR_4->core, FUNC_0(VAR_3), VAR_9);
}
