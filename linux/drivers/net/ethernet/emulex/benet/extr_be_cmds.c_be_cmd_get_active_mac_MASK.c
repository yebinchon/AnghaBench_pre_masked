
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int *,int*,int *,int ,int ) ;
 int FUNC_2 (struct be_adapter*,int *,int,int ,int ) ;

int FUNC_3(struct be_adapter *VAR_0, u32 VAR_1,
     u8 *VAR_2, u32 VAR_3, bool VAR_4, u32 VAR_5)
{
 if (!VAR_4)
  FUNC_1(VAR_0, VAR_2, &VAR_4, &VAR_1,
      VAR_3, VAR_5);
 if (FUNC_0(VAR_0))
  return FUNC_2(VAR_0, VAR_2, 0,
          VAR_3, VAR_1);
 else

  return FUNC_1(VAR_0, VAR_2, &VAR_4,
      &VAR_1,
      VAR_3, VAR_5);
}
