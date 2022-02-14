
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct _adapter*,scalar_t__) ;
 int FUNC_2 (struct _adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct _adapter *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3) {



  VAR_4 = FUNC_1(VAR_2, VAR_1 + 3);
  VAR_4 |= 0x80;
  FUNC_2(VAR_2, VAR_1 + 3, VAR_4);
  FUNC_0(20);

  FUNC_2(VAR_2, VAR_0, 0x03);
  FUNC_0(20);
 } else {



  VAR_4 = FUNC_1(VAR_2, VAR_1 + 3);
  VAR_4 &= 0x7F;
  FUNC_2(VAR_2, VAR_1 + 3, VAR_4);

  FUNC_2(VAR_2, VAR_0, 0x02);
 }
}
