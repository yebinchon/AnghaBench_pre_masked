
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct adapter*,scalar_t__,int*) ;

__attribute__((used)) static bool FUNC_1(struct adapter *VAR_0, u8 VAR_1, u16 VAR_2)
{
 bool VAR_3 = 0;
 u8 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < (VAR_1 * 2); VAR_4++) {
  if (FUNC_0(VAR_0, (VAR_2 + VAR_4), &VAR_5) && (VAR_5 != 0xFF))
   VAR_3 = 1;
 }
 return VAR_3;
}
