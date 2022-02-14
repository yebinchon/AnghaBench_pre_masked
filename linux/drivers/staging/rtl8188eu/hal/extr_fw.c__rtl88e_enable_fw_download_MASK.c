
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1, bool VAR_2)
{
 u8 VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  FUNC_1(VAR_1, VAR_0, VAR_3 | 0x01);

  VAR_3 = FUNC_0(VAR_1, VAR_0 + 2);
  FUNC_1(VAR_1, VAR_0 + 2, VAR_3 & 0xf7);
 } else {
  VAR_3 = FUNC_0(VAR_1, VAR_0);
  FUNC_1(VAR_1, VAR_0, VAR_3 & 0xfe);

  FUNC_1(VAR_1, VAR_0 + 1, 0x00);
 }
}
