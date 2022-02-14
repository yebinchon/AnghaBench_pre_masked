
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct artpec6_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct artpec6_pcie*,int ) ;
 int FUNC_1 (struct artpec6_pcie*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct artpec6_pcie *VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_13, VAR_3);
 VAR_14 |= VAR_12 |
  VAR_8 |
  VAR_4 |
  VAR_7;
 VAR_14 |= VAR_11;
 VAR_14 &= ~VAR_6;
 VAR_14 &= ~VAR_5;
 FUNC_1(VAR_13, VAR_3, VAR_14);
 FUNC_2(5000, 6000);

 VAR_14 = FUNC_0(VAR_13, VAR_0);
 VAR_14 |= VAR_1;
 FUNC_1(VAR_13, VAR_0, VAR_14);
 FUNC_2(20, 30);

 VAR_14 = FUNC_0(VAR_13, VAR_3);
 VAR_14 |= VAR_9 | VAR_10;
 FUNC_1(VAR_13, VAR_3, VAR_14);
 FUNC_2(6000, 7000);

 VAR_14 = FUNC_0(VAR_13, VAR_0);
 VAR_14 &= ~VAR_2;
 FUNC_1(VAR_13, VAR_0, VAR_14);
}
