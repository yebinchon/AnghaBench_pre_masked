
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int *,int*,int *,int,int ) ;
 int FUNC_1 (struct be_adapter*,int,int ,int ) ;
 int FUNC_2 (struct be_adapter*,int *,int,int ) ;

int FUNC_3(struct be_adapter *VAR_1, u8 *VAR_2, int VAR_3, u32 VAR_4)
{
 bool VAR_5 = 0;
 u8 VAR_6[VAR_0];
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_6, &VAR_5,
       &VAR_7, VAR_3, VAR_4);

 if (!VAR_8 && VAR_5)
  FUNC_1(VAR_1, VAR_3, VAR_7, VAR_4);

 return FUNC_2(VAR_1, VAR_2, VAR_2 ? 1 : 0, VAR_4);
}
