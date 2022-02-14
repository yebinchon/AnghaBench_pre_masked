
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct mlxsw_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,int ,int ,int ,int,int ) ;
 int FUNC_3 (struct mlxsw_core*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_6, int VAR_7,
       bool *VAR_8)
{
 char VAR_9[VAR_1];
 char VAR_10[VAR_3];
 u8 VAR_11;
 int VAR_12;

 FUNC_2(VAR_10, VAR_7, 0, VAR_4, 0, 1,
       VAR_2);
 VAR_12 = FUNC_3(VAR_6, FUNC_0(VAR_5), VAR_10);
 if (VAR_12)
  return VAR_12;
 FUNC_1(VAR_10, VAR_9);
 VAR_11 = VAR_9[0];
 switch (VAR_11) {
 case 128:
  *VAR_8 = 0;
  break;
 case 132:
 case 129:
 case 131:
 case 130:
  *VAR_8 = 1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
