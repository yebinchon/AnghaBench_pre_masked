
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_5);
 if (VAR_5 == -VAR_0)
  return VAR_5;
 if (VAR_4 & VAR_2)
  return 1;

 return 0;
}
