
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qlcnic_adapter {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_7(struct qlcnic_adapter *VAR_4, u8 VAR_5)
{
 u32 VAR_6;

 FUNC_4(VAR_5 != VAR_3 &&
   VAR_5 != VAR_2);

 if (FUNC_5(VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_1);

 if (VAR_5 == VAR_3)
  FUNC_1(VAR_6, VAR_4->portnum);
 else if (VAR_5 == VAR_2)
  FUNC_0(VAR_6, VAR_4->portnum);

 FUNC_3(VAR_4, VAR_1, VAR_6);

 FUNC_6(VAR_4);

 return 0;
}
