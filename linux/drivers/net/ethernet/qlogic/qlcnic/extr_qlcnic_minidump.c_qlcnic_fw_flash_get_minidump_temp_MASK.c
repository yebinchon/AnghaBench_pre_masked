
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int *,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2,
          u8 *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2,
      VAR_1,
      VAR_3, VAR_4 / sizeof(u32));

 FUNC_3(VAR_2);

 return VAR_5;
}
