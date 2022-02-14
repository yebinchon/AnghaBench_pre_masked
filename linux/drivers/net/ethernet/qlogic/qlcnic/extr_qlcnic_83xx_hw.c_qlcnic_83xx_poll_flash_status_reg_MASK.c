
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = VAR_1;
 int VAR_7 = 0;

 do {
  VAR_5 = FUNC_0(VAR_4, VAR_2, &VAR_7);
  if (VAR_7 == -VAR_0)
   return VAR_7;

  if ((VAR_5 & VAR_3) ==
      VAR_3)
   break;

  FUNC_1(1000, 1100);
 } while (--VAR_6);

 if (!VAR_6)
  return -VAR_0;

 return 0;
}
