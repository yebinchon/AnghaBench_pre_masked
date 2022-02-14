
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct cgx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cgx* FUNC_0 (int) ;
 int FUNC_1 (struct cgx*,int,scalar_t__) ;
 int FUNC_2 (struct cgx*,int,scalar_t__,int) ;
 int FUNC_3 (int*) ;

int FUNC_4(u8 VAR_4, u8 VAR_5, u8 *VAR_6)
{
 struct cgx *VAR_7 = FUNC_0(VAR_4);
 u64 VAR_8;




 VAR_8 = FUNC_3 (VAR_6);

 FUNC_2(VAR_7, 0, (VAR_0 + (VAR_5 * 0x8)),
    VAR_8 | VAR_2 | ((u64)VAR_5 << 49));

 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_1);
 VAR_8 |= VAR_3;
 FUNC_2(VAR_7, VAR_5, VAR_1, VAR_8);

 return 0;
}
