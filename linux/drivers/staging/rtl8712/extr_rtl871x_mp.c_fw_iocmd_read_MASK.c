
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct _adapter {int dummy; } ;
struct IOCMD_STRUCT {int cmdclass; int value; int index; } ;


 scalar_t__ FUNC_0 (struct _adapter*,int) ;
 int FUNC_1 (struct _adapter*,int*,int) ;

__attribute__((used)) static u32 FUNC_2(struct _adapter *VAR_0, struct IOCMD_STRUCT VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;
 u8 VAR_4 = VAR_1.cmdclass;
 u16 VAR_5 = VAR_1.value;
 u8 VAR_6 = VAR_1.index;

 VAR_2 = (VAR_4 << 24) | (VAR_5 << 8) | VAR_6;
 if (FUNC_0(VAR_0, VAR_2))
  FUNC_1(VAR_0, &VAR_3, 1);
 else
  VAR_3 = 0;
 return VAR_3;
}
