
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct _adapter {int dummy; } ;
struct IOCMD_STRUCT {int cmdclass; int value; int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct _adapter *VAR_0,
    struct IOCMD_STRUCT VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;
 u8 VAR_4 = VAR_1.cmdclass;
 u32 VAR_5 = VAR_1.value;
 u8 VAR_6 = VAR_1.index;

 FUNC_2(VAR_0, &VAR_2, 0);
 FUNC_0(100);
 VAR_3 = (VAR_4 << 24) | (VAR_5 << 8) | VAR_6;
 return FUNC_1(VAR_0, VAR_3);
}
