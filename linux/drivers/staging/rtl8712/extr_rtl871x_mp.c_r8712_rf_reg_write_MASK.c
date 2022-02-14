
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
 int FUNC_0 (struct _adapter*,struct IOCMD_STRUCT,int ) ;

u8 FUNC_1(struct _adapter *VAR_2, u8 VAR_3, u8 VAR_4, u32 VAR_5)
{
 u16 VAR_6 = (VAR_3 << 8) | VAR_4;
 struct IOCMD_STRUCT VAR_7;

 VAR_7.cmdclass = VAR_0;
 VAR_7.value = VAR_6;
 VAR_7.index = VAR_1;
 return FUNC_0(VAR_2, VAR_7, VAR_5);
}
