
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ,int*) ;
 int FUNC_1 (struct adapter*,int ,int*) ;

s32 FUNC_2(struct adapter *VAR_4, u32 VAR_5)
{
 u8 VAR_6;


 VAR_6 = 0;
 FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (0 == VAR_6)
  return VAR_2;

 FUNC_1(VAR_4, VAR_1, (u8 *)&VAR_5);

 return VAR_3;
}
