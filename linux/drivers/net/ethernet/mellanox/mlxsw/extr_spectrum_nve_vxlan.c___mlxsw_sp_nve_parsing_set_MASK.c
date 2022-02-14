
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2,
          unsigned int VAR_3,
          __be16 VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_2(VAR_5, VAR_3, FUNC_1(VAR_4));
 return FUNC_3(VAR_2->core, FUNC_0(VAR_1), VAR_5);
}
