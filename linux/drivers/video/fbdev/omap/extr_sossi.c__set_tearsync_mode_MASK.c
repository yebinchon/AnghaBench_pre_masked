
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_2, unsigned VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 VAR_4 &= ~(((1 << 11) - 1) << 15);
 VAR_4 |= VAR_3 << 15;
 VAR_4 &= ~(0x3 << 26);
 VAR_4 |= VAR_2 << 26;
 FUNC_3(VAR_1, VAR_4);
 if (VAR_2)
  FUNC_2(VAR_0, 1 << 6);
 else
  FUNC_0(VAR_0, 1 << 6);
}
