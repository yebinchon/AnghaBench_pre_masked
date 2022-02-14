
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_adapter*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_1,
       u32 VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 = FUNC_1(VAR_1, &VAR_4);
  if (VAR_3)
   continue;
  if (VAR_4 == VAR_0) {
   VAR_3 = 0;
   break;
  }

  FUNC_0(100);
  VAR_3 = -1;
 }

 return VAR_3;
}
