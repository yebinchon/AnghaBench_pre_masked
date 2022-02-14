
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct _adapter*,int,scalar_t__,int*) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*) ;

u8 FUNC_3(struct _adapter *VAR_2, u8 VAR_3, u16 VAR_4,
        u16 VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u8 VAR_8 = 1;

 if (VAR_4 > VAR_0)
  return 0;
 if (!VAR_3 && ((VAR_4 + VAR_5) >
    VAR_1))
  return 0;
 if (!VAR_3 && !FUNC_1(VAR_2))
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if ((VAR_4 + VAR_7) > VAR_0) {
   VAR_8 = 0;
   break;
  }
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4 + VAR_7,
     VAR_6 + VAR_7);
  if (!VAR_3 && !VAR_8)
   break;
 }
 if (!VAR_3)
  FUNC_2(VAR_2);
 return VAR_8;
}
