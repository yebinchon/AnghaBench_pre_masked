
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct advk_pcie {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct advk_pcie*,int ) ;
 int FUNC_2 (struct advk_pcie*,scalar_t__,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct advk_pcie *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u16 VAR_11;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 VAR_9 = VAR_7 & ~VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (!(FUNC_0(VAR_10) & VAR_9))
   continue;

  FUNC_2(VAR_6, FUNC_0(VAR_10), VAR_5);
  VAR_11 = FUNC_1(VAR_6, VAR_4) & 0xFF;
  FUNC_3(VAR_11);
 }

 FUNC_2(VAR_6, VAR_1,
      VAR_2);
}
