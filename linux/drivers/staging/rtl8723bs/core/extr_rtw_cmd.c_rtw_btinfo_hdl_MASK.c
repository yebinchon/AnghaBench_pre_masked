
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct btinfo {scalar_t__ cid; int len; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adapter*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2, u8 *VAR_3, u16 VAR_4)
{


 struct btinfo *VAR_5 = (struct btinfo *)VAR_3;
 u8 VAR_6;
 u8 VAR_7;

 VAR_6 = VAR_5->cid;

 if (VAR_5->len > VAR_4-2) {
  FUNC_1(1);
  VAR_7 = VAR_4-2;
 } else {
  VAR_7 = VAR_5->len;
 }


 if (VAR_6 == 0x23)
  VAR_3[1] = 0;
 else if (VAR_6 == 0x27)
  VAR_3[1] = 2;
 FUNC_0(VAR_2, VAR_7+1, &VAR_3[1]);
}
