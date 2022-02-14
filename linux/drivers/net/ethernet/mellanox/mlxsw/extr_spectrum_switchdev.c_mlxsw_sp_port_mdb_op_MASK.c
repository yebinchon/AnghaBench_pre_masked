
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_6, const char *VAR_7,
    u16 VAR_8, u16 VAR_9, bool VAR_10)
{
 char *VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_5(VAR_11, FUNC_7(VAR_10), 0);
 FUNC_3(VAR_11, 0, VAR_7, VAR_8,
         VAR_4, VAR_9);
 VAR_12 = FUNC_4(VAR_11);
 VAR_13 = FUNC_6(VAR_6->core, FUNC_0(VAR_5), VAR_11);
 if (VAR_13)
  goto out;

 if (VAR_12 != FUNC_4(VAR_11))
  VAR_13 = -VAR_0;

out:
 FUNC_1(VAR_11);
 return VAR_13;
}
