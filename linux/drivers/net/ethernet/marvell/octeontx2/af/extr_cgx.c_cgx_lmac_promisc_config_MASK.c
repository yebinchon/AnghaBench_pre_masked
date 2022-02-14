
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cgx* FUNC_0 (int) ;
 int FUNC_1 (struct cgx*,int,scalar_t__) ;
 int FUNC_2 (struct cgx*,int,scalar_t__,int) ;

void FUNC_3(int VAR_6, int VAR_7, bool VAR_8)
{
 struct cgx *VAR_9 = FUNC_0(VAR_6);
 u64 VAR_10 = 0;

 if (!VAR_9)
  return;

 if (VAR_8) {

  VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_1);
  VAR_10 &= ~(VAR_3 | VAR_5);
  VAR_10 |= VAR_2;
  FUNC_2(VAR_9, VAR_7, VAR_1, VAR_10);

  VAR_10 = FUNC_1(VAR_9, 0,
          (VAR_0 + VAR_7 * 0x8));
  VAR_10 &= ~VAR_4;
  FUNC_2(VAR_9, 0,
     (VAR_0 + VAR_7 * 0x8), VAR_10);
 } else {

  VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_1);
  VAR_10 |= VAR_3 | VAR_5;
  FUNC_2(VAR_9, VAR_7, VAR_1, VAR_10);
  VAR_10 = FUNC_1(VAR_9, 0,
          (VAR_0 + VAR_7 * 0x8));
  VAR_10 |= VAR_4;
  FUNC_2(VAR_9, 0,
     (VAR_0 + VAR_7 * 0x8), VAR_10);
 }
}
