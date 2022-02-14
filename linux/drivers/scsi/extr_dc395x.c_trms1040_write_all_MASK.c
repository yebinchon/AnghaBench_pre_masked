
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct NvRamType {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (unsigned long,int,int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,int,int) ;

__attribute__((used)) static void FUNC_5(struct NvRamType *VAR_3, unsigned long VAR_4)
{
 u8 *VAR_5 = (u8 *)VAR_3;
 u8 VAR_6;


 FUNC_1((FUNC_0(VAR_4 + VAR_1) | VAR_0),
      VAR_4 + VAR_1);


 FUNC_4(VAR_4, 0x04, 0xFF);
 FUNC_1(0, VAR_4 + VAR_2);
 FUNC_3(VAR_4);


 for (VAR_6 = 0; VAR_6 < 128; VAR_6++, VAR_5++)
  FUNC_2(VAR_4, VAR_6, *VAR_5);


 FUNC_4(VAR_4, 0x04, 0x00);
 FUNC_1(0, VAR_4 + VAR_2);
 FUNC_3(VAR_4);


 FUNC_1((FUNC_0(VAR_4 + VAR_1) & ~VAR_0),
      VAR_4 + VAR_1);
}
