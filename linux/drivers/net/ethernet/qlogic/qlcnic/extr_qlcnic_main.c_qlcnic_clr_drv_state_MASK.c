
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_5(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3;

 if (FUNC_3(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_3, VAR_2->portnum);
 FUNC_2(VAR_2, VAR_1, VAR_3);

 FUNC_4(VAR_2);

 return 0;
}
