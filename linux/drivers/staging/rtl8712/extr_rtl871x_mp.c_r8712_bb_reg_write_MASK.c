
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct _adapter {int dummy; } ;
struct IOCMD_STRUCT {int value; int index; int cmdclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct _adapter*,struct IOCMD_STRUCT,int) ;
 int FUNC_1 (struct _adapter*,int) ;

u8 FUNC_2(struct _adapter *VAR_2, u16 VAR_3, u32 VAR_4)
{
 u8 VAR_5 = VAR_3 & 0x0003;
 u16 VAR_6 = VAR_3 & 0x0FFC;
 struct IOCMD_STRUCT VAR_7;

 VAR_7.cmdclass = VAR_1;
 VAR_7.value = VAR_6;
 VAR_7.index = VAR_0;
 if (VAR_5 != 0) {
  u32 VAR_8 = 0;
  u32 VAR_9 = VAR_4;

  VAR_8 = FUNC_1(VAR_2, VAR_7.value);
  VAR_8 &= (0xFFFFFFFF >> ((4 - VAR_5) * 8));
  VAR_4 = VAR_8 | (VAR_9 << (VAR_5 * 8));
  if (!FUNC_0(VAR_2, VAR_7, VAR_4))
   return 0;
  VAR_7.value += 4;
  VAR_8 = FUNC_1(VAR_2, VAR_7.value);
  VAR_8 &= (0xFFFFFFFF << (VAR_5 * 8));
  VAR_4 = VAR_8 | (VAR_9 >> ((4 - VAR_5) * 8));
 }
 return FUNC_0(VAR_2, VAR_7, VAR_4);
}
