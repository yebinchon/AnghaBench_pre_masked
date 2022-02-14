
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int*) ;
 int FUNC_2 (struct e1000_hw*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct e1000_hw *VAR_4, u32 VAR_5, u16 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;





 VAR_8 = 0x01;
 VAR_8 <<= (VAR_6 - 1);

 VAR_7 = FUNC_3(VAR_0);


 VAR_7 |= (VAR_3 | VAR_1);

 while (VAR_8) {





  if (VAR_5 & VAR_8)
   VAR_7 |= VAR_2;
  else
   VAR_7 &= ~VAR_2;

  FUNC_4(VAR_0, VAR_7);
  FUNC_0();

  FUNC_5(10);

  FUNC_2(VAR_4, &VAR_7);
  FUNC_1(VAR_4, &VAR_7);

  VAR_8 = VAR_8 >> 1;
 }
}
