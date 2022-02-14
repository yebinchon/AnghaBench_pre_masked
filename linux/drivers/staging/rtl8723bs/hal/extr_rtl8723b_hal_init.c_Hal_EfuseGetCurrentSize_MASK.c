
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,int) ;

__attribute__((used)) static u16 FUNC_2(
 struct adapter *VAR_1, u8 VAR_2, bool VAR_3
)
{
 u16 VAR_4 = 0;

 if (VAR_2 == VAR_0)
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 else
  VAR_4 = FUNC_0(VAR_1, VAR_3);

 return VAR_4;
}
