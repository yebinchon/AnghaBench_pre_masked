
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct _adapter {int dummy; } ;
struct IOCMD_STRUCT {int value; int index; int cmdclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _adapter*,struct IOCMD_STRUCT) ;

u32 FUNC_1(struct _adapter *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = VAR_3 & 0x0003;
 u16 VAR_5 = VAR_3 & 0x0FFC;
 u32 VAR_6 = 0;
 struct IOCMD_STRUCT VAR_7;

 VAR_7.cmdclass = VAR_1;
 VAR_7.value = VAR_5;
 VAR_7.index = VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_7);
 if (VAR_4 != 0) {
  u32 VAR_8 = 0;

  VAR_6 >>= (VAR_4 * 8);
  VAR_7.value += 4;
  VAR_8 = FUNC_0(VAR_2, VAR_7);
  VAR_8 <<= ((4 - VAR_4) * 8);
  VAR_6 |= VAR_8;
 }
 return VAR_6;
}
