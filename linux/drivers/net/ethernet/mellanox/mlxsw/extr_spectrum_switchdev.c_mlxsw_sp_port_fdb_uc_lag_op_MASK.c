
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
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int ,char const*,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct mlxsw_sp *VAR_6, u16 VAR_7,
           const char *VAR_8, u16 VAR_9, u16 VAR_10,
           bool VAR_11, bool VAR_12)
{
 char *VAR_13;
 u8 VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_4(VAR_13, FUNC_7(VAR_11), 0);
 FUNC_5(VAR_13, 0, FUNC_8(VAR_12),
      VAR_8, VAR_9, VAR_4,
      VAR_10, VAR_7);
 VAR_14 = FUNC_3(VAR_13);
 VAR_15 = FUNC_6(VAR_6->core, FUNC_0(VAR_5), VAR_13);
 if (VAR_15)
  goto out;

 if (VAR_14 != FUNC_3(VAR_13))
  VAR_15 = -VAR_0;

out:
 FUNC_1(VAR_13);
 return VAR_15;
}
