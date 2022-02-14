
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (char*,int*,int *,int *) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_7, u8 VAR_8,
     u32 *VAR_9)
{
 char VAR_10[VAR_3];
 u32 VAR_11;
 int VAR_12;




 FUNC_1(VAR_10, VAR_8, 0, 0);
 VAR_12 = FUNC_3(VAR_7->core, FUNC_0(VAR_6), VAR_10);
 if (VAR_12)
  return VAR_12;
 FUNC_2(VAR_10, &VAR_11, ((void*)0), ((void*)0));

 if (VAR_11 &
     VAR_2) {
  *VAR_9 = VAR_5;
  return 0;
 }

 if (VAR_11 &
     VAR_1) {
  *VAR_9 = VAR_4;
  return 0;
 }

 return -VAR_0;
}
